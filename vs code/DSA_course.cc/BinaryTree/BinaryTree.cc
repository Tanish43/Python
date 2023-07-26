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
void printTree(BTNode<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<": ";
   if(root->left!=NULL){
    cout<<" L"<<root->left->data;
   }

   if(root->right!=NULL){
    cout<<" R"<<root->right->data;
   }
   cout<<endl;
    printTree(root->left);
    printTree(root->right);
}
BTNode<int>* TakeInput(){
    int rootdata;
    cout<<"\nEnter the data: "<<endl;
    cin>>rootdata;
    if(rootdata == -1){
        return NULL;
    }
    BTNode<int>* root = new BTNode<int>(rootdata);
    BTNode<int>* leftchild = TakeInput();
    BTNode<int>* rightchild = TakeInput();
    root->left = leftchild;
    root->right = rightchild;

    return root;
}
BTNode<int>* TakeInputLW(){
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
    return root;
}
void printLW(BTNode<int>* root){
    queue<BTNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BTNode<int>* f = q.front();
        q.pop();
        cout<<f->data<<" ";
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}
int count_node(BTNode<int>* root){
    int count = 0;
    if(root == NULL){
        return 0;
    }
    count += count_node(root->left);
    count += count_node(root->right);
    return count + 1;
} 
//Inorder Traversal - LDR
void print_inorder(BTNode<int>* root){
    if(root == NULL){
        return;
    }
    print_inorder(root->left);
    cout<<"\n"<<root->data;
    print_inorder(root->right);
}
//Preorder Traversal - DLR
void print_preorder(BTNode<int>* root){
    if(root == NULL){
        return;
    }
    cout<<"\n"<<root->data;
    print_inorder(root->left);
    print_inorder(root->right);
}
//Postorder Traversal  - LRD
void print_postorder(BTNode<int>* root){
    if(root == NULL){
        return;
    }
    print_inorder(root->left);
    print_inorder(root->right);
    cout<<"\n"<<root->data;
}
int max_depth(BTNode<int>* root){
    int depth = 0;
    if(root == NULL){
        return depth;
    }
    if(max_depth(root->left) > max_depth(root->right)){
        depth = max_depth(root->left)+1;
    }
    else{
        depth = max_depth(root->right)+1;
    }

    return depth;
}
bool symmetric_cmp(BTNode<int>* leftTree,BTNode<int>* rightTree ){
    if(leftTree == NULL && rightTree != NULL) return false;
    if(leftTree != NULL && rightTree == NULL) return false;
    if(leftTree == NULL && rightTree == NULL) return true;
    if(leftTree->data != rightTree->data) return false;
    
    return symmetric_cmp(rightTree->left,leftTree->right) && symmetric_cmp(rightTree->right,leftTree->left);
    
}
bool symmetricBT(BTNode<int>* root){
    if(root == NULL){
        return true;
    }
   return symmetric_cmp(root->left,root->right);
}
bool FindNode(BTNode<int>* root, int key){
    if(root == NULL) return false;
    if(root->data == key ){
        return true;    }
    return FindNode(root->left,key) || FindNode(root->right, key);
}
int MinValue(BTNode<int>* root){
    int Min = INT32_MAX;
    if(root == NULL) return Min;
    int ans = root->data;
    int leftmin = MinValue(root->left);
    int rightmin = MinValue(root->right);

    return min(ans, min(leftmin,rightmin));
}
int MaxValue(BTNode<int>* root){
    int Max = INT32_MIN;
    if(root == NULL) return Max;
    int ans = root->data;
    int leftmin = MaxValue(root->left);
    int rightmin = MaxValue(root->right);

    return max(ans, max(leftmin,rightmin));
}
int count_LeafNode(BTNode<int>* root){
    if(root == NULL) return 0;
    int ans = 0;
    ans += count_node(root->left);
    ans += count_node(root->right);
    if(root->left == NULL){
        ans++;
    }
    if(root->right == NULL){
        ans++;
    }
    return ans; 
}
vector<int>* intput_vector(){
    vector<int>* v;
    int data;
    cout<<"\nEnter the data";
    cin>>data;
    while(data != -1){
        v->push_back(data);
        cin>>data;
    }
    return v;
}
BTNode<int>* Build_BT(vector<int>* inorder, vector<int>* preorder, int inS, int inE,int preS, int preE);
BTNode<int>* pre_inorder(){
    cout<<"\nEnter the data in preorder";
    vector<int>* preorder = intput_vector();
    cout<<"\nEnter the data in inorder";
    vector<int>* inorder = intput_vector();
    BTNode<int>* root = Build_BT(inorder, preorder,0,preorder->size()-1,0, inorder->size()-1);
    return root;

}
BTNode<int>* Build_BT(vector<int>* inOrder, vector<int>* preOrder, int inS, int inE, int preS, int preE){
        if(inS > inE){
            return NULL;
        }
        int rootData = preOrder->at(preS);
        int rootIndex = -1;
        for(int i=inS;i<=inE;i++){
            if(inOrder->at(i) == rootData){
                rootIndex = i;
                break;
            }
        }
        int leftInS = inS;
        int leftInE = rootIndex - 1;
        int leftPreS = preS + 1;
        int leftPreE = leftPreS + leftInE - leftInS;
        
        int rightInS = rootIndex + 1;
        int rightInE = inE;
        int rightPreS = leftPreE + 1;
        int rightPreE = preE;
        
        BTNode<int>* root = new BTNode<int>(rootData);
        root->left = Build_BT(inOrder,preOrder,leftInS,leftInE,leftPreS,leftPreE);
        root->right = Build_BT(inOrder,preOrder,rightInS,rightInE,rightPreS,rightPreE);
        return root;  
    }

int main(){
    BTNode<int>* root1 = pre_inorder();
    printLW(root1);
    delete root1;

    return 0;
}
/* BTNode<int>* root = new BTNode<int>(1);
    BTNode<int>* n1 = new BTNode<int>(2);
    BTNode<int>* n2 = new BTNode<int>(3);

    root->left = n1;
    root->right = n2;*/
   /* BTNode<int>* root = TakeInputLW();
    printLW(root);
    
    print_inorder(root);
    cout<<endl;
    print_preorder(root);
    cout<<endl;
    print_postorder(root);
    cout<<endl;
    cout<<"\nNo. of nodes of Binary tree is: "<<count_node(root);
    cout<<"\nDeoth of Binary tree is: "<<max_depth(root);
    if(symmetricBT(root)){
        cout<<"\nBinary tree is symmetric";
    }
    else{
        cout<<"\nBinary Tree is not symmetric";
    }
    if(FindNode(root, 5)){
        cout<<"\nKey found";
    }
    else{
        cout<<"\nKey not found";
    }
    
    cout<<"\nMinimum node value is: "<<MinValue(root);
    cout<<"\nMaximum node value is: "<<MaxValue(root);
    cout<<"\nNo. of leaf node is: "<<count_LeafNode(root);*/