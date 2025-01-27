#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> v;
    multimap<int, int> mm;
    for (auto& it : M) {
		MM.insert({ it.second, it.first });
	}

	for (auto& it : MM) {
		cout << it.second << ' ' << it.first << endl;
	}
    return v;
}

int main(){
    vector<int> v = {1,1,1,2,2,3};
    int k = 2; 
    topKFrequent(v, 2);

    return 0;
}