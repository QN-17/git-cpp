#include<iostream>
using namespace std;
int main() {
    int arr[]={1,3,2,5,4};
    cout << "ǰ:";
    for(int i = 0; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int start = 0;
    int temp = 0;
    int end = sizeof(arr)/sizeof(arr[0])-1;
    while(start < end) {
        temp = arr[start]; // ����ƴд���󣬲��Ƴ��ظ�����
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
     cout << "��:";
    for(int i = 0; i<5; i++) {
        cout  << arr[i] << " ";
    }
}