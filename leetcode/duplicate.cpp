// approach 1 
#include<iostream>
#include<map>
#include<vector>
using namespace std;

// class Solution {
// public:
//     bool containsDuplicate(arrector<int>& nums) {
//         int s = nums.size();
//         for (int i = 0; i < s-1; i++) {
//             for (int j = i+1; j < s; j++){
//                 if(nums.at(i)==nums.at(j)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

bool containsDuplicate(vector<int> & array){
    map<int, int> m;
    // for(int i=0;i<array.size();i++)
    for(int key : array){
        // int key = array[i];
        // loc = m.find(key);
        if(m.find(key) == m.end()){
            m.insert({key,1});
        }
        else{
            return true;
        }
    }
    return false;
}



int main(){
    vector <int> arr = {1,2,3,1};
    cout<<"Vector contains dupicate (0/1): "<<containsDuplicate(arr);
    
    return 0;
}