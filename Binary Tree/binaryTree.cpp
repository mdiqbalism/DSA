#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        this -> data = val;
        this -> left = NULL;
        this -> right = NULL;
    }

};

void preOrder(node* root){
    if(root ==  NULL){
        return;
    }

    cout << root -> data <<" ";

    preOrder(root -> left);
    preOrder(root ->right);

}

void InOrder(node* root){
    if(root ==  NULL){
        return;
    }



    InOrder(root -> left);
    cout << root -> data <<" ";
    InOrder(root ->right);

}

void PostOrder(node* root){
    if(root ==  NULL){
        return;
    }



    PostOrder(root -> left);
    PostOrder(root ->right);

    cout << root -> data <<" ";

}

int main(){

    node* root = new node(1);

    root -> left = new node(2);
    root -> right = new node(3);

    root -> left -> left = new node(4);
    root -> left -> right = new node(5);

    root -> right -> left = new node(6);
    root -> right -> right = new node(7);
    
    cout <<" preOrder traversal"<<endl;
    preOrder(root);
    cout <<endl;
    cout <<"InOrder traversal"<<endl;
    InOrder(root);
    cout <<endl;
    cout <<"PostOrder traversal"<<endl;
    PostOrder(root);

    return 0;
}