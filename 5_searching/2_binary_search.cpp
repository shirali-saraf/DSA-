#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];
    int l=0,mid,r=n-1,data,c=0;
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"enter element which you want to search : "<<endl;
    cin>>data;
    while(l<r){
        mid=(l+r)/2;
        if(data==arr[mid]){
            cout<<"element found at index : "<<mid<<" and position : "<<mid+1<<endl;
            c=1;
            break;
        }
        else if(data<arr[mid]){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }  
    if(c==0){
        cout<<"element not found "<<endl;
    }

}
