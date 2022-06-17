// Find second largest Element in an Array.

// Algorithm:
// 1. Create a varible max and initialize with 0.
// 2. Then run a for loop starting with 1 to n-2.
// 3. if current element > max.
// 4. store current element in max.
// 5. then return the max.
// 6. In the main function give the arr and size.
// 7. at the end call the function.


#include<iostream>
using namespace std;

int LargestElement2nd(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n-1; i++){
        if(arr[i]>max){
            max = arr[i];
            return max;
        }
    }

}

int main(){
    int arr[] = {3,7,1,9,4}, n = 5;
    cout<<LargestElement2nd(arr, n)<<endl;
}
