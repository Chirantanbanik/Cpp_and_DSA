// Remove Dublicate from an Sorted Array

// Algorithm:
// 1. Inatilize a variable res = 1.
// 2. Run a for loop from 1 to n.
// 3. After that check if arr[res-1] != arr[i], then store value of arr[i] to res, increment res and then return it.
// 4. In main function there will be two part of code first is With Dublicates and other is Without Dublicates.

#include<iostream>
using namespace std;

int remDups(int arr[], int n){
    int res = 1;
    for(int i=1; i<n; i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
        return res;

    }

int main(){
    int arr[] = {2,3,4,4,5,6,6}, n=7;
    cout<<"With Dublicates"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    n = remDups(arr, n);
    cout<<"Without Dublicates"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
