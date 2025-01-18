#include<iostream>
using namespace std;

int main(){
    int arr[] = {44,55,33,77,11,99,65,12};
    int *a = arr;
    int length = sizeof(arr) / sizeof(arr[0]);
    
    for(int i=0;i < length;i++){
        cout<<arr[i]<<endl;
    }
    
    cout<<endl;
    for(int i=0;i<length;i++){
        cout<<*(a+i)<<endl;
    }

    // cout<<arr<<endl<<a;  //& se address, * se memory address par jo value h
    return 0;
}