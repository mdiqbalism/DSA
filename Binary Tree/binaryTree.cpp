#include<iostream>
#include<vector>
#include<queue>
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

vector<vector<int>> levelOrderTraversal(node* root){
    vector<vector<int>> ans;
    if(root == NULL)return ans;

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            node* treeNode = q.front();
            q.pop();
            if(treeNode -> left != NULL) q.push(treeNode -> left);
            if(treeNode -> right != NULL) q.push(treeNode -> right);
            level.push_back(treeNode -> data);
        }
        ans.push_back(level);
    }
    return ans;
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

    cout<<endl;
    cout<<"Level Order traversal"<<endl;
    
    vector<vector<int>> val = levelOrderTraversal(root);

    for(int i=0;i<val.size();i++){
        for(int j=0;j<val[i].size();j++){
            cout<<val[i][j] <<" ";
        }
    }

    return 0;
}