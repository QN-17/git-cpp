#include<iostream>
using namespace std;
int main(){
    //查看占用内存大小
    int arr[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };
    cout <<"占用的内存空间为"<< sizeof(arr)<<endl;
    cout <<"二维数组第一行占用空间"<<sizeof(arr[0])<<endl;
    cout <<"二维数组第一个元素占用  空间"<<sizeof(arr[0][0])<<endl;
    cout <<"二维数组行数"<<sizeof(arr[0])<<endl;
    //整型一个字符占4字节，4*6= 24
    double arr2[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };
    cout <<"占用的内存空间为"<< sizeof(arr2)<<endl;
    cout << "二维数组首地址" <<(int)arr<<endl;
    cout << "二维数组第一行首地址" << (int)arr << endl;
    cout << "二维i数组第二行首地址：" << (int)arr[0] << endl;
    cout << "二维i数组第一个元素首地址：" << (int)&arr[0][0] << endl;

}
