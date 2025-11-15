#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int max = 100, sum=0, i, w;
	
	for (i = 0; sum <=max; i++)
	{
		w = pow(2, i+1);
		sum = sum + w;
	}cout << "第" << i-1 << "天后,苹果超过100个" << endl;
	cout << "平均每天花的钱:" << 0.8*(sum-w) / (i-1) << endl;
		return 0;
}