#include<iostream>
#include<cmath>
using namespace std; 
int main() {
	double a, x, y;
	cin >> a;
		x = a;
	if(a<0) {
		cout << "输入错误" << endl;
		return 0;
	}
	else {
		y = (a + a / x) / 2;
		while (fabs(y - x) >= 0.00001) {
			x = y;
			y = (a + a / x) / 2;
			cout << a << "的平方根为" << y << endl;
			break;
		}
	}
}
