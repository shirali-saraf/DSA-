#include<iostream>
#include<algorithm>
using namespace std;
void equa(int a1[],int a2[],int n){
    int k=0;
    sort(a1,a1+n);
    sort(a2,a2+n);
    for(int i=0;i<n;i++){
        if(a1[i]==a2[i]){
            k++;
        }
    }
    if(k==n){
        cout<<"equal array "<<endl;
    }
    else{
        cout<<"not equal "<<endl;
    }
}

void arr_elements(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void display(int arr[],int size){
   for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,m;
    cout<<"array size of 1st and 2nd : ";
    cin>>n;
    int a1[n],a2[n];
    cout<<"array elements for 1st : ";
    arr_elements(a1,n);
    cout<<"array elements for 2nd : ";
    arr_elements(a2,n);
    display(a1,n);
    display(a2,n);
    equa(a1,a2,n); 
}