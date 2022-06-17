// Delete a element from an Array.

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
