#include<iostream>
#include<cctype>
using namespace std;
//also check upper and lower case
void comp(string s1,string s2){
    if(s1==s2){
        cout<<"equal strings...";
    }
    else{
        cout<<"not equal...";
    }
}
void compare_without(string s1,string s2){
    for(int i=0;i<s2.length();i++){
        if(s2[i]>='A' && s2[i]<='Z'){
           s2[i]=s2[i]+32;
        }
    }
    for(int i=0;i<s1.length();i++){
        if(s1[i]>='A' && s1[i]<='Z'){
           s1[i]=s1[i]+32;
        }
    }
    if(s1==s2){
        cout<<"equal strings...";
    }
    else{
        cout<<"not equal...";
    }
}
int main(){
    string s1,s2; 
    cout<<"enter string s1 : ";
    getline(cin,s1);
    cout<<"enter string s2 : ";
    getline(cin,s2);
    compare_without(s1,s2);

}