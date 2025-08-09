#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void leftrotate(int arr[],int n,int d){
    reverse(arr,arr+d);//reverse the array from index 0 to index d-1
    reverse(arr+d,arr+n);//reverse the array from d to n-1
    reverse(arr,arr+n);//reverse entire array 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int d;
    cin>>d;
    leftrotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}