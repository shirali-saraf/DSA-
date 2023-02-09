#include<iostream>
using namespace std;
int main(){
    int n,s=0,sum=0;
    cout<<"array size : ";
    cin>>n;
    int arr[n-1];
    cout<<"array elements : ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    //formula for sum of n numbers n*(n+1)/2;
     s=(n*(n+1))/2;
    
    cout<<"s : "<<s<<endl;
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
    cout<<"missing number : "<<s-sum<<endl;
    cout<<"sum : "<<sum<<endl;

    
}