#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout <<"第一个"<<arr[0]<<endl;
    int *p = arr;//arr为数组首地址
    cout <<"访问第一个元素"<< *p <<endl;
    p++;//让指针向后偏移四个字节
    cout <<"用指针访问第二个"<<*p<<endl;

    cout<<"指针遍历"<<endl;
    int *p2 = arr;
    for (int i = 0;i<10;i++)
    {
        cout <<*p2<<endl;
        p2++;
    }
}