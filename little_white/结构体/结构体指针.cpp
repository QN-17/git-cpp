#include<iostream>
using namespace std;
#include<string>;
struct  student
{
    string name;
    int age;
    int score;
};
int main(){
    struct student s = {"��",28 ,200};
    struct student * p = &s;
    cout << "��"<<p ->name<<"����"<<p ->score<<"����"<<p ->age<<endl; 
}