#include<iostream>
using namespace std;
void spiral(int arr[][4], int n, int m){
   int leftc=0,rightc=m-1,topr=0,bottomr=n-1;
   int count=0;
   int total=n*m;
   while(count<total)
   {  
        for(int i=leftc;i<=rightc && count<total;i++){
           int j=topr;
           cout<<arr[j][i]<<" ";
           count++;
        }
        topr++;
        cout<<endl;
        for(int i=topr;i<=bottomr && count<total;i++){
            int j=rightc;
            cout<<arr[i][j]<<" ";
            count++;
        }
        rightc--;
        cout<<endl;
        for(int i=rightc;i>=leftc && count<total;i--){
          int j=bottomr;
          cout<<arr[j][i]<<" ";
          count++;
        }
        bottomr--;
        cout<<endl;
        for(int i=bottomr;i>=topr && count<total;i--){
            int j=leftc;
            cout<<arr[i][j]<<" ";
            count++;
        }
        leftc++;
   }
        
}
int main(){
    int n,m;
    cout<<"enter rows and columns : ";
    cin>>n>>m;
    int arr[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"spiral : "<<endl;
    spiral(arr,n,4);
}