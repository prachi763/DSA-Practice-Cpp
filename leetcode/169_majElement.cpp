#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;

// BRUTE FORCE
// int majorityElement(vector<int>& nums) {
//     int n = nums.size();
//     for(int val : nums){
//         int freq = 0;
//         for(int el : nums){
//             if(el == val){
//                 freq++;
//             }
//         }
//         if(freq > n/2){
//             return val;
//         }
//     }

// }

//OPTIMISED
// int majorityElement(vector<int>& nums){
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     int freq = 0, ans = nums[0];
//     for(int i=1; i<n;i++){
//         if(nums[i] == nums[i-1]){
//             freq++;
//         }
//         else{
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq > n/2){
//             return ans;
//         }
//     }
//     return ans;
// }

// MOORE'S VOTING ALGO
int majorityElement(vector<int>& nums) {
    int freq = 0, ans = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(freq == 0)
            ans = nums[i];
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}




int main(){
    vector<int> v = {1,2,2,1,1};
    cout<<majorityElement(v);

    return 0;
}