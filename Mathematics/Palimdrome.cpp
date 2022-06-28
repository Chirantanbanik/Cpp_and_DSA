// Check whether the number is Palimdrome or not

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
