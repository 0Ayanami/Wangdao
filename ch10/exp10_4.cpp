//
// Created by muyou on 2024/8/14.
//
#include "iostream"

using namespace std;

struct SearchTree {
    int data;
    SearchTree *left;
    SearchTree *right;

    SearchTree(int d) : data(d), left(NULL), right(NULL) {}
};

SearchTree *Insert(int data, SearchTree *root) {
    if (root == NULL) {
        root = new SearchTree(data);
    } else if (data > root->data) {
        root->right = Insert(data, root->right);
    } else if (data < root->data) {
        root->left = Insert(data, root->left);
    }else if(data == root->data);
    return root;
}

void PreOrder(SearchTree *root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
    return;
}

void InOrder(SearchTree *root) {
    if (root == NULL) {
        return;
    }
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
    return;
}

void PostOrder(SearchTree *root) {
    if (root == NULL) {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
    return;
}

int main() {
    int n;
    cin >> n;
    SearchTree *tree = NULL;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        tree = Insert(temp, tree);
    }
    PreOrder(tree);
    cout << endl;
    InOrder(tree);
    cout << endl;
    PostOrder(tree);
    cout << endl;
    return 0;
}