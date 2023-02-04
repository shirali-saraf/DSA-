#include<iostream>
using namespace std;
int getmax(int arr[],int n){
    int max=0;
   for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    return max;
}
void sort(int arr[],int pos,int n){
    int count[10]={0};
    int b[n];
    for(int i=0;i<n;i++){
        ++count[(arr[i]/pos)%10];
    }
    for(int i=1;i<10;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        b[--count[(arr[i]/pos)%10]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=b[i];
    }
}

int main(){
    int n;
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
    int m=getmax(arr,n);
    cout<<endl<<m;
   
    for(int pos=1;(m/pos)>=1;pos=pos*10){
        // cout<<"aisa kuu "<<m/pos<<endl;
      // cout<<"helo";
       sort(arr,pos,n);
    }
    // int pos=1;
    // while((m/pos)>=1){
    //     // cout<<m/pos<<endl;
    //     sort(arr,pos,n);
    //     pos=pos*10;
    // }
    cout<<endl<<"sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
