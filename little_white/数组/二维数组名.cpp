#include<iostream>
using namespace std;
int main(){
    //�鿴ռ���ڴ��С
    int arr[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };
    cout <<"ռ�õ��ڴ�ռ�Ϊ"<< sizeof(arr)<<endl;
    cout <<"��ά�����һ��ռ�ÿռ�"<<sizeof(arr[0])<<endl;
    cout <<"��ά�����һ��Ԫ��ռ��  �ռ�"<<sizeof(arr[0][0])<<endl;
    cout <<"��ά��������"<<sizeof(arr[0])<<endl;
    //����һ���ַ�ռ4�ֽڣ�4*6= 24
    double arr2[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };
    cout <<"ռ�õ��ڴ�ռ�Ϊ"<< sizeof(arr2)<<endl;
    cout << "��ά�����׵�ַ" <<(int)arr<<endl;
    cout << "��ά�����һ���׵�ַ" << (int)arr << endl;
    cout << "��άi����ڶ����׵�ַ��" << (int)arr[0] << endl;
    cout << "��άi�����һ��Ԫ���׵�ַ��" << (int)&arr[0][0] << endl;

}
