// Natural Number sum using Recursion.

#include<iostream>
using namespace std;

int getSum(int n){
    if(n==0)
    return n;

    return n + getSum(n-1);
    
}

int main(){
    cout<<getSum(3);
}

// Time complexity: Theta(n) 
// Auxiliary Space: Theta(n)
