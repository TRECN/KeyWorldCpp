#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};
void Preorder(Node* node){
    if(node==NULL)
        return;
    cout<<node->data<<" ";
    Preorder(node->left);
    Preorder(node->right);
}

void Postorder(Node* node){
    if(node==NULL)
        return;
    Postorder(node->left);
    Postorder(node->right);
    cout<<node->data<<" ";
}

void Inorder(Node* node){
    if(node==NULL)
        return;
    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
}
int main(){
    Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    cout << "\nPreorder traversal of binary tree is \n";
    Preorder(root);
 
    cout << "\nInorder traversal of binary tree is \n";
    Inorder(root);
 
    cout << "\nPostorder traversal of binary tree is \n";
    Postorder(root);

}