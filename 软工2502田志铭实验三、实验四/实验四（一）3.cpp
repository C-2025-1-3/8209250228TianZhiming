#include<iostream>
using namespace std;
int main() {
	bool a[100] = { 0 };
	for (int i = 1; i <=100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (i==1) {
				a[0] = 1;
			}
			if (j % i == 0 && j >= i) {
				a[j - 1] = !a[j - 1];
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		if (a[i] == 0) {
			cout << i << " ";
		}
	}
	return 0;
}