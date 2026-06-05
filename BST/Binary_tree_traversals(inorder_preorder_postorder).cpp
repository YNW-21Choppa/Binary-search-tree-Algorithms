#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void inorder(Node* root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void preorder(Node* root){
    if(root){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
	Node* root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(20);
	
	cout<<"Inorder: ";
	inorder(root);
	
	cout<<"\n Preorder: ";
	preorder(root);
	
	cout<<"\n Postorder: ";
	postorder(root);
	return 0;
}