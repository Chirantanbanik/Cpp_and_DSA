// Logic: Just traverse throught the array as soon as you find the element return the index.

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int x){
    for(int i=0; i<n; i++)
    if(arr[i]==x)
    return i;
}

int main(){
    int arr[] = {1,2,2,3,4,4,5,5}, n = 8, x = 5;
    cout<<firstOcc(arr, n, x);
}

// Time Complexity: O(n)
// Auxiliary Space: O(1)
