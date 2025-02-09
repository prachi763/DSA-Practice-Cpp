#include<iostream>
#include<vector> 
#include<algorithm> // for sort()
#include<map>

using namespace std;
// we use bitwise xor to find unique element

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for(int val : nums){
        ans = ans^val;
    }
    return ans;
}

int main() {
    vector<int> nums = {4,2,1,1,2};
    cout<<singleNumber(nums);
    
    return 0;
}
