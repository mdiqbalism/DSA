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

// Daimeter of binary tree

int height(treeNode* root,int& diameter){
    if(!root){
        return 0;
    }

    int lefth = height(root -> left ,diameter);
    int righth = height(root -> right ,diameter);

    diameter = max(diameter, lefth + righth);
    return 1 + max(lefth,righth);
}

int diameterOfBinaryTree(treeNode* root){
    int diameter = 0;
    height(root,diameter);
    return diameter;
}


int main(){

    treeNode* root = new treeNode(1);
    root -> left = new treeNode(2);
    root -> right = new treeNode(3);
    root -> right -> left = new treeNode(4);
    root -> right -> left -> left = new treeNode(5);
    root -> right -> left -> left -> left = new treeNode(9);
    root -> right -> right = new treeNode(6);
    root -> right -> right -> right = new treeNode(7);
    root -> right -> right -> right -> right = new treeNode(8);

    cout << "Diameter of Binary tree " << diameterOfBinaryTree(root);

    return 0;
}