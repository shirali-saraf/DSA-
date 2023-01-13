#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array elements : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}