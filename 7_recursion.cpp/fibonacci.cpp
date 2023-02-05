#include<iostream>
using namespace std;
//----------for fibonacci number for given number--------------
// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter number : " ;
//     cin>>n;
//     int fibo=fib(n);
//     cout<<"number : "<<fibo;

// }
//----------------for fibonacci series --------------------------

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n,i=0;
    cout<<"enter number : ";
    cin>>n;
    while(i<n){
        int res=fib(i);
        cout<<res<<" ";
        i++;
    }
}