#include<iostream>
using namespace std;
int main(){
    int a  = 10;
    //����ָ�룺��������*ָ�������
    int * p;
    //��ָ���¼����a�ĵ�ַ
    p = &a;
    cout <<"a��ַ"<<&a<<endl;
    cout <<"p:"<<p<<endl;
    //���õķ�ʽ�ҵ�ָ��ָ����ڴ�
    //ָ��ǰ��*��������ã��ҵ�ָ��ָ����ڴ��е�����
    cout <<"a"<<a<<endl;
    cout <<"p:"<<*p<<endl;
    *p = 1000;
    //ָ��ɶ���д
    cout <<"*p="<<*p<<endl; 
    cout <<"a"<<a<<endl;


}