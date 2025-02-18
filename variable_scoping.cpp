#include<iostream>
int  x=100;
/* here the x is the globle vriable each fuction 
or block can access it */
using namespace std;
int main(){
/* here the a and be are local variable 
for the main class that is only main class can access it */
    //declaration
    int a;
    //initialization
    int b=15;
    //updation
    b=10;
    cout<<x<<endl;
    if(true){
        /*here the b is local variable for if block only there
        is no existence of this variable outside the if block*/
        int b=13;
        cout<<b<<endl;
        cout<<x<<endl;

    }
    cout<<b<<endl;
}