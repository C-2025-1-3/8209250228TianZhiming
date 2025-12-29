#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int X = 60, int Y = 80) {
		x = X; y = Y;
	}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "ÐÞ¸ÄºóÎª:(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p;
	int a, b;
	cin >> a >> b;
	p.setPoint(a, b);
	p.display();
	return 0;
}