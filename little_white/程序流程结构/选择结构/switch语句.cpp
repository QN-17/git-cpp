#include<iostream>
using namespace std;
int main(){
    //给电影打分
    //10-9经典
    //8-7好
    //6-5一般
    //5以下 烂
    cout<<"打分"<<endl;
    int score = 0;
    cin >> score;
    cout<<"你打："<<score<<"分"<<endl;
    //switch判断只能是整型和字符型，不可以是区间
    
    switch(score)
    {
        case 10:
        cout<<"jd" <<endl;
        break;
        case 9:
        cout<<"jd"<<endl;
        break;
        case 8:
        cout<<"hao"<<endl;
        break;
        case 7:
        cout<<"hao"<<endl;
        break;
        case 6:
        cout<<"yiban"<<endl;
        break;
        case 5:
        cout<<"yiban"<<endl;
        default://剩下的
        cout<<"L"<<endl;
        break;
    }
}