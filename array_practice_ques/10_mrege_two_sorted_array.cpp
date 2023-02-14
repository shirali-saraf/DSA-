#include<iostream>
#include<algorithm>
using namespace std;
//a1=1 2 3
//a2=7 8 9
//arr=1 2 3 4 5 
void diff_merge(int a1[],int a2[],int n,int m,int arr[]){
    int i=0,j=0,k=0;
    
        while(i<n){
            arr[k]=a1[i];
            i++;
            k++;
        }
        while(j<m){
            arr[k]=a2[j];
            j++;
            k++;
        }
}

void merge(int a1[],int a2[],int n,int m,int arr[]){
    int i=0,j=0,k=0;
    arr[n+m]={0};
    while(k<(n+m)){
        if(a1[i]<a2[j]  && i<n){
            arr[k]=a1[i];
            i++;
        }
        else if(a1[i]>a2[j] && j<m){
            arr[k]=a2[j];
            j++;
        }
        if(i>n){
            while(j<m){
                arr[k]=a2[j];
                j++;
            }
        } 
        else if(j>m){
            arr[k]=a1[i];
            i++;
        }
        k++;
    }
}

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,m;
    cout<<"1st and 2nd array size : ";
    cin>>n;
    cin>>m;
    int arr[n],a[m];
    int b[n+m];
    cout<<"1st array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"2nd array elements : ";
    for(int i=0;i<m;i++){
        cin>>a[i];
        // cout<<"hi";
    }
    int s=n-1,t=0;
    while(s>=0 && t<m){
        if(arr[s]>a[t]){
           swap(arr[s],a[t]);
           cout<<"helo";
        }
        s--;
        t++;
        // cout<<"hie";
    }
    // cout<<"hi";
    sort(arr,arr+n);
    sort(a,a+m);
    cout<<"helo";
    // int b[n+m];
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        // cout<<"hi";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
        // cout<<"hi";
    }
    
    // for(int i=0;i<n;i++){
    //     b[i]=arr[i];
    // }
    // for(int i=n;i<m;i++){
    //     b[i]=a[i];
    // }
    diff_merge(arr,a,n,m,b);
    cout<<"mreged sorted array : ";
    for(int i=0;i<n+m;i++){
        cout<<b[i]<<" ";
    } 

}