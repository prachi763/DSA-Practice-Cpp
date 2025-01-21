#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,6,3,4,1};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout<<"Array is: "<<arr;

    for(int i=0;i<len-1;i++){
        int minIndex = i;
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        swap(arr[minIndex] , arr[i]);
        cout<<arr[i]<<endl;
    }

    return 0;
}