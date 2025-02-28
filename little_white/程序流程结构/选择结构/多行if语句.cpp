#include<iostream>
using namespace std;
int main(){
    //如果分数大于600，考上一本，在屏幕输出
    //没考上打印没考上
    int score = 0;
    cout <<"输入分数"<< endl;
    cin >> score;
    cout <<"你的分数是："<< score << endl;
    if(score > 600)
    {
        cout <<"一本"<< endl;
    }
    else 
    {
        cout <<"没有一本"<< endl;
    }
}