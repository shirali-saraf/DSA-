#include<iostream>
using namespace std;
int main(){
    int n,count=0,k=5;
    cout<<"array size : ";
    cin>>n;
    int l=0;
    int arr[n],b[l];
    cout<<"array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"subarray of given array : ";
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        int sum=0,l=0;
            for(int k=i;k<=j;k++){
                b[k]=arr[k];
                sum=sum+arr[k];
                l++;
            }
            // cout<<"sum : "<<sum;
             if(sum==k){
                cout<<"array found : ";
                for(int k=0;k<l;k++){
                cout<<b[k]<<" ";
                
               }
            }   
            count++;   
        }
        cout<<endl;
    }
    cout<<"number of subarray : "<<count;
    
}

// A subarray is a contiguous part of array. An array that is inside another array.