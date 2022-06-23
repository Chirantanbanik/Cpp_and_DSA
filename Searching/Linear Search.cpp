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
