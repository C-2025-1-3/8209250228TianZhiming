#include<iostream>
using namespace std;
int main() {
	int a[10] = {0};
	int k = 0;
	int tem;
	for (int i = 0; i < 10; i++) {
		cin >> tem;
		bool isDuplicate = false;
		for (int j = 0; j < k; j++) {
			if (tem == a[j]) {
				isDuplicate = true;
				break;
			}
		}
		if (!isDuplicate && k < 10) {
			a[k] = tem;
			k++;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << a[i] << " ";	
	}
	return 0;
}