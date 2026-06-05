#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* mergeTrees(Node* t1, Node* t2) {
    if (!t1) return t2;
    if (!t2) return t1;

    Node* root = new Node(t1->data + t2->data);
    root->left = mergeTrees(t1->left, t2->left);
    root->right = mergeTrees(t1->right, t2->right);

    return root;
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* t1 = new Node(1);
    t1->left = new Node(3);
    t1->right = new Node(2);

    Node* t2 = new Node(2);
    t2->left = new Node(1);
    t2->right = new Node(3);

    Node* merged = mergeTrees(t1, t2);

    cout << "Merged Tree (Inorder): ";
    inorder(merged);

    return 0;
}