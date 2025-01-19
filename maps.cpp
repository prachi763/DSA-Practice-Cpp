#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, int> sq1;
    sq1[1] = 1;
    sq1[2] = 4;
    sq1[4] = 16;

    for(int i=1;i<=sq1.size();i++){
        cout<<sq1[i]<<" ";
    }
    cout<<endl;

    // for(int i=0;i<=5;i++){
    //     sq1.insert({i, i*i*i});
    // }

    // for(auto it : sq1){
    //     cout<<it.first<<" - "<<it.second<<endl;
    // }

    int key1 = 4;
    int cnt1 = sq1.count(key1);
    cout << "Count of " << key1 << ": " <<
    cnt1 << endl;

    // map<int, int> sq2 = {{4, 16}, {5, 25}, {6,36}};
    //     for(int i=4;i<=sq2.size();i++){
    //     cout<<sq2[i]<<" ";
    // }
    
    for(auto it : sq1){
        cout<<it.first<<" - "<<sq1.count(it.first)<<endl;
    }

    if(sq1.find(4) != sq1.end()){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False";
    }

    return 0;
}