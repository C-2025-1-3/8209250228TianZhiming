#include<iostream>
#include<cstring>
using namespace std;
int indexof(const char* s1, const char* s2) {
	int i = 0;
    if (s1[0] == '\0'||s1==NULL) {
        return 0;
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        int j = 0;
        while (s1[j] != '\0' && s2[i + j] != '\0' && s1[j] == s2[i + j]) {
            j++;
        }
        if (s1[j] == '\0') {
            return i;
        }
    }
    return -1;
}
int main() {
 const int MAX_SIZE = 100;
 char s1[MAX_SIZE], s2[MAX_SIZE];
 cout << "Enter the first string: ";
 cin.getline(s1, MAX_SIZE);
 cout << "Enter the second string: ";
 cin.getline(s2, MAX_SIZE);
 int result = indexof(s1, s2);
 if (result != -1) {
     cout << "s1是s2的子列,下标为：" << result << endl;
   
 }
 else {
     cout << "s1不是s2的子列";
 }
 return 0;
}