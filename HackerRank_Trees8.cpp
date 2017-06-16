/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{    
    node *temp = root;
    
    while(!s.empty()) {  
        
        if(s[0] == '0') {
            temp = temp->left;
        } else if(s[0] == '1') {
            temp = temp->right;
        }
        
        if(!temp->left && !temp->right) {
            cout << temp->data;
            temp = root;
        }

        s = s.substr(1, string::npos);
    }
    
}
