
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
int getHeight(node *root) {
    
    if(!root) {
        return 0;
    }
    
    int lHeight = getHeight(root->left);
    int rHeight = getHeight(root->right);
    
    return (lHeight > rHeight) ? lHeight+1 : rHeight+1;    
}

void printLevel(node *root, int level) {
    
    if(!root){
        return;
    }

    if(1 == level) {
        cout << root->data << " ";
    }
    
    printLevel(root->left, level-1);
    printLevel(root->right, level-1);    
    
}

void levelOrder(node * root) {
    
    if(!root){
        return;
    }
    
    int h = getHeight(root);
    
    for(int i = 1; i<=h ; i++) {
        printLevel(root, i);
    }  
}
