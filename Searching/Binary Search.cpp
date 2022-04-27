#include<iostream>
using namespace std;

int Binary_Search(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        } else 
        if(arr[mid]>key){
            e = mid - 1;
        } else {
         s = mid + 1;
       } 
    }
         return -1;
     }
        
            
        int main(){
        int arr[] = {1,3,5,7,9,11};
        int n = sizeof(arr)/sizeof(int);

        int key;
        cin>>key;

        int index = Binary_Search(arr, n ,key);
        if(index==-1){
            cout<<key<<" is not present";
        } else {
            cout<<key<<" is present at index"<<index;
        }
        return 0;
      }


    
