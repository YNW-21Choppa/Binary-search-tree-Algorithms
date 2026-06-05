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

bool search(Node* root, int key) {
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);

    int key = 70;

    if (search(root, key))
        cout << "Key Found";
    else
        cout << "Key Not Found";

    return 0;
}