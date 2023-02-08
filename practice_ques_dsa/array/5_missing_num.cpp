#include<iostream>
using namespace std;
int main(){
    int n,s=0,sum=0;
    cout<<"array size : ";
    cin>>n;
    int arr[n];
    cout<<"array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //formula for sum of n numbers n*(n+1)/2;
    for(int i=1;i<n;i++){
        
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"reverse array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}