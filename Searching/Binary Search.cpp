#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int low = 0, high = n - 1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key) 
            high = mid - 1;
        else 
            low = mid + 1;
        }

        return -1;
    }

int main(){
    int arr[] = {2,4,6,8,10}, n=5, key=10;
    cout<<"The index of the element is "<<endl;
    cout<<binarySearch(arr, n, key);
}

