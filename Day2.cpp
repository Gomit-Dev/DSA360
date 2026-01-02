#include<queue>
#include<iostream>
using namespace std;

struct Node {
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
    if(arr[index] == -1) return NULL;
    
    Node* root = new Node(arr[index]);
    root->left = buildTree(arr);
    root->right = buildTree(arr);
  
  return root;
}

void BFS(Node* root){
    
    if(root == NULL)return ;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        Node* cur = q.front();
        q.pop();
        
        cout << cur->data << " ";
        
        if(cur->left)q.push(cur->left);
        if(cur->right)q.push(cur->right);
    }
}

int main(){
    int arr[] = {1, 2, -1, -1, 3, -1, -1};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node* root = buildTree(arr);

    cout << "Level order: ";
    BFS(root);
    cout << endl;
}
