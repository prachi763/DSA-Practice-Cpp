#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;
    s.push(7);
    s.push(6);
    s.push(20);
    s.push(3);
    cout<<"Size is: "<<s.size()<<endl;
    cout<<"Stack: ";
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<"Size is: "<<s.size()<<endl;

    return 0;
}