#include<iostream>
using namespace std;
int main(){
    int a  = 10;
    //定义指针：数据类型*指针变量名
    int * p;
    //让指针记录变量a的地址
    p = &a;
    cout <<"a地址"<<&a<<endl;
    cout <<"p:"<<p<<endl;
    //引用的方式找到指针指向的内存
    //指针前加*代表解引用，找到指针指向的内存中的数据
    cout <<"a"<<a<<endl;
    cout <<"p:"<<*p<<endl;
    *p = 1000;
    //指针可读可写
    cout <<"*p="<<*p<<endl; 
    cout <<"a"<<a<<endl;


}