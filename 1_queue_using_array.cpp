#include<iostream>
using namespace std;

class queue{
    public:
    int *arr;
    int a[10];
    int size,front,rear;
    queue(int s){
        size=s;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void enqueue(int data){
        if(rear>=size){
            cout<<"queue is full : "<<endl;
        }
        else if((rear==-1) && (front==-1)){
            front++;
            rear++;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
        
    }
    void dequeue(){
        if((rear==-1) && (front==-1)){
            cout<<"queue is empty : "<<endl;
        }
        else if(rear==front){
            rear=-1;
            front=-1;
        }
        else{
            front++;
        }
    }
    void display(){
        if((rear==-1) && (front==-1)){
            cout<<"empty queue : "<<endl;
        }
        else{
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
        }
    }
    
};

int main(){
    queue Q(7);
    Q.enqueue(7);
    Q.enqueue(4);
    Q.enqueue(3);
    Q.enqueue(7);
    Q.enqueue(1);
    Q.dequeue();
    Q.display();

    return 0;
}