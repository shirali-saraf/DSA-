#include<iostream>
using namespace std;
string rev(string s){
    int n=0;
    int l=s.length();
    while(n<s.length()/2){
       char c=s[n];
       s[n]=s[l-n-1];
       s[l-n-1]=c;
       n++;
    }
    // cout<<"reversed string : "<<s;
    return s;
}
int main(){
    string str; 
    cout<<"enter string : ";
    getline(cin,str);
    string r=rev(str);
    if(str==r){
       cout<<"palindrome "<<endl;
    }
    else{
        cout<<"not palindrome "<<endl;
    }

    
}