#include<iostream>
using namespace std;
bool is_prime(int num){
	int c=0;
	if (num == 0||num==1) {
		return false;
	}
	for (int i = 2; i<=num; i++) {
		int yu = num % i;
		if (yu == 0) {
			c = i;
			break;
		}
	}
	if (c >= num) {
		return true;
	}
	return 0;
}
int main() {
	int sum=0;
	for (int i = 0; i < 10000; i++) {
		if (is_prime(i) == 1) {
			sum++;
			cout << i<<" ";
			if (sum>=10&&sum%10==0) {
				cout << endl;
			}
		}
			if (sum == 200) {
				break;
			}
		
	}
	return 0;
}