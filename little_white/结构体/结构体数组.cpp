#include<iostream>
using namespace std;
#include<string>;
struct student
{
    string name;
    int age;
    int score;
};
int main(){
    struct student stuarray[8]=
    {
        {"��",18,100},
        {"��",28,99},
        {"��",28,66}
    };
    stuarray[2].name = "��";
    stuarray[2].age = 80;
    stuarray[2].score = 60;
    for(int i = 0; i<3 ;i++)
    {
        cout <<"��"<<stuarray[i].name
        <<"��"<<stuarray[i].age
        <<"��"<<stuarray[i].score<<endl;

    }
}