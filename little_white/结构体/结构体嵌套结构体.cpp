#include <iostream>
using namespace std;
#include <string>

struct student {
    string name;
    int age;
    int score;
};

struct teacher {
    int id;
    string name;
    int age;
    student stu;  // C++ �п�ʡ�� struct �ؼ���
};

int main() {
    teacher t;
    t.id = 230284029;
    t.name = "wang";
    t.age = 50;

    // ��ʼ��ѧ���ĳ�Ա������δ������Ϊ��
    t.stu.name = "li";
    t.stu.age = 18;
    t.stu.score = 90;

    // ����������
    cout << t.name << "\n"
         << t.id << "\n"
         << t.age << "\n"
         << t.stu.name << "\n"
         << t.stu.age << endl;

    return 0;
}