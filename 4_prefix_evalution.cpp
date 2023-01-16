#include<iostream>
#include<math.h>
// #include<stack>
#include<string>
using namespace std;
class stack{
    public:
    int top;
    int size;
    int arr[];
    stack(int size){
       top=-1; 
       this->size=size;
       arr[size];
    }
    void push(int data){
       if(top>=size-1){
            cout<<"stack size Exceed"<<endl;
        }
        else{
            top++;
            arr[top]=data;
        }
    }
    void pop(){
      if(top==-1){
        cout<<"stack is empty : "<<endl;
      }
      else{
        top--;
      }
    }
    int peek(){
      return arr[top];
    }

};

int main(){
    stack st(100);
    string s;
    cout<<"enter a prefix expression : ";
    cin>>s;
    // cout<<s.length()<<endl;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){

            st.push(s[i]-'0');
        }
        else{
            int o1=st.peek();
            st.pop();
            int o2=st.peek();
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
    cout<<endl<<st.peek();
}