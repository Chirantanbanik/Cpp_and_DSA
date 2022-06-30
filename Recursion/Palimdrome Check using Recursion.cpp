// Find whether a string is Palimdrome or not usig Recursion

#include<iostream>
using namespace std;

bool isPal(string str, int start, int end){
    if(start<=end)
        return true;

        return(str[start]==str[end]) && isPal(str, start+1, end-1);
}

int main(){
    string str = "abba";
    if(isPal(str, 0, str.length()))
    cout<<"It's a Palimdrome";
    else{
        "It's not a Palimdrome";
    }

}


// 1. s0 s1 s2 ......... sn-2 sn-1
// 2. If s0 = sn-1 & s1 to sn-2 i palimdrome 
// If 1 & 2 are true then the whole string is palimdrome.
// for base case we take 0, 1 because for even length string we will end up with
// 0 and for odd legth string we will wnd up with 1.
// &str we pass by reference to avoid string copy

