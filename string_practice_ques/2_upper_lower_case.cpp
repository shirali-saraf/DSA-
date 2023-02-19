#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cout<<"1st : ";
    getline(cin,s1);
    cout<<"2nd : ";
    getline(cin,s2);
    cout<<endl<<s1;
    cout<<endl<<s2;
    //cout<<endl<<s1+s2; concate--------------------
    cout<<endl<<'a'-'A';
    for(int i=0;i<s1.length();i++){
        if(s1[i]>='a' && s1[i]<='z'){
           s1[i]=s1[i]-32;
        }
    }
    cout<<endl<<"to upper case : "<<s1;
    for(int i=0;i<s2.length();i++){
        if(s2[i]>='A' && s2[i]<='Z'){
           s2[i]=s2[i]+32;
        }
    }
    cout<<endl<<"to lower case : "<<s2;

}
//getline function is used to take input of string with space..............