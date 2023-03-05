#include<iostream>
using namespace std;
void issort(int a[],int n){
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            cout<<"not sorted "<<endl;
            return;
        }
    }
    cout<<"sorted "<<endl;
}
int main(){
    int n;
    cout<<"array size : ";
    cin>>n;
    int arr[n];
    cout<<"array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    issort(arr,n);

}