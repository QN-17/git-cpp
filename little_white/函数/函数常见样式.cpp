#include<iostream>
using namespace std;
//�޲��޷�
void test01()
{
    cout <<"this is test01 "<<endl;
}
//�޲��з�
int test03()
{
    cout <<"test03 "<<endl;
    return 1000;
}
//�в��޷�
void test02(int a)
{
    cout <<"test 02 "<<a <<endl;
}
//�в��з�
int test04(int a)
{
    cout <<"test04 "<<a<<endl;
    return a;
}
int main(){
    test01();
    test02(100);
    int num1 = test03();
    cout <<"num1 "<<num1<<endl;
    int num2 = test04(100000);
    cout <<"num2 "<<num2<<endl;

}