#include<iostream>
using namespace std;
int main(){
    //if����else if����else��β
    int score = 0;
    cout <<"������"<< endl;
    cin >> score;
    cout <<"��ķ����ǣ�"<< score << endl;
    if(score>600)
    {
        cout <<"һ��"<< endl;
    }
    else if (score>500)
    {
        cout<<"����"<<endl;
    }
    else if(score>400)
    {
        cout<<"����"<<endl;
    }
    else
    {
        cout<<"�ؿ�"<<endl;
    }
    system("pause");
    return 0;
}