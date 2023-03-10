#include<iostream>
#include<string>
using namespace std;
//also check upper and lower case
void words(string s1){
    int count=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]==' ' || s1[i]=='\t' || s1[i]=='\n'){
            count++;
        }
    }
    cout<<"number of words : "<<count+1;
}

int main(){
    string s1; 
    cout<<"enter string s1 : ";
    getline(cin,s1);
    words(s1);

}