#include<iostream>
using namespace std;
void bubblesort(int * arr,int len)
{
    for(int i = 0;i < len - 1;i++)
    {
        for(int j = 0; j < len - i -1;j++ )
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
}
void printarray(int *arr,int len)
{
    for(int i = 0; i<len; i++)
    {
        cout <<arr[i]<<endl;
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,10,9,8};
    int len = sizeof(arr)/sizeof(arr[0]);//数组长度
    bubblesort(arr,len);
    printarray(arr,len);
}