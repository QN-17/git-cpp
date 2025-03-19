#include<iostream>
#include "swap.h"  // 确保包含头文件
using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "函数内交换结果：" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}