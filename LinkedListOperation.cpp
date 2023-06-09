#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  
  //constructor
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
  ~Node(){
    int value = this->data;
    if(this->next!= NULL)
    {
      delete next;
      this->next = NULL;
    }
    cout<<"Memory is free for node with value:"<<data<<endl;
  }
};
void insertAtHead(Node* &head,int d)
{
  Node* temp = new Node(d);
  temp->next = head;
  head = temp;
}
void insertAtTail(Node* &tail,int d)
{
  Node* temp = new Node(d);
  tail->next = temp;
  tail = temp;
  
}
void deleteNode(Node* &head,int position)
{
  if(position == 1)
  {
     Node* temp = head;
     head = head->next;
     temp->next = NULL;
     delete temp;
  }
  else{
    Node* prev = NULL;
    Node* curr = head;
    int count = 1;
    while(count<position)
    {
      prev= curr;
      curr = curr->next;
      count++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}
void insertAtPosition(Node* &head,Node* &tail,int position,int data)
{
  
  if(position == 1)
  {
    insertAtHead(head,data);
    return ;
  }
  Node* temp = head;
  
  int count = 1;
  while(count < position-1)
  {
    temp= temp->next;
    count++;
  }
  if(temp->next == NULL)
  {
    insertAtTail(tail,data);
    return;
  }
  Node* nodeToInsert = new Node(data);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}
void print(Node* &head)
{
  if(head == NULL)
  {
    cout<<"the list is empty"<<endl;
    return;
  }
  Node* temp = head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
int main() 
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,20);
    insertAtHead(head,30);
    //print(head);
    insertAtTail(tail,5);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;
    print(head);
    insertAtPosition(head,tail,2,25);
    print(head);
    insertAtPosition(head,tail,1,32);
    print(head);
    
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    deleteNode(head,5);
    print(head);
    return 0;
}
