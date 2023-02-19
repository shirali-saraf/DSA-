#include<iostream>
using namespace std;
void rem(string s){
   char c;
   cout<<"enter character which you want to remove : ";
   cin>>c;
   for(int i=0;i<s.length();i++){
       if(s[i]!=c){
           cout<<s[i];
       }
   }
}
int main(){
    string str; 
    cout<<"enter string : ";
    getline(cin,str);
    rem(str);

}