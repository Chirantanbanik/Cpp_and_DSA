#include <bits/stdc++.h>
using namespace std;

struct Node{       // struct due to mixed data types
    int data;      
    Node *next;    // pointer next whose type is = type of struct. Such structure is called self referential structures.
    Node(int x){   // constructor 
        data=x;
        next=NULL; // initialize next with NULL

    }
};

int main(){
    Node *head = new Node(20);      // line 15-17 we create the nodes & put the data into it.
    Node *temp1 = new Node(40);
    Node *temp2 = new Node(60);
    head->next=temp1;
    temp1->next=temp2;
    cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data<<endl;
}
