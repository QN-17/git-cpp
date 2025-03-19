#include<iostream>
using namespace std;

// 值传递版本
void swap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "swap01 a: " << a << endl;
    cout << "swap01 b: " << b << endl;
}

// 指针传递版本
void swap02(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "swap02 (指针) a: " << *p1 << endl;
    cout << "swap02 (指针) b: " << *p2 << endl;
}

int main() {
    // 值传递测试
    int a = 10;
    int b = 20;
    swap01(a, b);
    cout << "main 值传递后 a: " << a << endl;
    cout << "main 值传递后 b: " << b << endl;
    //地址传递可以修饰实参
    // 指针传递测试
    int a1 = 10; 
    int b1 = 20;
    swap02(&a1, &b1); // 正确调用指针版本的 swap02
    cout << "main 指针传递后 a1: " << a1 << endl;
    cout << "main 指针传递后 b1: " << b1 << endl;

    return 0;
}