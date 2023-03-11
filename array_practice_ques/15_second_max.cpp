#include<iostream>
using namespace std;

int print2largest(int arr[], int n) {
	   if(n<2)
	return -1;
    int large=-1,second_large=-1;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter array size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=print2largest(arr,n);
    cout<<"largest : "<<l;
    return 0;
}
