#include <iostream>

int main() 
{
    int a = 1, b = 1;

    // 第一次操作：b = a++
    b = a++;
    std::cout << "After b = a++: a = " << a << ", b = " << b << std::endl;

    // 第二次操作：b = ++a
    b = ++a;
    std::cout << "After b = ++a: a = " << a << ", b = " << b << std::endl;

    return 0;
}