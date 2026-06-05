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

int findMin(Node* root) {
    while (root->left != NULL)
        root = root->left;

    return root->data;
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(20);
    root->left->left = new Node(10);

    cout << "Minimum Key = " << findMin(root);

    return 0;
}