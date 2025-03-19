#include<iostream>
using namespace std;
int main(){
    //指针指向非法内存空间
    int *p = (int*)0x1100;
    cout <<*p<<endl;

}