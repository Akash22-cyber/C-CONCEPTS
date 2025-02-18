#include<iostream>
using namespace std;
int main (){
    bool a= true;
    bool b=false;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
   // b=~(b);
    cout<<(~b)<<endl;//it gives twos complement
    //XOR operator
    cout<<(a^b)<<endl;
    //for decimal number 
    cout<<(2&3)<<endl;//here 2 and 3 are converted in binary and then AND operator is applied
    cout<<(3|4)<<endl;
}