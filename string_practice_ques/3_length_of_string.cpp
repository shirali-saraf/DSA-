#include<iostream>
using namespace std;
int slen(string s){
    int count=0;
     for(int i=0;s[i]!='\0';i++){
         count++;
     }
    return count;
}
using namespace std;
int main(){
    string s1,s2;
    cout<<"1st : ";
    getline(cin,s1);
    cout<<"2nd : ";
    getline(cin,s2);
    cout<<endl<<s1;
    cout<<endl<<s2;
    int l=slen(s1);
    cout<<endl<<"length : "<<l;
}
