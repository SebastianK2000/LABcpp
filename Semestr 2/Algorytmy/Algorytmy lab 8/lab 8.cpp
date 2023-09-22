#include <iostream>

using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
};

Node* createNode (int key) {
    Node* newNode = new Node();
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insertNode (Node* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }

    if (key < root->key) {
        root->left = insertNode (root->left, key);
    } else if (key > root->key) {
        root->right = insertNode(root-> right, key);
    }

    return root;
}

Node* searchKey(Node* root, int key) {
    if (root == NULL || root->key == key) {
        return root;
    }

    if (key < root->key) {
        return searchKey(root->left, key);
    } else {
        return searchKey(root->right, key);
    }
}

void inorderTraversal (Node* root) {
    if (root != NULL) {
        inorderTraversal (root->left);

        cout << root->key << " ";

        inorderTraversal(root->right);
    }
}

int main() {
    Node* root = NULL;

    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    int keyToSearch = 40;
    Node* result = searchKey(root, keyToSearch);
    if (result != NULL) {
        cout << "Klucz " << keyToSearch << " zostal znaleziony!" << endl;
    } else {
        cout << "Klucz " << keyToSearch << " nie zostal znaleziony." << endl;
    }

    cout << "Przechodzenie przez drzewo (inorder) : ";
    inorderTraversal(root);
    cout << endl;

    return 0;

}




