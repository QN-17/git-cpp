#include<iostream>
using namespace std;
int main(){
    //��Ŀ�����
    //������������abc
    //��a��b�Ƚϣ��������ֵ��ֵ��c
    //����������������
    int a = 10;
    int b = 20;
    int c = 0;
    c = (a > b ? a : b);
    cout <<"c="<<c <<endl;
    //c++����Ŀ��������ص��Ǳ������ɼ�����ֵ
    (a > b ? a : b)=100;
    cout<<"a:"<<a <<endl;
    cout<<"b:"<<b<<endl;
}