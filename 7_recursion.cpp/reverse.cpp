#include<iostream>
#include<algorithm>
using namespace std;
void rev(int arr[],int n,int i){
    if(i>=n/2){
        return;
    }  
    swap(arr[i],arr[n-i-1]);
    rev(arr,n,i+1);
}
int main(){
    int n,i=0;
    cout<<"enter size : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    rev(arr,n,0);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}