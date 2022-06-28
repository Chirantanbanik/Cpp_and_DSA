// Find a factorial of a number 

#include<iostream>
using namespace std;

int factorial(int n){
    int res = 1;
    for(int i=2; i<=n; i++){
        res = res*i;
    }
    return res;
}

int main(){
    int n = 3;
    cout<<"The factorial of the number is: "<<factorial(n);
}

// Time Complexity: Theta(n) where d = number of digits
// Auxilary Space: Theta(1) 
