// Write a program to print numbers from 1 to N using Recursion.

#include<iostream>
using namespace std;

void print1toN(int n){
    if(n==0)
        return;
        
        print1toN(n-1);
        cout<<n;
}

int main(){
    print1toN(4);
}

// Output: 1234

// Logic: print1toN(4) -> print1toN(3) -> print1toN(2) -> print1toN(1) -> print1toN(0)
// The solution will be from print1toN(1) -> print1toN(4) so 1234
