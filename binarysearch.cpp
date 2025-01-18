#include<iostream>
using namespace std;

int bSearch(int length, int arr[], int element){
    int s=0, e=length-1;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            s=mid+1;
        }
        else if(arr[mid]>element){
            e=mid-1;
        }
    }
    return -1;
}


int main(){
    int arr[] = {3,5,7,8,9};
    int length = sizeof(arr)/sizeof(arr[0]), element;
    cout<<"Enter element to search:"<<endl;
    cin>>element;
    int res = bSearch(length,arr,element);
    if(res!= -1){
        cout<<"Element found at: "<<res;
    }
    else{
        cout<<"Not found";
    }

    return 0;
}