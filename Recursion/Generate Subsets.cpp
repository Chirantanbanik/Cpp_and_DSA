// Find out all the subsets of a String.

#include<iostream>
using namespace std;

void subset(string s, string curr=" ", int i = 0){
    if(i==s.length()){
    cout<<curr<<endl;
    return;

    }

    subset(s, curr, i+1);
    subset(s, curr + s[i], i+1);
}

int main(){
    string s = "ABC";
    subset(s, " ", 0);
}

// Logic:
// We take arguments string s, string curr = " " & int i = 0. 
// Now if(i=s.length()) we will print curr and return; because it is void.
// now for function call - subset(s, curr, i+1) and for the append one we subset(s, curr + s[i], i + 1);
