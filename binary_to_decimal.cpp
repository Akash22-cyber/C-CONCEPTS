#include<iostream>
#include<cmath>
using namespace std;
int BinaryToDecimal(int n){
    int decimal=0;
    int i=0;
    while(n>0){
        int lastdigit=n%10;
        decimal=(lastdigit*pow(2,i++))+decimal;
        n=n/10;
    }
    return decimal;
}
int main(){
    int binary;
    cin>>binary;
    int decimalno=BinaryToDecimal(binary);
    cout<<decimalno<<endl;
}