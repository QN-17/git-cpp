#include<iostream>
using namespace std;
//num1 num2����ʵ���ݣ��β�
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;

}
int main(){
    //a,b��ʵ�����ݣ�ʵ�Σ�ʵ�ʲ���
    int a= 10;
    int b = 20;
    int c = add(a,b);
    cout <<"c:" <<c << endl;

    a = 100;
    b= 500;
    c = add(a,b);
    cout << "c" << c<< endl;
}