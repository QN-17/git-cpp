#include <iostream>
using namespace std;
int main(){
    //ѡ��ṹ ����if���
    //�û��������>600һ������Ļ���

    //�û��������
    int score = 0 ;
    cout << "���������" << endl;
    cin >> score;
    //��ӡ�û�����ķ���
    cout << "������" << score << endl;

    //�жϷ����Ƿ����600 �������һ��
    //if���治Ҫ�ӷֺ�
    if(score > 600)
    {
        cout <<"һ��"<< endl;
    }

    system("pause");
    return 0;
}