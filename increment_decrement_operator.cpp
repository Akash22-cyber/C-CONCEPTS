#include <iostream>
using namespace std;
int main (){
    int a=12;
    //a++;
    /*POST INCREMENT: phele print ya use 
    karo then value ko increment karo*/
    cout<<(a++)<<endl;
    cout<<a<<endl;
    int b=6;
    /*PRE INCREMENT: phele value ko  
    increment karo then print ya use karo*/
    cout<<(++b)<<endl;

    /* SAME FOR DECREMENT ALSO*/
    int c=5;
    cout<<(++c)*(++c)<<endl;
}