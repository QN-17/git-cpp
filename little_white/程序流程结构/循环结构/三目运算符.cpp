#include<iostream>
using namespace std;
int main(){
    //三目运算符
    //创建三个变量abc
    //将a和b比较，变量大的值赋值给c
    //……？……：……
    int a = 10;
    int b = 20;
    int c = 0;
    c = (a > b ? a : b);
    cout <<"c="<<c <<endl;
    //c++中三目运算符返回的是变量，可继续赋值
    (a > b ? a : b)=100;
    cout<<"a:"<<a <<endl;
    cout<<"b:"<<b<<endl;
}