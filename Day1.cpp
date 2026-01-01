#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;

  Node(int val){
    data = val;
    left = right = NULL;
  }
};

static int index = -1;
Node* buildTree(int arr[]){
  index++;
  if( arr[index] == -1) return NULL;

  Node* root  = new Node(arr[index]);
  root->left  = buildTree(arr);
  root->right = buildTree(arr);

  return root;
}

void postOrder(Node* root){
 if(root == NULL) return;
  cout << root->data <<" ";
  postOrder(root->left);
  postOrder(root->right);
}

void preOrder(Node* root){
  if(root == NULL)return;
  preOrder(root->left);
  preOrder(root->right);
  cout << root->data <<" ";
}

void inOrder(Node* root){
  if(root == NULL)return;
  inOrder(root->left);
  cout << root->data <<" ";
  inOrder(root->right);
  
}

int main(){
    int arr[] = {1, 2, -1, -1, 3, -1, -1};

    Node* root = buildTree(arr);

    cout << "Preorder: ";
    preOrder(root);
    cout << endl;

    cout << "Inorder: ";
    inOrder(root);
    cout << endl;

    cout << "Postorder: ";
    postOrder(root);
    cout << endl;
  
}
