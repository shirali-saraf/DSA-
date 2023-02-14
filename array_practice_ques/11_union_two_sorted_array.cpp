#include<iostream>
using namespace std;
void uni(int ar1[],int ar2[],int n,int m){
    int p=0,q=0;
    while(p<n || q<m){
       if(ar1[p]<ar2[q] && p<n){
           if(ar1[p]==ar1[p+1]){
               while(ar1[p]==ar1[p+1]){
                   p++;
               }
           }
           cout<<ar1[p]<<" ";
           p++;
        
       }
       else if(ar1[p]>ar2[q] && q<m){
           if(ar2[q]==ar2[q+1]){
               while(ar2[q]==ar2[q+1]){
                   q++;
               }
           }
           cout<<ar2[q]<<" ";
           q++;
       }
       else{
           if(ar1[p]==ar1[p+1]){
               while(ar1[p]==ar1[p+1]){
                   p++;
               }
           }
           else if(ar2[q]==ar1[q+1]){
               while(ar1[q]==ar1[q+1]){
                   q++;
               }
           }
           cout<<ar1[p]<<" ";
           p++;
           q++;
       }
       if(p>=n){
           while(q<m){
               if(ar2[q]==ar2[q+1]){
                   while(ar2[q]==ar2[q+1]){
                       q++;
                   }
               }
               cout<<ar2[q]<<" ";
               q++;
           }
       }
       else if(q>=m){
           while(p<n){
               if(ar1[p]==ar1[p+1]){
                   while(ar1[p]==ar1[p+1]){
                       p++;
                   }
               }
               cout<<ar1[p]<<" ";
               p++;
           }
       }
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
    cin>>m;
    int a1[n],a2[m];
    cout<<"array elements for 1st : ";
    arr_elements(a1,n);
    cout<<"array elements for 2nd : ";
    arr_elements(a2,m);
    display(a1,n);
    display(a2,m);
    cout<<"UNION : "<<endl;
    uni(a1,a2,n,m);
    
}