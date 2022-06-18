// Delete a element from an Array.

#include<iostream>
using namespace std;

int deleteEle(int arr[], int n, int x){
    int i = 0;
    for( i=0; i<n; i++){
        if(arr[i] == x)
            break;
        }
        if(i==n)
            return n;
        
        for(int j=i; j<n-1; j++){
            arr[j] = arr[j+1];
        }
          return(n-1);
    }



int main(){
    int arr[] = {3,1,9,0,6,7,10}, n = 7, x = 1;
    cout<<"Before Deletion"<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<endl;

    n = deleteEle(arr, n, x);
    cout<<"After deletion"<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<endl;
    }
    
