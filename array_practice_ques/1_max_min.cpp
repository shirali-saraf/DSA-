#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"array elements : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int min=arr[0],max=0;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
          max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"minimum : "<<min<<endl;
    cout<<"maximum : "<<max;

}