#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void occur(string s){
    int count[26]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
    }
    char ans='a';
    int max=0;

    for(int i=0;i<26;i++){
        if(count[i]>max){
            max=count[i];
            ans=i+'a';
        }
    }
    cout<<"maximum occurance : "<<ans<<" : "<<max;
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
    occur(s1);
    // cout<<endl<<"length : "<<l;
}
