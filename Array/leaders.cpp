// Find the leaders in an Array.

// Algorithm:
// 1. We will be using void because this will not be having a retrun type.
// 2. We all know the curr lead is the last element, so we will be printing it.
// 3. We will run a for loop from second last element to 0 and then check if curr lead
// is smaller than current element if it is so then put current element in curr lead.
// 4. At last cout our curr lead.
// 5. In the main function initialize arr[] and put it's size and at the end simply call the function.


#include<iostream>
using namespace std;

void leaders(int arr[], int n){
    int curr_lead = arr[n-1];
    cout<<curr_lead<<endl;
    for(int i=n-2; i>=0; i--){
        if(curr_lead<arr[i]){
            curr_lead = arr[i];
            cout<<curr_lead<<endl;
       }
    }
}
int main(){
    int arr[] = {3,5,1,9,4}, n = 5;
    leaders(arr, n);
}
