// Search in a unsorted Array.

// Algorithm:
// 1. Make a function linearSearch which has arr[], n and key.
// 2. Run a for loop, if arr[i] = key then return i which is the index of the element 
// otherwise return -1.
// 3. In the main function we give the array, n and the key.
// 4. now cout the linearSearch function.

#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {2,4,1,7,8}, n=5, key=2;
    cout<<"The element is present in index ";
    cout<< linearSearch(arr, n, key)<<endl;
}
