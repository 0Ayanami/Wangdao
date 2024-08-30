//
// Created by muyou on 2024/8/14.
//
#include "iostream"
#include "string"

using namespace std;

struct BinaryTree {
    char data;
    BinaryTree *left;
    BinaryTree *right;

    BinaryTree(char c) : data(c), left(NULL), right(NULL) {}
};

BinaryTree *BuildTree(string str, string str2) {
    if (str.size() == 0)
        return NULL;
    char c = str[0];
    BinaryTree *root = new BinaryTree(c);
    int position = str2.find(c);
    root->left = BuildTree(str.substr(1, position), str2.substr(0, position));
    root->right = BuildTree(str.substr(position + 1), str2.substr(position + 1));
    return root;
}

void PostOrder(BinaryTree* root){
    if(root == NULL)
        return ;
    else{
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data;
    }
}
int main() {
    string str, str2;
    while(cin >> str >> str2){
        BinaryTree* root = BuildTree(str, str2);
        PostOrder(root);
        cout << endl;
    }
    return 0;
}