#include<iostream>
using namespace std;
#include<ctime>
int main(){
    srand((unsigned int)time(NULL));

    int num = rand() % 100 + 1; 
    
    cout <<"��£�"<< endl;


    int val =0 ;//������������
    while(1)
    {

    cin >> val ;
    if(val>num)
    {
        cout<<"����"<< endl;

    }
    else if (val<num)
    {
        /* code */
        cout<<"С��"<<endl;
    }
    else
    {
        cout <<"r"<<endl;
        break;
    }
    }    
    
}