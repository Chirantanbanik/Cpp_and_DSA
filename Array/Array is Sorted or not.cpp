// Check whether an Array is Sorted ot not.

// Algorithm:
// 1. make an function isSorted and put arguments arr[], n.
// 2. run a for loop from 0 to n and check if arr[i]<arr[i-1] which is not possible so return false
// otherwise return true.
// 3. In the main function initialize the arr[] with the values and give the size i.e. n and cout
// the function isSorted(arr, n).

#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
	for(int i=0; i<n; i++){
		if(arr[i]<arr[i-1]){
			return false;
		}
		return true;
	}
}

int main(){
	int arr[] = {1,2,3,5,4}, n=3;
	cout<<isSorted(arr,n)<<endl;
}
