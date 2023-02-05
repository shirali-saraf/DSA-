#include<iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    } 
    return n*fact(n-1);
}
int main(){
    int result,n;
    cout<<"enter number : ";
    cin>>n;
    result=fact(n);
    cout<<endl<<"factorial : "<<result;
    return 0;
}