#include<iostream>
#include<map>
#include<vector>
using namespace std;



bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int s = nums.size();
            for (int i = 0; i <= s-2; i++) {
                for (int j = i+1; j<= i+k && j<=s-1; j++){
                if(nums[i]==nums[j] && abs(i-j)<=k){
                return true;
            }
        }
    }
    return false;
}


int main(){
    vector<int> arr = {1,2,3,1,2,3};
    int k = 2 ; 
    cout<<"Vector contains dupicate (0/1): "<<containsNearbyDuplicate(arr, k);
    return 0;
}
