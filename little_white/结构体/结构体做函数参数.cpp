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
    cout <<"�Ӻ���������"<<s.name<<"����"<<s.age<<"����"<<s.score<<endl;

}
void printstudent2(struct student *p)
{
    cout <<"�Ӻ���2����"<<p->name<<"����"<<p->age<<"����"<<p->score<<endl;
}
int main(){
    struct  student s;
    s.name = "���ո���";
    s.age = 18;
    s.score = 85;
    printstudent1(s);
    printstudent2(&s);
}