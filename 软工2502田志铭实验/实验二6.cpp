#include<iostream>
using namespace std;
int gcd(int m, int n) {
	if (m &&n ==0)
		return m;
	else return gcd(n, m % n);
}
int main() {
	int a, b, r,c;
	cin >> a >> b;
	r = gcd(a, b);
		c = a * b / r;
	cout << "最大公约数：" << r << endl;
	cout << "最小公倍数：" << c << endl;


	
	return 0;
}