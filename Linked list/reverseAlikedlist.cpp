#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
//costructor
Node(int data)
{
    this->data = data;
    this->next = NULL;
}

};

void insertAtHead(Node* &head , int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}

void print(Node* &head)
{
     Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void reverse(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}


int main()
{
   int k;
   cin>>k;
   Node* head = NULL;
   Node*temp = head;

   for(int i = 0 ; i<k ; i++)
   {
       int data;
       cin>>data;
       if(head == NULL)
       {
           head = temp = new Node(data);
       }
       else
       {
           temp->next = new Node(data);
           temp = temp->next;
       }
   }

   Node* result = reverse(head);
   print(result);

   return 0;
}

