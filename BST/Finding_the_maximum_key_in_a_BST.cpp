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

int findMax(Node* root) {
    while (root->right != NULL)
        root = root->right;

    return root->data;
}

int main() {
    Node* root = new Node(50);
    root->right = new Node(80);
    root->right->right = new Node(100);

    cout << "Maximum Key = " << findMax(root);

    return 0;
}