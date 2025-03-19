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
        {"张",18,100},
        {"李",28,99},
        {"王",28,66}
    };
    stuarray[2].name = "赵";
    stuarray[2].age = 80;
    stuarray[2].score = 60;
    for(int i = 0; i<3 ;i++)
    {
        cout <<"名"<<stuarray[i].name
        <<"龄"<<stuarray[i].age
        <<"分"<<stuarray[i].score<<endl;

    }
}