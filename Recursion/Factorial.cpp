// Find factorial using Recursion

#include<iostream>
using namespace std;

int fact(int n){
    if(n==0 || n==1)
        return 1;

        return n*fact(n-1);
        
}

int main(){
    cout<<fact(3);
}

// Output: 6
