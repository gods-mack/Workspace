

#include<iostream>
#include<cstring>

class String {
public:
	String() {
		res = nullptr;
		len = 0;
	}
	String (const char *data) {

		this->len == strlen(data);
		res = new char[len+1];
		strcpy(res, data);
	}
	String (const String &obj) {

		len = obj.len;
		res = new char[len+1];
		strcpy(res, obj.res);
	}
	String& operator=(const String& obj) {

		if (this != &obj){ // check for self-assignment  , e.g str2=str2
			char *tmp = res;
			len = obj.len;
			res = new char[len+1];
			strcpy(res, obj.res);
			delete[] res;
		}
		return *this;
	}
	~String() {

		if (res){
			cout<<"desc on "<<res<<endl;
			delete[] res;
		}
	}
	friend ostream& operator<<(ostream &out, const String& str);
	friend istream& operator>>(istream &in, const String& str);
private:
	char *res;
	unsigned int len;
};
ostream& operator<<(ostream &out, const String& str) {
	out<<str.res;
	return out;
}
 istream& operator>>(istream &in, 	const String& str) {
	in>>str.res;
	return in;
}

int main() {

	String str1; // default constructor
	String str2 = "hellow"; // pareamater constructer
	String str3 = str2; // copy constructor
	String s3 = "kkak";
	str3 = s3; // copy assignment operator
	//std::string s;
	//s = str2;
	//std::cout<<s;
	std::cout<<str2<<endl;

}
