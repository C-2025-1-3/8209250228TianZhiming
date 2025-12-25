#include <iostream>
using namespace std;
int gy(int n, int m) {
	int t;
	n > m ?t=n:( t = n, n = m, m = t);
	t = n % m;
	if (t == 0) {
		return m;
	}
	if (t != 0) {
		return gy(m, t);

	}
}
int main() {
	int x, y;
	cin >> x >> y;
	cout << "最大公约数为：" << gy(x, y) << endl;
	cout << "最小公倍数为：" << x * y / gy(x, y) << endl;
	return 0;
}