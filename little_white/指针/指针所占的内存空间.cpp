#include<iostream>
using namespace std;
int main(){
    int a = 10;
    // int *p;
    // p = &a;
    int *p  = &a;
    cout <<"sizeof(int *)"<<sizeof(p)<<endl;
    cout <<"sizeof(int *)"<<sizeof(int*)<<endl;
    cout <<"sizeof(int *)"<<sizeof(float*)<<endl;
    cout <<"sizeof(int *)"<<sizeof(double*)<<endl;
    cout <<"sizeof(int *)"<<sizeof(char*)<<endl;
    //32位操作系统，无论什么数据类型，都是4个字节
    //64是8个
}