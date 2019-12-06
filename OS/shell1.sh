echo 'Enter userName'
read NAME
echo "Name: $NAME"
read A
read B
sum=$(expr "$B" + "$A")
echo "ans : $sum"

x=1
while [ $A -le 10 ]  #less then equal
do
  echo -e "Welcome $A times"
  A=$(( $A + 1 ))
  #echo $'\n'
done

echo 'FOR LOOP'

for i in {1..5}
do
	echo -e "Welcome $i times\n"
done

