#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //contructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head,int d){

    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp ;

}

void insertAtTail(Node* &tail,int d){

    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void inserAtPosition(Node* &head,Node* tail, int Position , int d){
    
    //inset at starting
    if (Position == 1)
    {
       insertAtHead(head,d);
       return;
    }
    
    Node* temp = head;
    int cnt =1;
    while (cnt < Position - 1)
    {
       temp = temp -> next;
       cnt++;
    }

    //iserting at last position 
    if(temp -> next == NULL ){
        insertAtTail(tail,d);
        return;
    }

    //creating a node for d
    Node* nodeToinsert = new Node(d);
    nodeToinsert -> next = temp -> next;
    temp -> next = nodeToinsert;
    


}

void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
       cout << temp -> data <<" ";
       temp = temp -> next;
    }
    cout << endl;
    
}



int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    inserAtPosition(head,tail, 2,11);
    print(head);

    cout << "head " << head -> data << endl;
    //here :- when insert at last position tail is not updating
    cout << "tail " << tail -> data << endl;


    return 0;
}