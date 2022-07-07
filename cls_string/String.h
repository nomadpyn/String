#pragma once
#include<cstring>
// Класс Строка
class String {
private:
	char* str;
public:
// конструктор с параметрами
	String(const char* data) {
		int l = strlen(data) + 1;
		this->str = new char[l];
		for (int i = 0; i < l; i++)
			this->str[i] = data[i];
	}
// конструктор с параметрами
	String(int size) {
		this->str = new char[size] {};
	}
// конструктор по умолчанию
	String() :String(80) {}
// деструктор
	~String() {
		delete[] this->str;
	}
// объявление методов класса в заголовочном файле	
	void print() const;
	char* getStr() const;
	void setStr(const char* data);
	char operator[](int) const;
	int operator()(char) const;
};

