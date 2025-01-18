#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec(5);
    int s = vec.size();
    cout<<"Size of vector is: "<<s<<endl;
    cout<<"Vector - ";

    for(int i=0;i<s;i++){
        cout<<vec[i]<<" "; // instead of [] we can use .at()
    }

    cout<<endl;

    for(int i=0;i<s;i++){
        cout<<vec.at(i)<<" ";
    }

    // for (int v : vec) {
    //     cout << v << "\n";
    // }
    
    return 0;
}