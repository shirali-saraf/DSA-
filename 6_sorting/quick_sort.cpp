#include<iostream>
using namespace std;
int partion(int arr[],int lb,int ub){
      int pivot=arr[lb];
      int s=lb;
      int e=ub;
     while(s<e){
          while(arr[s]<=pivot){
           s++;
          }
         while(arr[e]>pivot){
          e--;
        }
        if(s<e){
          int temp=arr[s];
          arr[s]=arr[e];
          arr[e]=temp;
       }
    
    }
    int t=arr[e];
    arr[e]=arr[lb];
    arr[lb]=t;
    return e;

}
void quick_sort(int arr[],int s,int e){
    if(s<e){
        int p=partion(arr,s,e);
        quick_sort(arr,s,p-1);
        quick_sort(arr,p+1,e);
    }
    
}
int main(){
    int n,z;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n],s=0,e=n-1;
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    quick_sort(arr,s,e);

    cout<<endl<<"sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
