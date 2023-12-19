#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor 
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;

    }

    ~Node(){
        int value = this -> data;
        if (next != NULL)
        {
           delete next;
           next = NULL;
        }
        cout << "Memory free for node with data " << value << endl;    
    }
};

void print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
      cout << temp -> data << " ";
      temp = temp -> next;
    }
    cout << endl;
    
}

//gives length of linked list 
int getLength(Node* head){
    int length  = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        length++;
        temp = temp -> next;
    }
    return length ;
     
}

void insertAtHead(Node* &tail,Node* &head,int d){

    //empty list
    if (head  == NULL)
    {
       Node* temp = new Node(d);
       head = temp;
       tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
    
}

void insertAtTail(Node* &tail,Node* &head,int d){
    if (tail == NULL)
    {
       Node* temp = new Node(d);
       tail = temp;
       head = temp;

    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail ;
        tail = temp;
    }
    
    
}

void insertAtPosition(Node* &head,Node* &tail, int position, int d){  
    
    //inset at starting
    if (position == 1)
    {
       insertAtHead(tail,head,d);
       return;
    }
    
    Node* temp = head;
    int cnt =1;
    while (cnt < position - 1)
    {
       temp = temp -> next;
       cnt++;
    }

    //iserting at last position 
    if(temp -> next == NULL ){
        insertAtTail(tail,head,d);
        return;
    }

    //creating a node for d
    Node* nodeToinsert = new Node(d);
    nodeToinsert -> next = temp -> next;
    temp -> next -> prev = nodeToinsert;
    temp -> next = nodeToinsert;
    nodeToinsert -> prev = temp;
}

//Deleting Function 
void deletionNode(int Position,Node* &head){

    //deleting first or start node
    if (Position == 1)
    {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        // Memory free start node 
        temp -> next = NULL;
        delete temp;
 
    }else{

        // deleting any middle node or last node.
        Node* current = head ;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < Position)
        {
           prev = current;
           current = current -> next;
           cnt++;
        }
        
        current -> prev = NULL;
        prev -> next = current -> next;
        current -> next = NULL;

        delete current;

    }
    
}



int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    cout << getLength(head)<< endl;

    insertAtHead(tail,head,11);
    print(head);

    insertAtHead(tail,head,9);
    print(head);

    insertAtTail(tail,head, 22);
    print(head);

    insertAtPosition(head ,tail,5,55);
    print(head);

    deletionNode(3,head);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    return 0;
}