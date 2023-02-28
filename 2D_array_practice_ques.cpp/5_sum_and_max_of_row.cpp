#include<iostream>
using namespace std;
void sum(int n,int m,int a[][10]){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+a[i][j];
        }
        cout<<"sum of row "<<i+1<<" : "<<sum<<endl;
    }
}
void max_sum(int n,int m,int a[][10]){
    int max=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+a[i][j];
        }
        if(sum>max){
            max=sum;
        }
    }
    cout<<"max sum : "<<max<<endl;
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
    sum(n,m,arr);
    max_sum(n,m,arr);
}