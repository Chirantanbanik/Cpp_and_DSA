// Kadane's Algorithm

// Subarray of {1,2,3} -> {1}, {2}, {3}, {1,2}, {2,3}, {1,2,3}

// Max sum subarray is 1+2+3=6

#include<iostream>
using namespace std;

int maxSub(int arr[], int n){
    int res = arr[0];
    for(int i=0; i<n; i++){
    int curr = 0;
    for(int j=i; j<n; j++){
    curr = curr + arr[i];
    res = max(res, curr);
    }
}

    return res;

}

int main(){
    int arr[] = {2,1,4,5,3}, n=5;
    cout<<maxSub(arr,n)<<endl;
}
