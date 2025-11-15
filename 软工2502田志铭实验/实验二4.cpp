#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b,result;
	char op;
	cin >> a >> op >> b;

	switch (op) {
	case '+':
		result = a + b;
		cout << "结果：" << result << endl;
		break;
	case '-':
		result = a - b;
		cout << "结果:" << result << endl;
		break;
	case '*':
		result = a * b;
		cout << "结果：" << result << endl;
		break;
	case '/':
		if (b == 0) { cout << "无意义" << endl; break; }
		
		else {
			result = a / b;
			cout << "结果是：" << result << endl;
		}
		break;
	case '%':
		if (b == 0) { cout << "无意义" << endl; }
		else {
			int num1 = static_cast<int>(a);
			int num2 = static_cast<int>(b);
			if (num1 != a || num2 != b) {
				cout << "取模要求为整数" << endl;
			}
			else {
				result = num1 % num2;
				cout << "结果为：" << result << endl;
			}
			break;
		}

	}return 0;
}