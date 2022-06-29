// Predict the output

#include<iostream>
using namespace std;

int fun(int n){
    if(n==1){
        return 0;
} else {
        return 1 + fun(n/2);
    }
}
    
int main(){
    cout<<fun(16)<<endl;
    return 0;
}

// fun(16) -> 1 + fun(8) -> 1 + fun(4) -> 1 + fun(2) -> 1 + fun(1)
// Output -> 4

// for fun(31) -> fun(31) -> 1 + fun(15) - > 1 + fun(7) -> 1 + fun(3) -> 1 + fun(1)
// Output -> 4

// fun(32)
// Output -> 5

// logN with base 2
