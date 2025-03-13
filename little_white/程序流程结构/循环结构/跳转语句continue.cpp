#include<iostream>
using namespace std;
int main(){
    //continue语句
    for(int i = 0 ;i<=100;i++)
    {
        //奇数输出，偶数不输出
        if(i % 2 == 0)
        {
            continue;//可以筛选条件，执行到此不再向下执行
            //执行下一次循环
        }
        cout << i << endl;
    }
//输出偶数
    //    for(int i = 0 ;i<=100;i+= 2)
    //    {
    //     cout << i << endl;
    // }
    system("pause");
}




