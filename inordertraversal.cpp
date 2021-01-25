//inorder traversal  for a binary tree using
//1.Recursion 
//2.Iteration
//3.Morris method
#include<bits/stdc++.h>
using namespace std;
//defining tree 
 //make  structure of tree 
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
//build Tree
TreeNode* BuildTree(){
    int node_val;
    cin>>node_val;
     if (node_val==-1){
         return NULL;
     }
     TreeNode*root= new TreeNode(node_val);
     root->left=BuildTree();
     root->right=BuildTree(); 
     return root;
}

//Print function for generating  output for the every function 
void print (TreeNode*root){
    //if Root in NULL then skip it otherwise 
    if(!root){
        return;
    }
    cout<<root->val<<" ";
    print (root->left);
    print (root->right);

}
//Recrsive method without stack ()
void recurssion(){}
//Iterative method with stack usage 
void iteration(){}
//morris approach without using stack and recurssion
//establishing relationship between
void morris(){}

int main()
{  
    //make a tree of node values 
    TreeNode*root=BuildTree();
    print(root);

    

return 0;

}