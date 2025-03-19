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
    struct student s = {"张",28 ,200};
    struct student * p = &s;
    cout << "名"<<p ->name<<"分数"<<p ->score<<"年龄"<<p ->age<<endl; 
}