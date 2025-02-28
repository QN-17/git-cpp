#include<iostream>
using namespace std;
int main(){
    //if……else if……else收尾
    int score = 0;
    cout <<"分数？"<< endl;
    cin >> score;
    cout <<"你的分数是："<< score << endl;
    if(score>600)
    {
        cout <<"一本"<< endl;
    }
    else if (score>500)
    {
        cout<<"二本"<<endl;
    }
    else if(score>400)
    {
        cout<<"三本"<<endl;
    }
    else
    {
        cout<<"重开"<<endl;
    }
    system("pause");
    return 0;
}