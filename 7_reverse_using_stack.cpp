#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    int c;
    stack<char> st;
    string s,rev;
    cout<<"enter string : ";
    cin>>s;
    for(int i=0;i<s.length();i++){
        c=s[i];
        st.push(c);
    }
    while(!st.empty()){
        rev=rev+st.top();
        st.pop();
    }
    cout<<rev;
}
