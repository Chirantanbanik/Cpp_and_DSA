// Find the sum of Digits by using Recursion

#include<iostream>
using namespace std;

int sumDigit(int n){
    if(n==0)
    return 0;

    return sumDigit(n/10) + (n%10);
}

int main(){
    cout<<sumDigit(55);
}


// Logic: 
// n%10 -> gives the last digit
// n/10 -> removes the last digit

// Time Complexity: Theta(d)
// Auxiliary Space: Theta(d)

// sumDigit(55) -> sumDigit(5) + 5 -> sumDigit(0) + 0
