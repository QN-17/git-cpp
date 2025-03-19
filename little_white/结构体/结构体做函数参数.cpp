#include<iostream>
using namespace std;
#include<string>
struct student
{
    string name;
    int age;
    int score;
};
void printstudent1(struct student s)
{
    cout <<"子函数中姓名"<<s.name<<"年龄"<<s.age<<"分数"<<s.score<<endl;

}
void printstudent2(struct student *p)
{
    cout <<"子函数2中名"<<p->name<<"年龄"<<p->age<<"分数"<<p->score<<endl;
}
int main(){
    struct  student s;
    s.name = "我勒个豆";
    s.age = 18;
    s.score = 85;
    printstudent1(s);
    printstudent2(&s);
}