#include<iostream>
#include<algorithm>
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
    int k;
    cout<<"enter k : ";
    cin>>k;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"kth maximum : "<<arr[k-1]<<endl;
    // cout<<"maximum : "<<max;

}