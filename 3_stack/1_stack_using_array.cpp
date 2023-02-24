#include<iostream>
using namespace std;
// #define SIZ 100
class stack{
    public:
      int top,size;
      int arr[];
    
    stack(int si){
        top=-1;
        size=si;
        arr[size];
    }
    void push(int data){
        if(top>=size-1){
            cout<<"stack size Exceed"<<endl;
        }
        else{
            top++;
            arr[top]=data;
        }
    }
    void pop();
    void display();
    void isEmpty();
    
};
void stack::pop(){
    if(top==-1){
        cout<<"stack is empty : "<<endl;
    }
    else{
        top--;
    }
}
void stack::display(){
    while(top!=-1){
       cout<<arr[top]<<endl;
       top--;
    }
}
void stack::isEmpty(){
    if(top==-1){
        cout<<"stack is empty ";
    }
    else{
        cout<<"stack is not empty :";
    }
}

int main(){
    int n;
    cout<<"enter array size : ";
    cin>>n;
    stack s(n);
    s.push(1);
    s.push(3);
    s.push(2);
    s.pop();
    s.display();
}