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

    //destructor 
    ~Node(){
        int value = this -> data;
        //momery free
        if (this -> next != NULL)
        {
           delete next;
           this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
        
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

//Deleting Function 
void deletionNode(int Position,Node* &head){

    //deleting first or start node
    if (Position == 1)
    {
        Node* temp = head;
        head = head -> next;
        // Memory free start node 
        temp -> next = NULL;
        delete temp;
 
    }else{

        // deleting any middle node or last node.
        Node* current = head ;
        Node* previous = NULL;

        int cnt = 1;
        while (cnt < Position)
        {
           previous = current;
           current = current -> next;
           cnt++;
        }
        
        previous -> next = current -> next;
        current -> next = NULL;
        delete current;

    }
    
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

    // cout << "head " << head -> data << endl;
    // //here :- when insert at last position tail is not updating
    // cout << "tail " << tail -> data << endl;

    deletionNode(2,head);
    print(head);
    
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;


    return 0;
}