#include<iostream>
using namespace std;
#include<string>
//struct �ṹ���� {�ṹ���Ա�б�};
//���岻��ʡ�ԣ�������ʡ��
struct student 
{
    string name;
    int age;
    int score;
}s3;//����3

int main(){
    //���岻��ʡ�ԣ�������ʡ��
 /*struct*/ student s1;//����1
 s1.name ="������";
 s1.age = 18;
 s1.score = 100;
 cout <<"����" << s1.name <<"����"<<s1.age<<"�ɼ�"<<s1.score<<endl;

 struct student s2 = {"��С��",18,80};//����2
 cout <<"����" << s2.name <<"����"<<s2.age<<"�ɼ�"<<s2.score<<endl;

 s3.name ="֣����";//����3
 s3.age = 19;
 s3.score =70;
 cout <<"����" << s3.name <<"����"<<s3.age<<"�ɼ�"<<s3.score<<endl;
}