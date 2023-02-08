#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"array size : ";
    cin>>n;
    int arr[n];
    cout<<"array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"reverse array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}