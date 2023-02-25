#include<iostream>
using namespace std;

class queue{
    public:
    int *arr;
    int size,front,rear;
    queue(int s){
        size=s;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push_front(int data){
       if((rear==-1) && (front==-1)){
           front=0;
           rear=0;
           arr[front]=data;
       }
       else if((front==0 && rear==size-1) || (front==rear+1)){
           cout<<"queue is full : "<<endl;
       }
       else if(front==0){
           front=size-1;
           arr[front]=data;
       }
       else{
           front--;
           arr[front]=data;
       }
        
    }
    void push_back(int data){
       if((rear==-1) && (front==-1)){
            front++;
            rear++;
            arr[rear]=data;
        }
        else if((rear+1)%size==front){
            cout<<"queue is full : "<<endl;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=data;
        }
    }
    void pop_front(){
         if((rear==-1) && (front==-1)){
            cout<<"queue is empty : "<<endl;
        }
        else if(rear==front){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%size;
        }
    }
    void pop_back(){
        if((rear==-1) && (front==-1)){
            cout<<"queue is empty : "<<endl;
        }
        else if(front==rear){
            front=rear=-1;
        }
        else if(rear==0){
            rear=size-1;
        }
        else{
            rear--;
        }
    }
    
    void display(){
        int temp;
        temp=front;
        while(temp!=rear){
            cout<<arr[temp]<<" ";
            temp=(temp+1)%size;
        }
        cout<<arr[temp];
    }
    
};

int main(){
    queue Q(7);
    Q.push_front(8);
    Q.push_front(5);
    Q.push_back(7);
    Q.pop_back();
    Q.pop_front();
    Q.display();
   
    // Q.dequeue();

    return 0;
}