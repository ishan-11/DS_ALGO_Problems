#include<iostream>
using namespace std;

class Node{
public :
int data;
Node* prev;
Node* next;

//constructor
Node(int d)
{
    this->data = d;
    this->prev = NULL;
    this->next = NULL;
}

//destructor
~Node()
{
    int val = this->data;
if(next != NULL)
{
    delete next;
    next =  NULL;
}
cout<<"memory free for node with data"<<val<<endl;
}

};

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

cout<<endl;

}

int getlength(Node* head)
{
    int len =0;
    Node* temp = head;

while(temp!=NULL)
{
    len++;
    temp=temp->next;
}
return len;
}

    void inserAtHead(Node* &tail,Node* &head , int d)
    {
        //empty list
        if(head==NULL) {
            Node* temp = new Node(d);
            head = temp;
            tail = temp;
        }

        else
        {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
        }
    }
void insertAtTail(Node* &tail,Node* &head, int d)
{

     //empty list
        if(tail==NULL) {
            Node* temp = new Node(d);
            tail = temp;
            head = temp;
        }
else{
     Node* temp = new Node(d);
     tail->next = temp;
     temp->prev = tail;
     tail =temp;
}
}

void insertAtPosition(Node* &tail , Node* &head , int pos , int d)
{
    if(pos == 1)
    {
        inserAtHead(tail,head,d);
        return;
    }
Node* temp = head;
int cnt = 1;

while(cnt < pos-1)
{
    temp=temp->next;
    cnt++;
}
//inserting at last
if(temp->next == NULL)
{
    insertAtTail(tail,head,d);
    return;
}
Node* insert = new Node(d);
insert->next = temp->next;
temp->next->prev = insert;
temp->next = insert;
insert->prev = temp;
}
void deleteNode(int position, Node* &head)
{
    //deleting at start node
if(position == 1){
    Node* temp = head;
    temp-> next -> prev = NULL;
    head = temp->next;
    temp-> next = NULL;
    delete temp;
}

else
{
Node* curr = head;
Node* prev = NULL;

int cnt = 1;
while(cnt < position)
{
    prev = curr;
    curr = curr->next;
    cnt++;
}

curr->next->prev = NULL;
head = curr->next;
curr->next = NULL;

delete curr;
}

}




int main()
{
  //  Node* node1 = new Node(10);


    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout<<getlength(head)<<endl;
inserAtHead(tail,head,123);

   print(head);

   insertAtTail(tail,head,121);
   print(head);
   
   insertAtPosition(tail,head,2,100);
   print(head);

   
   insertAtPosition(tail,head,4,580);
   print(head);

   deleteNode(1,head);
   print(head);

    return 0;
}