#include <iostream>
using namespace std;
int main(){
    //break使用时机
    //1、switch
    cout <<"请选择副本难度"<<endl;
    cout << "1、普通"<< endl;
    cout << "2、中等" << endl;
    cout << "3、困难" << endl;
    int select = 0 ;
    cin >> select;
    
    switch (select)
    {
    case 1:
        /* code */
        cout <<"普通" << endl;
        break;
        case 2 :
        cout <<"中等"<<endl;
        break;
        case 3 :
        cout <<"难"<< endl;    
        break;
    default:
        break;
    }

    //循环语句
    // for(int i = 0 ;i < 10 ,i++)
    // {
    // cout << i << endl;
    // if(i == 5)
    // {
    //     break;
    // }
    // cout <<i << endl;
    // }
    //嵌套循环
    for(int i = 0; i < 10 ; i++ )
    {
        for (int j = 0 ; j <10 ; j++ )
        {
            if(j == 5 )
            {
                break;
            }
            cout <<"* ";

        }
        cout <<endl;

    }
}