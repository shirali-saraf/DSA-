#include<iostream>
using namespace std;
int sum(int n){
    if(n<=0){
        return 0;
    }
    return n+sum(n-1);
}
int main(){
    int result,n;
    cout<<"enter number upto find sum : ";
    cin>>n;
    result=sum(n);
    cout<<endl<<"sum of n number is : "<<result;
    return 0;
}