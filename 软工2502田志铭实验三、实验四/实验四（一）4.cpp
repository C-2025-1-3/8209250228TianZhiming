#include<iostream>
using namespace std;

// 冒泡排序函数（对长度为b的数组a排序）
void up(int b, int a[]) {
    for (int i = 0; i < b - 1; i++) {
        for (int j = 0; j < b - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// 合并两个数组（list1[0]是长度，元素在list1[1..size1]；list2同理）
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    // 复制list1的元素到list3
    for (int i = 0; i < size1; i++) {
        list3[i] = list1[i + 1];
    }
    // 复制list2的元素到list3
    for (int i = 0; i < size2; i++) {
        list3[size1 + i] = list2[i + 1];
    }
    // 排序合并后的数组
    up(size1 + size2, list3);
}

int main() {
    
    int list1[80], list2[80], list3[160];
    cin >> list1[0];
   
    for (int i = 0; i < list1[0]; i++) {
        cin >> list1[i + 1];
    }

    
    cin >> list2[0];
    
    for (int i = 0; i < list2[0]; i++) {
        cin >> list2[i + 1];
    }

    merge(list1, list1[0], list2, list2[0], list3);

    cout << "合并后的数组为：";
    for (int i = 0; i < list1[0] + list2[0]; i++) {
        cout << list3[i] << " ";
    }
    return 0;
}