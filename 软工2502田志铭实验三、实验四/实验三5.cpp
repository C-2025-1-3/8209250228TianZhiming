#include<iostream>
using namespace std;
int sum(int s,int n) {
	static int  m = 0;
	s = (s + 1) * 2;
	m++;
	if (m ==n) {
		return s;
	}
	else { return sum(s, n); }

}
int main() {
	int a = 1;
	int b = 10;
	cout<<sum(a, b);
	return 0;
}