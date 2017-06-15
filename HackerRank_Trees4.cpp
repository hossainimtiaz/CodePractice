
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};
*/

int height(Node* root) {
  // Write your code here.
  if(NULL == root) {
      return -1;
  }

  int lHeight = height(root->left);
  int rHeight = height(root->right);

  return (lHeight > rHeight)? lHeight + 1 : rHeight + 1;

}
