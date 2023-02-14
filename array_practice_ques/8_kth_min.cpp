#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
//------------------------using sorting method-----------------------------------
// int main(){
//     int n;
//     cout<<"array size : ";
//     cin>>n;
//     int arr[n];
//     cout<<"array elements : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cout<<"enter k : ";
//     cin>>k;
//     sort(arr,arr+n);
//     cout<<"kth minimum : "<<arr[k-1]<<endl;
//     // cout<<"maximum : "<<max;

// }

//----------------------using heap------------------------------------------
int main(){
    int n;
    cout<<"array size : ";
    cin>>n;
    int arr[n];
    cout<<"array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter k : ";
    cin>>k;
     priority_queue<int> p;
    for(int i=0;i<n;i++){
        p.push(arr[i]);
        if(p.size()>k){
            p.pop();
        }
    }
    cout<<"kth min : "<<p.top();
}