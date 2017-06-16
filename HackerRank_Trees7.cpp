/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/

node *createNode(node *root, int value) {
    root = new node();
    root->data = value;
    root->left = NULL;
    root->right = NULL;
    
    return root;
}

node *insert(node * root, int value) {

   if(!root) {
       root = createNode(root, value);
   } else if(root->data > value) {
       root->left = insert(root->left, value);
   } else{
       root->right = insert(root->right, value);
   }
    
   return root;
}
