/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void printLeftChild(node *root) {
    if(!root) {
        return;
    }
    
    printLeftChild(root->left);
    cout << root-> data << " ";
}


void printRightChild(node *root) {
    if(!root) {
        return;
    }
   
    cout << root-> data << " ";
    printRightChild(root->right);
}

void topView(node * root) {
        
    if(!root) {
        return;
    }

    printLeftChild(root);
    printRightChild(root->right);
}
