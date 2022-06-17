// Find Largest Element in an Array.

// Algorithm:
// 1. Create a varible max and initialize with 0.
// 2. Then run a for loop starting with 1 to n-1.
// 3. if current element > max.
// 4. store current element in max.
// 5. then return the max.
// 6. In the main function give the arr and size.
// 7. at the end call the function.

#include<iostream>
using namespace std;

int getLargest(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]>max)
            max = arr[i];
            return max;
    }

int main(){
    int arr[] = {2,1,3,6,5,9}, n = 6;
    cout<<getLargest(arr, n)<<endl;
}
