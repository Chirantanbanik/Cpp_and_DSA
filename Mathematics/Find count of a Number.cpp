// Find the count of a number

include<iostream>  
using namespace std;

int getCount(int n){
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int main(){
    int n = 12345;
    cout<<"The count of the number is: "<<getCount(n)<<endl;
}

// Time Complexity: Theta(d) where d = number of digits
