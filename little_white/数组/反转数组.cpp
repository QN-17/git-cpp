#include<iostream>
using namespace std;
int main() {
    int arr[]={1,3,2,5,4};
    cout << "前:";
    for(int i = 0; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int start = 0;
    int temp = 0;
    int end = sizeof(arr)/sizeof(arr[0])-1;
    while(start < end) {
        temp = arr[start]; // 修正拼写错误，并移除重复声明
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
     cout << "后:";
    for(int i = 0; i<5; i++) {
        cout  << arr[i] << " ";
    }
}