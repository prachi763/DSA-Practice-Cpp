#include<iostream>
#include<map>
#include<string>
using namespace std;

bool isAnagram(string s, string t) {
    map<char, int> m;

    for(auto element : s){
        if(m.find(element) == m.end()){
            m.insert({element,1});
        }
        else {
            m[element]++;
        }
    }
    
    for(auto element : t){
        if(m.find(element) != m.end()){
            m[element]--;
        }
        else{
            return false;
        }
    }

    for(auto key : m){
        if(key.second != 0 ){
            return false;
        }
    }
    return true;
}



int main(){
    string s = "anagram", t = "nagaram";
    cout<<"Anagram yes or no? (0/1): "<<(isAnagram(s,t)?"Yes":"No");
    
    return 0;
}