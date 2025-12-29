#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int miunute;
	int sec;
public:
	void settime() {
		int h, m, s;
		cin >> h >> m >> s;
		hour = h;
		miunute = m;
		sec = s;
	}
	void showtime() {
		cout << hour << ":" << miunute << ":" << sec << endl;
	}

};
int main() {
	Time t1;
	t1.settime();
	t1.showtime();
	return 0;


}