#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
  bool prime[n + 1];
  memset(prime, true, sizeof(prime));

  for (int p = 2; p * p <= n; p++)
  {
    // If prime[p] is not changed,
    // then it is a prime
    if (prime[p] == true)
    {
      for (int i = p * p; i <= n; i += p)
        prime[i] = false;
    }
  }

  // Print all prime numbers
  for (int p = 2; p <= n; p++)
    if (prime[p])
      cout << p << " ";
}

int main()
{
  int n = 30;
  SieveOfEratosthenes(n);
  return 0;
}