// Print all the numbers from N to 1 using Recursion

#include<iostream>
using namespace std;

void printNto1(int n){
    if(n==0)
        return;

        cout<<n<<endl;
        printNto1(n-1);
}

int main(){
    printNto1(4);
}

// Output:
// 4
// 3
// 2
// 1

// Logic:
// printNto1(4) -> printNto1(3) -> printNto1(2) -> printNto1(1) -> printNto1(0)
//      4               3               2               1 

// Time Complexity: Theta(n).
