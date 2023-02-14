#include<iostream>
#include<algorithm>
using namespace std;
void uni(int a1[],int a2[],int n,int m,int b[]){
    int i=0,j=0,k=0,p=0;
    
        while(i<n){
          b[k]=a1[i];
          i++;
          k++;
        }
        while(j<m){
            b[k]=a2[j];
            j++;
            k++;
        }

    sort(b,b+(m+n));  
    while(p<(n+m)){
        if(b[p]==b[p+1]){
          while(b[p]==b[p+1]){
              p++;
          }
        }
        cout<<b[p]<<" ";
        p++;
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
    int b[m+n];
    cout<<"array elements for 1st : ";
    arr_elements(a1,n);
    cout<<"array elements for 2nd : ";
    arr_elements(a2,m);
    display(a1,n);
    display(a2,m);
    cout<<"UNION : "<<endl;
    uni(a1,a2,n,m,b);
    
}