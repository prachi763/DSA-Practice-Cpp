//Kadane's Algo
#include<iostream> 
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};

    int currSum = 0;
    int maxSum = INT16_MIN;
    for(int i=0; i<n ; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        } 
    }
    cout<<"Max Subarray Sum: "<<maxSum;
    return 0;
}
