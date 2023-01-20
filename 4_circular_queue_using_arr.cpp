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
    void enqueue(int data){
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
    void dequeue(){
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
    queue Q(10);
    Q.enqueue(8);
    Q.enqueue(5);
    Q.enqueue(6);
    Q.enqueue(10);
    Q.dequeue();
    Q.dequeue();
    Q.display();
}