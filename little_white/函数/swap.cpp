#include<iostream>
#include "swap.h"  // ȷ������ͷ�ļ�
using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "�����ڽ��������" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}