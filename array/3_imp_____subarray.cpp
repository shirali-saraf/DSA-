#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"array size : ";
    cin>>n;
    int arr[n];
    cout<<"array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"subarray of given array : ";
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
            count++;
        }
        cout<<endl;
    }
    cout<<"number of subarray : "<<count;
    
}

// A subarray is a contiguous part of array. An array that is inside another array.