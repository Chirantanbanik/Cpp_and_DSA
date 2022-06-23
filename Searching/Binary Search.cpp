#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int low = 0, high = n-1;
    int mid = (low+high)/2;
        if(arr[mid]==key){
            return key;
        }  else if(arr[mid]<key) {
            low = mid + 1;
        }  else 
           high = mid - 1;
    }

    int main(){
        int arr[] = {4,1,9,3,10}, n=5, key=1;
        cout<<"The index of the element is ";
        cout<<binarySearch(arr,n, key)<<endl;
}
