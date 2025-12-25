#include<iostream>
using namespace std;
void trs(int*x,int p) {
	for (int i = 0; i < p - 1; i++) {
		for (int j = i + 1; j < p; j++) {
			if (x[i] >x[j]) {
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}
int main() {
	int n;
	cout << "请输入数组长度：";
	cin >> n;
	int* a = new int[n];
	cout << "请输入数组：";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int** b = new int*[n];
	cout << "排序后为：";
	trs(a, n);
	for (int i = 0; i < n; i++) {
		b[i] = &a[i];
		cout << *b[i] << ' ';
	}
	return 0;
}