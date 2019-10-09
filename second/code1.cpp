//This is a program to find height of a binary tree
class Node {
    int data;
    Node* left;
    Node* right;
};
    int height(Node* root) {
        static int c=0;
        static int max=0;
        if(root==NULL){
            if(c>max)
                max=c-1;
            c--;
            return max;
        }
        c++;
        height(root->left);
        c++;
        height(root->right);
        c--;
        return max;
            
    }

