#include<iostream>
using namespace std;
int digi(int n){
    static int c=0;
    if(n>0){
        c++;
        digi(n/10);
    } 
    return c;
    
}
int main(){
    int result,n;
    cout<<"enter number : ";
    cin>>n;
    result=digi(n);
    cout<<endl<<"number of digits : "<<result;
    return 0;
}

//Static local variables are useful when we want to have only one instance of our object in the local scope, which means all calls to the function will share the same object. The same can also be achieved by using global variables or static member variables.