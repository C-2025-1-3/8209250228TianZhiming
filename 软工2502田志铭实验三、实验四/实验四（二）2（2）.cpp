#include<iostream>
#include<cmath>
using namespace std;
int k=0;
int parseHex(const char* const hexString) {
	int p = k;
	int num = 0;
	for (int i = 0; i < p; i++) {
		if ((int)hexString[i] >= 65) {
			num += ((int)hexString[i] - 55) * pow(16, k - 1);
		}
		else {
			num += ((int)hexString[i]-'0') * pow(16, k - 1);
		}
		k--;
	}
	cout << num;
	return num;

}
int main() {
	char s[1000] = { 0 };
	int n= 0;
	cin.getline(s, 1000);
	for (int i = 0; i < 1000; i++) {
		if (s[i] == '\0') {
			break;

		}
		n++;
	}
	k = n;
	parseHex(s);
	return 0;
}