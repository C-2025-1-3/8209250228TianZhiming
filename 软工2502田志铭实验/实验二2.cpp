#include<iostream>
using namespace std;
int main() {
	float x, y,z;
	cin >> x ;
	if (1 > x > 0) {
		z = 3 - 2*x;
		y = z;
		cout << y;
	}
	else if (5 > x >= 1) {
		y = 2/(4*x)+1;
		cout << y;
	}
	else {
		y = x * x;
		cout << y;
	}
	return 0;
}