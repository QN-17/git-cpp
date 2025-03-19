#include<iostream>
using namespace std;
#include<string>
//struct 结构体名 {结构体成员列表};
//定义不可省略，创建可省略
struct student 
{
    string name;
    int age;
    int score;
}s3;//创建3

int main(){
    //定义不可省略，创建可省略
 /*struct*/ student s1;//创建1
 s1.name ="张霁鹏";
 s1.age = 18;
 s1.score = 100;
 cout <<"姓名" << s1.name <<"年龄"<<s1.age<<"成绩"<<s1.score<<endl;

 struct student s2 = {"李小标",18,80};//创建2
 cout <<"姓名" << s2.name <<"年龄"<<s2.age<<"成绩"<<s2.score<<endl;

 s3.name ="郑声威";//创建3
 s3.age = 19;
 s3.score =70;
 cout <<"姓名" << s3.name <<"年龄"<<s3.age<<"成绩"<<s3.score<<endl;
}