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



bool isSameTree(treeNode* root1,treeNode* root2){

    if(root1 == NULL || root2 == NULL){
        return (root1 == root2);
    }

    return (root1 -> data == root2 -> data)
           && isSameTree(root1 -> left,root2 -> left)
           && isSameTree(root1 -> right ,root2 -> right);

}

int main(){

    treeNode* root1 = new treeNode(1);
    root1 -> left = new treeNode(2);
    root1 -> right = new treeNode(3);
    root1 -> right -> left = new treeNode(4);
    root1 -> right -> right = new treeNode(5);

    treeNode* root2 = new treeNode(1);
    root2 -> left = new treeNode(2);
    root2 -> right = new treeNode(3);
    root2 -> right -> left = new treeNode(4);
    root2 -> right -> right = new treeNode(5);

    if(isSameTree(root1,root2)){
        cout<<"Both trees  are identical ";
    }else{
        cout<<"It is not identical ";
    }

    

    return 0;
}