#include<iostream>
using namespace std;

// ֵ���ݰ汾
void swap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "swap01 a: " << a << endl;
    cout << "swap01 b: " << b << endl;
}

// ָ�봫�ݰ汾
void swap02(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "swap02 (ָ��) a: " << *p1 << endl;
    cout << "swap02 (ָ��) b: " << *p2 << endl;
}

int main() {
    // ֵ���ݲ���
    int a = 10;
    int b = 20;
    swap01(a, b);
    cout << "main ֵ���ݺ� a: " << a << endl;
    cout << "main ֵ���ݺ� b: " << b << endl;
    //��ַ���ݿ�������ʵ��
    // ָ�봫�ݲ���
    int a1 = 10; 
    int b1 = 20;
    swap02(&a1, &b1); // ��ȷ����ָ��汾�� swap02
    cout << "main ָ�봫�ݺ� a1: " << a1 << endl;
    cout << "main ָ�봫�ݺ� b1: " << b1 << endl;

    return 0;
}