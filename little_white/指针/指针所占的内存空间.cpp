#include<iostream>
using namespace std;
int main(){
    int a = 10;
    // int *p;
    // p = &a;
    int *p  = &a;
    cout <<"sizeof(int *)"<<sizeof(p)<<endl;
    cout <<"sizeof(int *)"<<sizeof(int*)<<endl;
    cout <<"sizeof(int *)"<<sizeof(float*)<<endl;
    cout <<"sizeof(int *)"<<sizeof(double*)<<endl;
    cout <<"sizeof(int *)"<<sizeof(char*)<<endl;
    //32λ����ϵͳ������ʲô�������ͣ�����4���ֽ�
    //64��8��
}