#include<iostream>
using namespace std;
//num1 num2无真实数据：形参
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;

}
int main(){
    //a,b有实际数据，实参（实际参数
    int a= 10;
    int b = 20;
    int c = add(a,b);
    cout <<"c:" <<c << endl;

    a = 100;
    b= 500;
    c = add(a,b);
    cout << "c" << c<< endl;
}