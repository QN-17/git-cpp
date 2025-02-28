#include<iostream>
using namespace std;
int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout <<"tizhong?"<<endl;
    cin>> num1;
    cout <<"tizhong?"<<endl;
    cin >>num2;
    cout <<"tizhong?"<<endl;
    cin >>num3;
    cout<<"a:"<<num1<<endl;
    cout<<"b:"<<num2<<endl;
    cout<<"c:"<<num3<<endl;
    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<"a!"<<endl;
        }
        else
        {
            cout<<"c!"<<endl;
        }
    }
    else
    {
        if(num2>num3)
        {
            cout<<"b!"<<endl;
        }
        else
        {
            cout<<"c!"<<endl;
        }
    }
}