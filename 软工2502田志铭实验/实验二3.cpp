#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float a, b, c,l,e,f,g;
	cin >> a >> b >> c;
	l = a + b + c;
	e = abs(a - b);
	f = abs(a - c);
	g = abs(b - c);
	if (a + b > c && a + c > b && b + c > a && e < c && f < b && g < a) {
		cout << "这个三角形周长为:" << l<<endl;
		if (a == b == c) { cout << "这个三角形为等边三角形" << endl; 
		}
		else { cout << "这个三角形不是等边三角形" << endl; }
	}
	else { cout << "这不是三角形" << endl; }
	return 0;


}