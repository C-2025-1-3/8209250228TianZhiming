#include<iostream>
#include"student.h"
using namespace std;
void Student::set_value(int n, const char* nm, char s) {
	num = n;
	strcpy_s(name, nm);
	sex=s;
};
void Student::display() {
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}