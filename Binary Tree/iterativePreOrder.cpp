#include<bits/stdc++.h>
using namespace std;

class treeNode{
    public:
    int data;
    treeNode* left;
    treeNode* right;

    treeNode(int val){
        this -> data = val;
        this -> left = NULL;
        this -> right = NULL;  
    }
};

vector<int> IterativePreOrder(treeNode* root){
    vector<int>preOrder;
    if(root == NULL)return preOrder;

    stack<treeNode*>s;
    s.push(root);
    while(!s.empty()){
        root = s.top();
        s.pop();
        preOrder.push_back(root -> data);
        if(root -> right != NULL){
            s.push(root -> right);
        }
        if(root -> left != NULL){
            s.push(root -> left);
        }
    }
    return preOrder;
}

vector<int> IterativeInrOder(treeNode* root){
    stack<treeNode*> st;
    treeNode* node = root;
    vector<int> inorder;
    while(true){
        if (node != NULL)
        {
            st.push(node);
            node = node -> left;
           
        }else{
            if(st.empty() == true) break;
            node = st.top();
            st.pop();
            inorder.push_back(node -> data);
            node = node -> right;
           
        }
        
    }
    return inorder;
}

// postOrder using two stack 
vector<int> iterativepostOrder(treeNode* root){
    vector<int>postorder;
    if(root == NULL) return postorder;
    stack<treeNode*>st1,st2;
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root -> left != NULL){
            st1.push(root -> left);
        }
        if(root -> right != NULL){
            st1.push(root->right);
        }
    }
    while(!st2.empty()){
        postorder.push_back(st2.top() -> data);
        st2.pop();
    }
    return postorder;
    
}

//Maximum depth of the binary tree 

int MaxDepth(treeNode* root){
    
    if(root == NULL) return 0;
    int left = MaxDepth(root -> left);
    int right = MaxDepth(root -> right);

    return 1 + max(left,right);
}

// create for balanced binary tree [height(left) - height(right) <= 1]
/*
    return height when it is true means check for balanced binary tree
    then return height and return -1 when it is false 

*/

int checkBalancebt(treeNode* root){
      
    if(root == NULL){
         return 0;
    }

    int left = checkBalancebt(root -> left);
    int right = checkBalancebt(root -> right);

    if(abs(left - right) > 1){
        return -1;
    }

    return max(left,right) + 1;

}

// Diameter of a Binary Tree 



int main(){
    treeNode* root = new treeNode(1);
    root -> left = new treeNode(2);
    root -> left-> left = new treeNode(3);
    root -> left -> right= new treeNode(4);
    root -> left -> right -> left = new treeNode(5);
    root -> left -> right -> right = new treeNode(6);
    root -> right = new treeNode(7);
    root -> right -> left = new treeNode(19);
    root -> right -> right = new treeNode(50);

    cout<<"Iterative PreOrder"<<endl;
    vector<int> val =  IterativePreOrder(root);

    for(int i=0;i<val.size();i++){
            cout<<val[i] <<" ";
    }

    cout<<endl;  
    cout<<"Iterative inorder"<<endl;
    vector<int> inorder = IterativeInrOder(root);
    for(int i = 0; i < inorder.size();i++){
        cout<< inorder[i]<<" ";
    }

    cout<<endl;
    cout<<"Iterative postorder"<<endl;
    vector<int> postorder = iterativepostOrder(root);
    for(int i=0;i<postorder.size();i++){
        cout<<postorder[i]<<" ";
    }

    cout<<endl;
    cout<<"Maximum Depth of Binary tree  " <<MaxDepth(root)<<endl;; 
    
    int checkBal = checkBalancebt(root);

    if(checkBal < 0){

        cout<<"Tree is not Balance";

    }else{

        cout<<"Tree is Balance";

    }

    return 0;
}