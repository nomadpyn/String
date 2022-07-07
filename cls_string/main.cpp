#include<iostream>
#include"String.h"

using namespace std;

int main() {
	String a{ "hello my friend" };
	cout << a.getStr() << endl;
	a.setStr("your welcome");
	a.print();
	cout << a[5] << endl;
	return 0;
}