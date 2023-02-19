#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void freq(string s){
    int count[26]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]>=1){
            char c=i+'a';
            cout<<endl<<"frequency of "<<c<<" is : "<<count[i];
        }
    }
    cout<<endl<<s[0];
    
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
    freq(s1);
    // cout<<endl<<"length : "<<l;
}
