#ifndef MESSAGE_H
#define MESSAGE_H
#include<string>

class message{
public:
	void print_hello(){

		std::cout<<"hello world!\n";
	}
	int greeting(int s);
	std::string ramram(std::string s);
};

#endif // MESSAGE_H
