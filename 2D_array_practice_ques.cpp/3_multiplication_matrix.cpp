#include<iostream>
using namespace std;
int main(){
    int n1,m1,n2,m2;
    cout<<"enter rows and columns for 1st : ";
    cin>>n1>>m1;
    cout<<"enter rows and columns for 2nd : ";
    cin>>n2>>m2;
    int a1[n1][m1],a2[n2][m2];
    cout<<"elements for 1st : ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>a1[i][j];
        }
    }
    cout<<"elements for 2nd : ";
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cin>>a2[i][j];
        }
    }
    cout<<endl<<"1st : "<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cout<<a1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"2nd : "<<endl;
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cout<<a2[i][j]<<" ";
        }
        cout<<endl;
    }
    int a[n1][m2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            a[i][j]=0;
            for(int k=0;k<n1;k++){
                a[i][j]=a[i][j]+(a1[i][k]*a2[k][j]);
            }
        }
    }
    cout<<endl<<"multiply matrix : "<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}