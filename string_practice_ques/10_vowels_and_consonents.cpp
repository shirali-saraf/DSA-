#include<iostream>
using namespace std;
void check(string s){
    int v=0,c=0;
    for(int i=0;i<s.length();i++){
        if((s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u')){
            v++;
        }
        else{
            c++;
        }
    }
    cout<<"vowels : "<<v<<endl;
    cout<<"consonents : "<<c<<endl;
}
int main(){
    string str; 
    cout<<"enter string : ";
    getline(cin,str);
    check(str);

}