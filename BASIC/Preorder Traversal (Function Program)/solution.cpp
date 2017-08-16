/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

/* Prints preorder traversal of Binary Tree.  In output
   all keys should be separated by space. For example
  preorder traversal of below tree should be "10 20 30"
         10
       /      \ 
    20       30 */

void preorder(struct Node* root)
{ 
    if(root == NULL)
        return;
    
    cout<< root->data << " ";
    
       //first travel left
    preorder(root->left);
       //right 
    preorder(root->right);
}
    
    
  
