#include<iostream>
using namespace std;
int main(){
    int score = 0;
    cout <<"分数？"<<endl;
    cin >> score;
    cout <<"你分："<<score<<endl;
    if(score>600)
    {
        cout<<"一本"<<endl;
        if(score>700)
        {
            cout<<"ts"<<endl;
        
        }
        else if(score>660)
        {
            cout <<"pku"<<endl;
        }
        else
        {
            cout<<"people"<<endl;
        }
    }
    else if(score>500)
    {
        cout<<"erben"<<endl;

    }
    else if(score>400)
    {
        cout<<"sanben"<<endl;
    }
    else
    {
        cout<<"meishudu"<<endl;
    }
}