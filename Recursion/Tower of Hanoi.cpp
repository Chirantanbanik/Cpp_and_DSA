// Tower of Hanoi



#include<iostream>
using namespace std;


void ToH(int n, char A, char B, char C){
    if(n==1){                        // last step except n=1
    cout<<"Move 1 from "<< A << " to " << C << endl;
    return;
    }
    ToH(n-1, A, C, B);             // We first move this from A to B
    cout<<"Move "<< n << " from " << A << " to " << C <<endl;   // second we move bottom most disk from A to C
    ToH(n-1, B, A, C);           // then the first disk from B to C
}

int main(){
    ToH(3, 'A', 'B', 'C');
}
