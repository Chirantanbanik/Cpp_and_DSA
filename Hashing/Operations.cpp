// Time Complexity: O(1) in worst case.

#include<iostream>
using namespace std;

struct DAT{
    int table[100] = {0};

    void insert(int i){
        table[i] = 1;
    }

    void del(int i){
        table[i] = 0;
    }

    int search(int i){
        return table[i];
    }

};

int main(){
    DAT dat;
    dat.insert(10);
    dat.insert(30);
    dat.insert(50);
    cout<<dat.search(50)<<endl;
    cout<<dat.search(30)<<endl;
    dat.del(10);
    cout<<dat.search(10);
}
