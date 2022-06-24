#include<iostream>
#include "String.h"

using namespace std;

void String::print() const {
	cout << this->str << endl;
}
char* String::getStr() const {
	return this->str;
}
void String::setStr(const char* data) {
	delete[] this->str;
	int l = strlen(data)+1;
	this->str = new char[l];
	for (int i = 0; i < l; i++)
		this->str[i] = data[i];
}
