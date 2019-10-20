

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        Node *h1=root;
        Node *h2=root;
        vector <int >A1;
        vector <int >A2;
        while(v1!=h1->data)
        {
            if(v1 <h1->data)
{
    A1.push_back(h1->data);
    h1=h1->left;
}
else {
    A1.push_back(h1->data);
    h1=h1->right;
}
        }
        A1.push_back(v1);
        

      
        // ------------------------
        while (v2 != h2->data) {
          if (v2 < h2->data) {
            A2.push_back(h2->data);
            h2 = h2->left;
          } else {
            A2.push_back(h2->data);
            h2 = h2->right;
          }
        }
        A2.push_back(v2);

       
      //  for (auto j = A2.rbegin(); i != A2.rend(); i++)

          for (auto i = A1.rbegin(); i != A1.rend(); i++) {
            for (auto j = A2.rbegin(); j!= A2.rend(); j++)
              if(*i == *j)
              { 
                
                  Node *r=new Node(*i);
                 return r;
              }
          }
        
       return NULL;
    }


