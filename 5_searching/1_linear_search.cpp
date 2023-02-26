#include<iostream>
using namespace std;
int main(){
    int n,data,c=0;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"enter element which you want to search : ";
    cin>>data;
    for(int i=0;i<n;i++){
        if(arr[i]==data){
            cout<<"element found at index : "<<i<<" and position : "<<i+1<<endl;
            c=1;
            break;
        }
    }
    if(c==0){
        cout<<"element not found : ";
    }
    return 0;
}
