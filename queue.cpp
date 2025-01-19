#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;
    q.push(7);
    q.push(6);
    q.push(20);
    q.push(3);
    cout<<"Size is: "<<q.size()<<endl;
    cout<<"Stack: ";
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<"Size is: "<<q.size()<<endl;

    return 0;
}