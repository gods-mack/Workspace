

#include<iostream>
#include<cstring>
//using namespace std;


class String {
public:
	String() {
		_buffer  = nullptr;
		length  = 0;
	}
	String (const char *data) {

		this->length = strlen(data);
		_buffer = new char[length + 1];
		strcpy(_buffer, data);
	}
	String (const String &obj) {

		length = obj.length;
		_buffer = new char[length+1];
		strcpy(_buffer, obj._buffer);
	}
	String& operator=(const String& obj) {

		if (this != &obj){ // check for self-assignment  , e.g str2=str2
			char *tmp = _buffer;
			length = obj.length;
			_buffer = new char[length + 1];
			strcpy(_buffer, obj._buffer);
			delete[] tmp;
		}
		return *this;
	}
	~String() {
		if (_buffer){
			delete[] _buffer;
			_buffer = nullptr;
			length = 0;
		}
	}
	friend std::ostream& operator<<(std::ostream &out, const String& str);
	friend std::istream& operator>>(std::istream &in, const String& str);
private:
	char *_buffer;
	size_t length;
};
std::ostream& operator<<(std::ostream &out, const String& str) {
	out<<str._buffer;
	return out;
}
std::istream& operator>>(std::istream &in, 	const String& str) {
	in>>str._buffer;
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
	std::cout<<str2;

}
