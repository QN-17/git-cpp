#include <iostream>
using namespace std;
int main(){
    //breakʹ��ʱ��
    //1��switch
    cout <<"��ѡ�񸱱��Ѷ�"<<endl;
    cout << "1����ͨ"<< endl;
    cout << "2���е�" << endl;
    cout << "3������" << endl;
    int select = 0 ;
    cin >> select;
    
    switch (select)
    {
    case 1:
        /* code */
        cout <<"��ͨ" << endl;
        break;
        case 2 :
        cout <<"�е�"<<endl;
        break;
        case 3 :
        cout <<"��"<< endl;    
        break;
    default:
        break;
    }

    //ѭ�����
    // for(int i = 0 ;i < 10 ,i++)
    // {
    // cout << i << endl;
    // if(i == 5)
    // {
    //     break;
    // }
    // cout <<i << endl;
    // }
    //Ƕ��ѭ��
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