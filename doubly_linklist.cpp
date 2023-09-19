#include"doubly(header).h"

int main()
{
Node* head;
Node* tail;


//create new node
Node* node=new Node();
//assign a value
node->value=100;
// a null to next
node->next=NULL;
// anull to previous
node->previous=NULL;

head=node;
tail=node;
node->next=NULL;
  


//second node

node=new Node();
node->value=200;
node->next=NULL;
//change
//  next node to previous's tail means (nullptr) [now previous is no longer nullptr]
node->previous=tail;

//hi you(node's tail) previosly only one element so you have null now you have  
// new next element so
tail->next=node;
tail=node;  


node=new Node();
node->value=700;
node->next=nullptr;

node->previous=tail;
tail->next=node;
tail=node;  

 printforward( head);
  cout<<endl;
  printbackward( tail);


 


return 0;    
}
