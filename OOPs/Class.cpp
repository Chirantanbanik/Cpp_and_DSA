// Write a Class for a Rectangle

#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }
    
};

int main(){
    Rectangle r;
    r.length = 10;
    r.breadth = 20;
    cout<<r.area()<<endl;
}
