#include<iostream>
using namespace std;
int main(){
    int arr[5] = {300,500,200,400,250};
    int max = 0;
    for(int i = 0 ;i<5 ; i++)
    {
        if (arr[1]>max){
            max = arr[i];
        }
    }
    cout <<"×îÖØµÄ" << max << endl;
}