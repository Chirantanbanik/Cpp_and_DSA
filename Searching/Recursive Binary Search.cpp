#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x){
    if(low>high)
    return -1;

    int mid = (low+high)/2;
    if(arr[mid]==x)
    return mid;
    else if(arr[mid]>x)
    return binarySearch(arr, low, mid-1, x);
    else 
    return binarySearch(arr, mid+1, high, x);

}

int main(){
    int arr[] = {2,4,6,8,10}, n = 5, x = 4;
    cout<<binarySearch(arr, 0, n-1, x);
}
