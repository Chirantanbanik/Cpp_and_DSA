// N^th Fibonacci using Recursion

#include<iostream>
using namespace std;

int fibo(int n){
    if(n<=1)
        return n;
        return fibo(n-1) + fibo(n-2);
    

}

int main(){
    cout<<fibo(3);
}


// Nth Fibonacci number sum of fib(n-1) + fib(n-2)
// fib(2) -> fib(1) & fib(0)
// We need to take care of base cases 
// If we take n = 0 then there will be problem for n = 1 so we have to handel n=0,1 that's why we have to take (n<=1)
