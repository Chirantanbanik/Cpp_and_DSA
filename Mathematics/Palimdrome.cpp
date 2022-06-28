// Check whether the number is Palimdrome or not

// Logic: Basically we will take res=0 and store our n in temp, then will use a while loop in which temp!=0, then find ld by ld = temp%10 then find the rev
// by rev=rev*10 + ld, then for temp we will be using temp=temp/10. After this we will return rev=n. In the main function we will provide with the inputs.


#include<iostream>
using namespace std;

bool palimdromeCheck(int n){
    int rev = 0;
    int temp = n;
    while(temp!=0){
        int ld = temp % 10;
        rev = rev*10 + ld;
        temp = temp/10;
    }
    return (rev==n);
}

int main(){
    int n = 1221;
    cout<<(bool)palimdromeCheck(n)<<endl;
}

// Time Complexity: Theta(d) where d = number of digits
