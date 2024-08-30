//
// Created by muyou on 2024/8/14.
//
#include "iostream"

using namespace std;
struct SearchBinaryTree{
    long long data;
    SearchBinaryTree* left;
    SearchBinaryTree* right;
    SearchBinaryTree(long long d): data(d), left(NULL), right(NULL){}
};

SearchBinaryTree* BuildTree(int data, SearchBinaryTree* root, int father){
    if(root == NULL){
        cout << father << endl;
        root = new SearchBinaryTree(data);
        return root;
    }else{
        if(data > root->data){
            root->right = BuildTree(data, root->right, root->data);
        }else if(data < root->data){
            root->left = BuildTree(data, root->left, root->data);
        }
    }
    return root;
}

int main(){
    int n;
    cin >> n;
    SearchBinaryTree* root = NULL;
    for (int i = 0; i < n; ++i) {
        long long temp;
        cin >> temp;
        root = BuildTree(temp, root, -1);
    }
    return 0;
}