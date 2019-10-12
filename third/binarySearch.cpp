

 /* Node is defined as :
 class Node 
    int data;
    Node left;
    Node right;
    
    */

	public static Node insert(Node root,int data) {
     if(root==null)
     {
         return new Node(data);
     }
     else if(data<=root.data)
     {
         Node cur=null;
         cur=insert(root.left,data);
         root.left=cur;
     }
       else if(data>=root.data)
     {
         Node cur=null;
         cur=insert(root.right,data);
         root.right=cur;
     }
    	return root;
    }


