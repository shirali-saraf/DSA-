#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void freq(string s){
    int count[26]={0};
    // int p=0,q=0;
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
        // cout<<s[i]-'a'<<endl;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]-'a']>0){
            cout<<s[i]<<" ";
            count[s[i]-'a']=0;
        }
    }
}
//          h e l l o
// supopse  0 1 2 2 3
//count 0->1 , 1->1, 2->2, 3->1

using namespace std;
int main(){
    string s1;
    cout<<"string : ";
    getline(cin,s1);
    // cout<<endl<<s1;
    freq(s1);
    // cout<<endl<<"length : "<<l;
}
