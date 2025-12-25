#include<iostream>
using namespace std;
int k=0;
int maxn = 1000;
void count(const char s[], int couts[]) {
    int num;
    for (int i = 0; i < maxn; i++) {
        num = (int)s[i];
        if (num >= 65 && num <= 90) {
            couts[num - 65]++;
        }
        if (num >= 97) {
            couts[num - 97]++;
        }
    }
}
int main() {
    char s[1000];
    char ch;
    int couts[26] = { 0 };
    int i = 0;
    while (cin.get(ch) && ch != '\n' && i < 999) {
        s[i] = ch;
        i++;
    }
    s[i] = '\0';
    
    count(s, couts);
    for (int i = 0; i < 26; i++) {
        if (couts[i] != 0) {
            ch = (char)(i + 65);
            cout << ch << "µÄ¸öÊı£º" << couts[i] << endl;
        }
    }
    return 0;
}