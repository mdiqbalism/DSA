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

int maxPathDown(treeNode* root,int& maxi){
    if(root == NULL) return 0;
    int left = max(0,maxPathDown(root -> left,maxi));
    int right = max(0, maxPathDown(root -> right,maxi));

    maxi = max(maxi , left + right + root -> data);

    return max(left ,right) + root -> data;
}

int maximumPathSum(treeNode* root ){
    int maxi = INT16_MIN;
    maxPathDown(root,maxi);
    return maxi;
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

    cout <<"Maximum path sum of binary treen " << maximumPathSum(root);

    
    return 0;
}