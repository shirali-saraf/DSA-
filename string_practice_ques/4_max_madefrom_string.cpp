#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void max(string s){
    sort(s.begin(),s.end(),greater<int>());
    cout<<"max number formed by string : "<<s;
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
    max(s1);
    // cout<<endl<<"length : "<<l;
}
