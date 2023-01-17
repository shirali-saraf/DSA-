#include<iostream>
#include<stack>
#include<string>
#include<math.h>
using namespace std;

int preced(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
//
int main(){
    int i=0;
    stack<char> st;
    string s,result;
    cout<<"enter string or expression : "<<endl;
    cin>>s;
    while(i<s.length()){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            result=result+s[i];
        }
        else if(s[i]=='('){
           st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                result=result+st.top();
                st.pop();

            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
          while(!st.empty() && preced(st.top())>preced(s[i])){
              result=result+st.top();
              st.pop();
           }
          st.push(s[i]);
        }
        
        i++;
    }
        while(!st.empty()){
            result=result+st.top();
            st.pop();
        }
    cout<<endl<<result;
   
}
