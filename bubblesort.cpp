#include<iostream>
using namespace std; 

int main(){
    int arr[] = {3,5,7,8,9}, flag, count=0;
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<length;i++){
        flag = 0;
        for(int j=i;j<length;j++){
            count++;
                if(arr[i]>arr[j]){
                    flag = 1;
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
            }
        }
        if(flag==0){
            break;
        }
    }

    cout<<endl<<count<<endl;
    cout<<endl<<"Sorted array:"<<endl;
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}