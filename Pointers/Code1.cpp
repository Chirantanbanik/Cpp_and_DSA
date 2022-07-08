#include <bits/stdc++.h>
using namespace std;

int main(){
    int x=10;
    int *p=&x;
 
    cout<<x<<endl;  // prints 10
    cout<<&x<<endl; // prints address of x
    cout<<p<<endl;  // p is assigned to &x so p is also address if x
    cout<<&p<<endl; // p's own address will be printed
    cout<<*p<<endl; // p is pointing on a so p=10
}
