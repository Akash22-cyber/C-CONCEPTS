// leftshift << and rightshift >>
// whenever we do leftshift to any decimal number the result is two times of the given number (or the current number)
//for right shift operator we devide the decimal number by 2
#include<iostream>
using namespace std;
int main(){
    //LEFTSHIFT
    int b=-2;//for negative value when they  are lefshifted output is negative only
    b=b<<3;
    int a=12;
    a=a<<1;// 12 is leftshifted by 1
    cout<<a<<endl;
    a=a<<2;// here the updated value of a that is 12 is leftshifted by 2
    cout<<a<<endl;
    cout<<b<<endl;
    //for negative left shift output is a garbage value
    int c=3;
    c=c<<-1;
    cout<<c<<endl;
    //RIGHTSHIFT
    int d=5;
    d=d>>1;
    cout<<d<<endl;
    int e=-6;
    e=e>>1;
    cout<<e<<endl;
    

}