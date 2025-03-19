#include<iostream>
using namespace std;
int main(){
    //const int * p =&a
    //给指针前面加const限定，为常量指针：指针指向可改，指向的值不可以改
    //int * const p =&a;
    //指针常量，const后面是变量，指针指向不可改，指向的不可以改
    int a = 10;
    int b = 10;
    const int *p = &a;
    //指针指向的值不可改
    //*p = 20;
    p = &b;//指向可以改
    int * const p2 = &a;
    *p2 = 100;
    //p2 = &b;//不可改

    const int * const p3 = &a;
    //*p3 = 100;
    //p2 = &b;
}