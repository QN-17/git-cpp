#include<iostream>
using namespace std;
int main(){
    //输出1~100
    //找到7 打印
    //7的倍数 个位有7 十位有7
    for (int i = 0 ;i <= 100 ; i++)
    {
        if(i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
        {
            cout <<"敲桌"<< endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}