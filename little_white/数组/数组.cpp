#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout << arr[0]<< endl;
    cout << sizeof(arr[0])<< endl;
    for(int i = 0 ;i < 10 ; i++)
    {
        cout << arr [i]<< endl;
    }
}