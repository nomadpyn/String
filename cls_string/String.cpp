﻿#include<iostream>
#include "String.h"

using namespace std;
// метод вывода строки в консоль
void String::print() const {
	cout << this->str << endl;
}
// геттер строки
char* String::getStr() const {
	return this->str;
}
// сеттер строки
void String::setStr(const char* data) {
	delete[] this->str;
	int l = strlen(data)+1;
	this->str = new char[l];
	for (int i = 0; i < l; i++)
		this->str[i] = data[i];
}
// перегрузка [] - возвращает элемент по указаному индексу
char& String::operator[](int value) const {
	int l = strlen(this->str);
	if (value >= 0 && value < l)
		return this->str[value];
	else
		return this->str[l];
}
