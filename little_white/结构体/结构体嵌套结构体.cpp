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
    student stu;  // C++ 中可省略 struct 关键字
};

int main() {
    teacher t;
    t.id = 230284029;
    t.name = "wang";
    t.age = 50;

    // 初始化学生的成员（避免未定义行为）
    t.stu.name = "li";
    t.stu.age = 18;
    t.stu.score = 90;

    // 修正输出语句
    cout << t.name << "\n"
         << t.id << "\n"
         << t.age << "\n"
         << t.stu.name << "\n"
         << t.stu.age << endl;

    return 0;
}