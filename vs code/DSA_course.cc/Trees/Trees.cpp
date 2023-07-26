/*
->the top node is called head or root node.
->the node having no child is called leaf node.
->the connection between two node is called parent child relationship.
->nodes having same parent node are called siblings.
->node which are directly or indirectly connected to the node are called ancestors
  of that node.
*/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode{
  public:
  T data;
  vector<TreeNode<T>*> children;
  public:
  TreeNode(T data){
    this->data  = data;
  }
};

void printTree(TreeNode<int>* root){
  if(root == NULL){
    return; 
    /*this an edge case in which if the root is empty and we are printing 
    NULL->data than it will give segmentation error */
    }
  cout<<root->data<<": ";
  for(int i = 0; i<root->children.size(); i++){
    cout<<root->children.at(i)->data<<" ";
  }
  cout<<endl;
  //if the size of root's children is zero than loop will not run so it act as base case 
  for(int i = 0; i<root->children.size(); i++){
    printTree(root->children.at(i));
  }
}

void printTreeLW(TreeNode<int>* root){
  if(root == NULL){
    return;
  }
  queue<TreeNode<int>*> q;
  q.push(root);
  while(!q.empty()){
    TreeNode<int>* f = q.front();
    q.pop();
    cout<<f->data<<": ";
    for(int i = 0; i<f->children.size(); i++){
      cout<<f->children.at(i)->data<<" ";
      q.push(f->children.at(i));
    }
    cout<<endl;
  }
}

TreeNode<int>* TakeInput(){
  int rootdata,n;
  cout<<"Enter the data "<<endl;
  cin>>rootdata;
  TreeNode<int>* root = new TreeNode<int>(rootdata);
  cout<<"\nEnter the number of children of "<<rootdata<<endl;
  cin>>n;
  for(int i = 0; i<n; i++){
    root->children.push_back(TakeInput());
  }
  return root;
}

/*Take Input Level wise*/
TreeNode<int>* TakeInputLW(){
  queue<TreeNode<int>*> q;
  int root_data;
  cout<<"\nEnter the root data"<<endl;
  cin>>root_data;
  TreeNode<int>* root = new TreeNode<int>(root_data);
  q.push(root);
  while(!q.empty()){
    TreeNode<int>* f = q.front();
    q.pop();
    int n;
    cout<<"\nEnter the number  of children of "<<f->data<<endl;
    cin>>n;
    for(int i = 0; i<n; i++){
      int child_data;
      cout<<"\nEnter the "<<i+1<<"th child of "<<f->data<<endl;
      cin>>child_data;
      TreeNode<int>* child = new TreeNode<int>(child_data);
      q.push(child);
      f->children.push_back(child);
    }
  }
  return root;
}

int countNode(TreeNode<int>* root){
  if(root == NULL)
    return 0;
  else{
  int count = 1;
  for(int i = 0; i<root->children.size(); i++){
    count = count + countNode(root->children.at(i));
  }
  return count;
  }
}

int Hieght(TreeNode<int>* root){
  if(root == NULL)
    return 0;
  else{
  int mx = 0;
  for(int i = 0; i<root->children.size(); i++){
    int child_hieght = Hieght(root->children.at(i));
    if(child_hieght>mx){
      mx = child_hieght;
    }
  }
  return mx + 1;
  }
}

void printAt_levelK(TreeNode<int>* root, int k){
  if(root == NULL){
    return;
  }
  else{
    if(k == 0){
      cout<<root->data<<endl;
      return;
    }
    for(int i = 0; i<root->children.size(); i++){
      printAt_levelK(root->children.at(i) , k-1);
    }

    }
  }

int count_leafNodes(TreeNode<int>* root){
  int count = 0;
  if(root == NULL){
    return 0;
  }
  else if(root->children.size() == 0){
    return 1;
  }
  for(int i = 0; i<root->children.size(); i++){
    if(root->children.at(i)->children.empty()){
      count += 1;
    }
    else{
      count = count + count_leafNodes(root->children.at(i));
    }
  }
  return count;
}

void preOrder(TreeNode<int>* root){
  if(root == NULL){
    return;
  }
  cout<<root->data<<" ";
  for(int i = 0; i<root->children.size(); i++){
    preOrder(root->children.at(i));
  }
  cout<<endl;
}

void postOrder(TreeNode<int>* root){
  if(root == NULL){
    return;
  }
  for(int i = 0; i<root->children.size(); i++){
    postOrder(root->children.at(i));
  }
  cout<<root->data<<" ";
  cout<<endl;
}

void deleteTree(TreeNode<int>* root){
  if(root == NULL){
    return;
  }
  for(int i = 0; i<root->children.size(); i++){
    deleteTree(root->children.at(i));
  }
  delete root;
}

int main(){
  /*TreeNode<int>* root = new TreeNode<int>(1);
  TreeNode<int>* n1 = new TreeNode<int>(2);
  TreeNode<int>* n2 = new TreeNode<int>(3);
  root->children.push_back(n1);
  root->children.push_back(n2);
  printTree(root);*/
  TreeNode<int>* root = TakeInputLW();
  printTreeLW(root);
  cout<<"\nNumber of node are: "<<countNode(root);
  cout<<"\nHieght of the tree is: "<<Hieght(root);
  cout<<"\nNumber of leaf nodes are: "<<count_leafNodes(root);
  return 0;
}