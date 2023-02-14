#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"array size : ";
    cin>>n;
    int arr[n];
    int count[n]={0};
    cout<<"array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    
    for(int i=0;i<n;i++){
        if(count[i]>1){
            cout<<"duplicate number : "<<i<<endl;
        }
    }
    
}