// Predict the output

#include<iostream>
using namespace std;

void fun(int n){
    if(n==0)
        return;

        fun(n/2);
        cout<<(n%2);
    }

int main(){
    fun(7);
    return 0;
}

// Output: 111

// fun(7) -> fun(3) -> fun(1) -> fun(0)
// for any odd number when you do a remainder(%) with 2 you get
// output as 1 and for even you will get remainder as 0.

// Binary Representation
