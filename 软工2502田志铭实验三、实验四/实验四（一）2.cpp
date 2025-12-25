#include<iostream>
using namespace std;
void up(int b ,double a[]) {
	double temp = 0;
	for (int i = 0; i < b; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < b - 1; i++) {
		for (int j = i + 1; j < b; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main() {
	double x[10];
	up(10, x);
	for (int i = 0; i < 10; i++) {
		cout << x[i]<<" ";
	}
	return 0;
}