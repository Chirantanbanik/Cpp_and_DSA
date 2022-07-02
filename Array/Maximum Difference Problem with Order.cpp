// Maximum difference Problem with order

// Maximun value of arr[j] - arr[i] such that j>i 

// arr[] = {2, 3, 10, 6, 4, 8, 1}
// Ans = 8, because 10 - 2 = 8.

#include<iostream>
using namespace std;

int maxDiff(int arr[], int n){
    int res = arr[1] - arr[0];               // res = arr[1] which j^th 2nd element and arr[0] which is i^th 1st element.
    int minValue = arr[0];                  // we have considered arr[0] as min value
    for(int j=1; j<n; j++) {               // traverse j
    res = max(res, arr[j] - minValue);    // max can be res or traverse of arr[j] - minValue
    minValue = min(minValue, arr[j]);    // min will be minValue or traverse of arr[j]
 }
    return res;
}

int main(){
    int arr[] = {1,2,3,4}, n = 4;
    cout<<maxDiff(arr, n);
}

// Time complexity: Theta(n)
// Auxiliary Space: Theta(1)
