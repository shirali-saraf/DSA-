#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"array size : ";
    cin>>n;
    int arr[n],k=0;
    int count[3]={0};
    cout<<"array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int c0=count[0],c1=count[1],c2=count[2];
    for(int i=0;i<c0;i++){
        arr[k]=0;
        k++;
    }
    for(int i=0;i<c1;i++){
        arr[k]=1;
        k++;
    }
    for(int i=0;i<c2;i++){
        arr[k]=2;
        k++;
    }

    cout<<"sorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}