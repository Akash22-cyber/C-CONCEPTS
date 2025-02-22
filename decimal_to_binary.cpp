#include<iostream>
#include<cmath>// included cmayh library for pow() fuction

using namespace std;
//fuction for decimal toi binary
int DecimalToBinary(int n){
    int binaryNo =0;
    int i=0;
    while(n>0){
        //to get the binary bit 
        int reminder =n%2;
        //this is the logic to store the bits in reverse order 
       binaryNo=(reminder*pow(10,i++))+binaryNo;
       //after each loop the value of n becomes n/2
        n=n/2;

    }
    return binaryNo;
}
int main (){
    int n;
    cin>>n;
    //the fuction is called here in the main function
    int binary =DecimalToBinary(n);
    cout<<binary<<endl;

}