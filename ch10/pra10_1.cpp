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
    } else if (data < root->data) {
        root->left = Insert(data, root->left);
    } else if (data > root->data) {
        root->right = Insert(data, root->right);
    }
    return root;
}

bool is_same1(SearchTree *root1, SearchTree *root2) {
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 != NULL && root2 == NULL || root1 == NULL && root2 != NULL || root1->data != root2->data) {
        return false;
    }
    return is_same1(root1->left, root2->left) && is_same1(root1->right, root2->right);
}

int main() {
    int n;
    cin >> n;
    string str;
    SearchTree *root = NULL;
    cin >> str;
    for (int i = 0; i < str.size(); ++i) {
        root = Insert(str[i] - '0', root);
    }
    while (n--) {
        string str2;
        cin >> str2;
        if(str2 == "0")
            break;
        SearchTree *tree = NULL;
        for (int i = 0; i < str2.size(); ++i) {
            tree = Insert(str2[i] - '0', tree);
        }
        if (is_same1(tree, root)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}