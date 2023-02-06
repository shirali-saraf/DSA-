#include<iostream>
using namespace std;
void bin(int n){
    if(n>=1){
        cout<<n%2;
        bin(n/2);
    } 
    
}
int main(){
    int result,n;
    cout<<"enter number : ";
    cin>>n;
    // result=bin(n);
    // cout<<endl<<"factorial : "<<result;
    bin(n);
    return 0;
}