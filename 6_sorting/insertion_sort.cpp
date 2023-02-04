#include<iostream>
using namespace std;
int main(){
    int n,temp,j;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j]; 
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<endl<<"sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}