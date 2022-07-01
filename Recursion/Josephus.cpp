// 


#include<iostream>
using namespace std;

int jos(int n, int k){
    if(n==1)    // if person 1 is let we return 0.
    return 0;

    else

    return (jos(n-1, k) + k)%n;   // (n-1) because in every iteration n is reduced, k will be as it is, + k because k is being added every time & % n because our k will become more than n if we dd n to a number.  
}

int main(){
    cout<<"The remaining person is: "<<jos(2,3);
}


// Time Complexity: Theta(n)
