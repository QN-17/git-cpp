#include<iostream>
using namespace std;
#include<ctime>
int main(){
    srand((unsigned int)time(NULL));

    int num = rand() % 100 + 1; 
    
    cout <<"快猜！"<< endl;


    int val =0 ;//玩家输入的数字
    while(1)
    {

    cin >> val ;
    if(val>num)
    {
        cout<<"大了"<< endl;

    }
    else if (val<num)
    {
        /* code */
        cout<<"小了"<<endl;
    }
    else
    {
        cout <<"r"<<endl;
        break;
    }
    }    
    
}