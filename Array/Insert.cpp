//Insert a element in an Array, the Array can be sorted or unsorted.

// Algorithm: 
// 1. make an function insert and take arguments like arr[], n, x, cap and pos.
// 2. if n==cap we return n, we can find index by pos - 1, and we will run a for loop from last element to the index and then assign value arr[i+1] = arr[i]
// and similarly arr[idx] = x, and return(i+1).
// 3. In the main function we will take before insertion wherein we will be providing the dynamic sized array's values, and a for loop from 0 to n and cout arr[i] 
// and for After insertion we will be giving x and pos and put n = the function with it's arguments and run another for loop from 0 to n and cout arr[i].

#include<iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos){
    if(n==cap){
        return n;
    }

    int idx = pos - 1;

    for(int i=n-1; i>=idx; i--){
        arr[i+1] = arr[i];
    }

    arr[idx] = x;
    return(n+1);

}

int main(){
    int arr[6], cap=6, n=5;
    arr[0]=1, arr[1]=2, arr[2]=3, arr[3]=4, arr[4]=5, arr[5]=6;
    cout<<"Before Insertion"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

int x=0, pos=0;
n = insert(arr, n, x, cap, pos);
cout<<"After Insertion"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
  
