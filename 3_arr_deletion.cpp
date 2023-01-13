#include<iostream>
using namespace std;

void delete_beg(int arr[],int n){
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    n--;
    cout<<"array after deletion of element at first position : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void delete_end(int arr[],int n){
    n--;
    cout<<"array after insertion : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void delete_pos(int arr[],int n){
    int num,pos;
    cout<<"enter position want to delete element: ";
    cin>>pos;
    for(int i=pos;i<n;i++){
        arr[i-1]=arr[i];
    }
    n--;
    cout<<"array after insertion : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,size,c;
    cout<<"enter size of array ";
    cin>>size;
    int arr[size];
    cout<<"enter number of elements in array ";
    cin>>n;
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array elements : " ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl<<"enter 1 for insert element at begning, 2 to insert at position , and 3 to insert at last : ";
    cin>>c;
    switch (c) {

        case 1:
            delete_beg(arr,n);
            break; 

        case 2 :
           delete_pos(arr,n);
           break;

        case 3:
           delete_end(arr,n);
           break;   
        default:
         cout << "invalid input";      
    }
    return 0;
}