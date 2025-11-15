#include <iostream>
using namespace std;
int main() {
	int i, j, k, n, m;
	cin >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n-1-i; j++) {
			cout << " ";
		}for (m = 0; m < i + 1; m++) {
			cout << "*";

		}cout << "\n";
	}
}
