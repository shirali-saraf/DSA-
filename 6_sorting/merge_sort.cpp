#include<iostream>
using namespace std;
void merge(int arr[],int lb,int mid,int ub){
     int i=lb;
     int j=mid+1;
     int k=lb;
     int a[ub];
     while((i<=mid) && (j<=ub)){
        if(arr[i]<arr[j]){
            a[k]=arr[i];
            i++,k++;
        }
        else{
            a[k]=arr[j];
            j++,k++;
        }
    }
    if(i>mid){
        while(j<=ub){
            a[k]=arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            a[k]=arr[i];
            i++;
            k++;
        }
    }
    for(int s=lb;s<=ub;s++){
        arr[s]=a[s];
    }

}
void sort(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        sort(arr,lb,mid);
        sort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

int main(){
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n],lb=0,ub=n-1;
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    sort(arr,lb,ub);
    cout<<endl<<"sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}