#include<iostream>
using namespace std;
int main(){
    int a = 16; // a means dividend
    int b = 3;  // b is divisor
    // int q = a/b; // q is divisor
    // int r;  // remainder
    
    // a = (b*q) + r
    
    int r = a % b;
    cout<<r;
}