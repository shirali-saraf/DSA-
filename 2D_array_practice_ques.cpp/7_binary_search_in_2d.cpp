#include<iostream>
using namespace std;
void binary(int n,int m,int a[][10]){
     int num,r=0,c=m-1,f=0;
     cout<<"enter number to search : ";
     cin>>num;
    while(r>=0 && r<n && c>=0 && c<m){
        if(num==a[r][c]){
            cout<<"found at index : "<<r<<","<<c<<endl;
            f=1;
            break;
        }
        else if(num<a[r][c]){
            c--;
        }
        else if(num>a[r][c]){
            r++;
        }
    }
    if(f==0){
        cout<<"not found..."<<endl;
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
    binary(n,m,arr);

}