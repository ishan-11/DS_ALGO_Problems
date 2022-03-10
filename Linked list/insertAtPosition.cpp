#include<iostream>
using namespace std;

class Node
{
    public: 
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


void insertAtTail(Node* &tail, int d)
{
Node* temp = new Node(d);
tail->next = temp;
tail = temp;
}

void insertAtPositon(Node* &tail,Node* &head,int position,int d)
{

if(position == 1)
{
    insertAtHead(head,d);
    return;
}

Node* temp = head;
int cnt = 1;
while(cnt < position - 1)
{
    temp = temp->next;
    cnt++;
}
if(temp->next == NULL)
{
    insertAtTail(tail,d);
    return;
}
    Node* insertToPos = new Node(d);
    insertToPos->next = temp->next;
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

int main()
{
    Node* node1 = new Node(10);
    
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtTail(tail,25);
    print(head);

    insertAtPositon(head,3,26);
    print(head);


    return 0;
}