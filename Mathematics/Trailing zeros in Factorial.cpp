// Find the Trailing of a Factorial.

// Logic: For Trailing zeros we will take res = 0, use a for loop which starts from 5 and increments by i=i*5, find res=res+n/5 and at last return res.
// In the main function we put the input to find the value


#include<iostream>
using namespace std;

int trailingZeros(int n){
    int res = 0;
    for(int i=5; i<=n; i=i*5){
        res=res+n/i;
        return res;
    }
}

int main(){
    int n = 7;
    cout<<trailingZeros(n)<<endl;
}
