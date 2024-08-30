//
// Created by muyou on 2024/8/14.
//
#include "iostream"
#include "string"

using namespace std;

struct BinaryTree {
    char data;
    BinaryTree *Left;
    BinaryTree *Right;

    BinaryTree(char c) : data(c), Left(NULL), Right(NULL) {}
};

BinaryTree *PreBuild(int &position, string str) {
    char c = str[position++];
    if (c == '#') {
        return NULL;
    } else {
        BinaryTree *root = new BinaryTree(c);
        root->Left = PreBuild(position, str);
        root->Right = PreBuild(position, str);
        return root;
    }
}

void Inorder(BinaryTree *tree) {
    if (tree == NULL)
        return;
    else {
        Inorder(tree->Left);
        cout << tree->data;
        Inorder(tree->Right);
    }
}

int main() {
    string str;
    while(cin >> str){
        int position = 0;
        BinaryTree *tree = PreBuild(position, str);
        Inorder(tree);
        cout << endl;
    }
    return 0;
}