#include <iostream>
using namespace std;
int main(){
    //选择结构 单行if语句
    //用户输入分数>600一本，屏幕输出

    //用户输入分数
    int score = 0 ;
    cout << "请输入分数" << endl;
    cin >> score;
    //打印用户输入的分数
    cout << "分数：" << score << endl;

    //判断分数是否大于600 若大输出一本
    //if后面不要加分号
    if(score > 600)
    {
        cout <<"一本"<< endl;
    }

    system("pause");
    return 0;
}