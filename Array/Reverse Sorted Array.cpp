// Reverse an Sorted Array

#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int low = 0, high = n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main(){
    int arr[] = {2,3,4,5}, n = 4;
    cout<<"Before Reversing"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    
    reverse(arr, n);
    cout<<"After Reversing"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
    

