#include<iostream>
using namespace std;
//提前告诉编译器函数存在，可利用函数声明
int max(int a,int b);//声明可以有多次
int max(int a ,int b)//定义只能一次
{
    return a>b?a:b;
}
int main(){
    int a = 10;
    int b = 20;
    cout <<max(a,b)<<endl;
    return 0;
}