#include<iostream>
using namespace std;
int main(){
    //const int * p =&a
    //��ָ��ǰ���const�޶���Ϊ����ָ�룺ָ��ָ��ɸģ�ָ���ֵ�����Ը�
    //int * const p =&a;
    //ָ�볣����const�����Ǳ�����ָ��ָ�򲻿ɸģ�ָ��Ĳ����Ը�
    int a = 10;
    int b = 10;
    const int *p = &a;
    //ָ��ָ���ֵ���ɸ�
    //*p = 20;
    p = &b;//ָ����Ը�
    int * const p2 = &a;
    *p2 = 100;
    //p2 = &b;//���ɸ�

    const int * const p3 = &a;
    //*p3 = 100;
    //p2 = &b;
}