#include<iostream>
using namespace std;
void linear(int n,int m,int a[][10]){
     int num;
     cout<<"enter number to search : ";
     cin>>num;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(num==a[i][j]){
               cout<<"number "<<a[i][j]<<" found at index : "<<i<<","<<j;
            }
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cout<<"enter rows and columns : ";
    cin>>n>>m;
    int arr[n][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    linear(n,m,arr);

}