/* Binary Search Tree is binary tree with sorted nodes where left sub tree is smaller
than the node and right sub tree is larger than the node

For every node 'n'(properties):-
1)Evreything in n's left sub-tree is smaller than n's data.
2)Evreything in n's right sub-tree is larger than n's data.
*/
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class BTNode{
    public:
    T data;
    BTNode* left;
    BTNode* right;

    BTNode(int data){
        this->data = data;
        left = NULL;
        right = NULL;

    }
    ~BTNode(){
        delete left;
        delete right;
    }
};

class BST{
  BTNode<int>* root;

  bool search_helper(BTNode<int>* root, int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    else if(root->data < key){
        return search_helper(root->right,key);
    }
    else{
        return search_helper(root->left,key);
    }
    return false; 
  }

  public: 
  BST(){
    int data;
    cout<<"\nenter the data and press -1 to terminate: "<<endl;
    cin>> data;
    BTNode<int>* root = new BTNode<int>(data);
    queue<BTNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BTNode<int>* front = q.front();
        q.pop();
        cout<<"\nEnter the left child of "<<front->data<<endl;
        cin>>data;
        if(data != -1){
            BTNode<int>* node = new BTNode<int>(data);
            front->left = node;
            q.push(node);
        }
        cout<<"\nEnter the right child of "<<front->data<<endl;
        cin>>data;
        if(data != -1){
            BTNode<int>* node = new BTNode<int>(data);
            front->right = node;
            q.push(node);
        }

    }
}
  bool search(int key){
    return search_helper(root,key);
  }
  
};

int main(){
    BST B;
    if(B.search(5)){
        cout<<"\nkey found ";
    }
    else{
        cout<<"\nkey not found";
    }

    return 0;
}
