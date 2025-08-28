#include<iostream>
using namespace std;
void moveZeros(int arr[],int n){
    int j=-1;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        j=i;
        break;
    }

}
for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
    }
}


}





int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    
    moveZeros(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}