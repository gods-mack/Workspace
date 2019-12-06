read -p "Enter first string: " str1
read -p "Enter second string: " str2
if [ "$str1" == "$str2" ]
then
  echo "Both strings are same"
else
  echo "Both strings are different"
fi
