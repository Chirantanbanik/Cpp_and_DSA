// Find the count of a number

// Logic: In this we will take count=0, then will use a while loop(n!=0) then find n=n%10 and will increment the count and at last return count. 
// In the main function will provide the inputs.


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
