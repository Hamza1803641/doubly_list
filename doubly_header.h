#include<iostream>
using namespace std;

class Node
{

public:

int value;

Node* next;
Node* previous;


};
void printforward(Node* head)
{
    Node* traverser=head;

    while (traverser!=nullptr)
    {
        cout<<traverser->value<<" ";
        traverser=traverser->next;
    }
     
}


void printbackward(Node* tail)
{
    Node* traverser=tail;

    while (traverser!=nullptr)
    {
        cout<<traverser->value<<" ";
        traverser=traverser->previous;
    }
     
}




