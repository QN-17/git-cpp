#include<iostream>
using namespace std;
int main(){
    //����Ӱ���
    //10-9����
    //8-7��
    //6-5һ��
    //5���� ��
    cout<<"���"<<endl;
    int score = 0;
    cin >> score;
    cout<<"���"<<score<<"��"<<endl;
    //switch�ж�ֻ�������ͺ��ַ��ͣ�������������
    
    switch(score)
    {
        case 10:
        cout<<"jd" <<endl;
        break;
        case 9:
        cout<<"jd"<<endl;
        break;
        case 8:
        cout<<"hao"<<endl;
        break;
        case 7:
        cout<<"hao"<<endl;
        break;
        case 6:
        cout<<"yiban"<<endl;
        break;
        case 5:
        cout<<"yiban"<<endl;
        default://ʣ�µ�
        cout<<"L"<<endl;
        break;
    }
}