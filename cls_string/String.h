#pragma once
#include<cstring>
class String
{
private:
	char* str;
public:
	String(const char* data) {
		int l = strlen(data) + 1;
		this->str = new char[l];
		for (int i = 0; i < l; i++)
			this->str[i] = data[i];
	}
	String(int size) {
		this->str = new char[size] {};
	}
	String() :String(80) {}
	~String() {
		delete[] this->str;
	}
	
	void print() const;
	char* getStr() const;
	void setStr(const char* data);
};

