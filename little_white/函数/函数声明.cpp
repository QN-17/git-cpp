#include<iostream>
using namespace std;
//��ǰ���߱������������ڣ������ú�������
int max(int a,int b);//���������ж��
int max(int a ,int b)//����ֻ��һ��
{
    return a>b?a:b;
}
int main(){
    int a = 10;
    int b = 20;
    cout <<max(a,b)<<endl;
    return 0;
}