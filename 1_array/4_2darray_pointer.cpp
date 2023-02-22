#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j;
    int *p;
    p=&a[0][0];

    cout<<"enter array elements ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"*p "<<*p<<endl<<endl;
    cout<<"*a "<<*a<<endl<<endl;
    cout<<"**a "<<**a<<endl<<endl;
    cout<<"a+1 "<<a+1<<endl<<endl;
    cout<<"p+1 "<<p+1<<endl<<endl;
    cout<<"*(p+1) "<<*(p+1)<<endl<<endl;
    cout<<"*(a+1) "<<*(a+1)<<endl<<endl;
    // cout<<"array elements without using pointer"<<endl;
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"array elements using pointer : "<<endl;
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++){
    //         cout<<*p<<" ";
    //         p++;
    //     }
    //     cout<<endl;
    // }

    cout<<"array elements using array name : "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            cout<<*(*(a+i)+j)<<" ";
        }
        cout<<endl;
    }
}
