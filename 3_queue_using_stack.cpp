#include<iostream>
#include<stack>
using namespace std;

void enqueue(stack<int> &st1,stack<int> &st2,int data){
    st1.push(data);
}
void dequeue(stack<int> &st1,stack<int> &st2){
    while(!st1.empty()){
        st2.push(st1.top());
        st1.pop();
    }
    st2.pop();
    
    while(!st2.empty()){
        st1.push(st2.top());
        cout<<st2.top()<<" ";
        st2.pop();
    }
    
}

int main(){
    stack<int> st1;
    stack<int> st2;
    enqueue(st1,st2,5);
    enqueue(st1,st2,10);
    enqueue(st1,st2,8);
    dequeue(st1,st2);
    return 0;
}