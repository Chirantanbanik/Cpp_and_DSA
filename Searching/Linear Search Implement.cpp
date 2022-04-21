#include<iostream>
using namespace std;

int linear_Search(int arr[], int n, int key){
    for(int i=0; i<=n; i++){
        if(arr[i]==key){
            return i;
        }

    }
     return -1;
}
     int main(){
        int arr[] = {2,6,0,1,4,9,5};
        int n = sizeof(arr)/sizeof(int);
        int key;
        cin>>key;

        int index = linear_Search(arr, n, key);
        if(index != -1){
             cout<<key<<" is present at: "<<index<<endl;
         } else {
             cout<<key<<" is nor present"<<endl;
         }
     }
