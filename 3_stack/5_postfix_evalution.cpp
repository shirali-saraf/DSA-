#include<iostream>
#include<math.h>
#include<stack>
#include<string>
using namespace std;

int main(){
    stack<int> st;
    string s;
    cout<<"enter a prefix expression : ";
    cin>>s;
    // cout<<s.length()<<endl;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){

            st.push(s[i]-'0');
        }
        else{
            int o2=st.top();
            st.pop();
            int o1=st.top();
            st.pop();
            if(s[i]=='+'){
                st.push(o1+o2);
            }
            else if(s[i]=='-'){
                st.push(o1-o2);
            }
             else if(s[i]=='*'){
                st.push(o1*o2);
            }
             else if(s[i]=='/'){
                st.push(o1/o2);
            }
             else if(s[i]=='^'){
                st.push(pow(o1,o2));
            }
            else{
               cout<<"invaild operator"<<endl;
            }
        }
    }
    cout<<endl<<st.top();
}