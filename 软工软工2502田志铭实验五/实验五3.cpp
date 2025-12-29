#include<iostream>
using namespace std;
class cft {
private:
	int len[3];
	int wid[3];
	int hei[3];
public:
	void set_data() {
		int l[3], w[3], h[3];
		for (int i = 0;i < 3; i++) {
cin >> w[i] >> l[i] >> h[i];
		
		
		len[i] = l[i]; hei[i] = h[i]; wid[i] = w[i]; }
	}
	void v() {
		int v[3];
		for (int i = 0; i < 3; i++) {
			v[i] = len[i] * wid[i] * hei[i];
			cout << "第" << i + 1 << "个长方体的体积为：" << v[i] << endl;
		}
	}

};
int main() {
	cft cft1;
	cft1.set_data();
	cft1.v();
	return 0;
}