#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n],b[n];
    int max=0;
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // ...................max find...............
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    int count[max+1]={0};
    
    for(int i=0;i<n;i++){
      count[arr[i]]++;
    }

    for(int i=1;i<=max;i++){
       count[i]=count[i]+count[i-1];
    }
    cout<<"indexing according to count : "<<endl;
    for(int i=0;i<=max;i++){
        cout<<count[i]<<" ";
    }
    for(int i=n-1;i>=0;i--){
        b[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=b[i];
    }

    cout<<endl<<"sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
