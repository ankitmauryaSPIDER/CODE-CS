#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}
void bstinsert(Node *T,int x){
    Node *P=T;
    Node *Q=NULL;
    while(P!=NULL){
        Q=P;
        if(x<P->data){
            P=P->left;
        }else{
            P=P->right;
        }
    }
    if(Q==NULL){
        T=newNode(x);
    }
    else{
        if(x<Q->data){
            Q->left=newNode(x);
        }else{
            Q->right=newNode(x);
        }
    }
}
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Node* BstMin(Node *T){
    while(T != nullptr && T->left != nullptr){
        T = T->left;
    }
    return T;
}
Node* BstMax(Node *T){
    while(T != nullptr && T->right != nullptr){
        T = T->right;
    }
    return T;
}
int main() {
    Node* root = newNode(15);
    bstinsert(root, 100);
    bstinsert(root, 70);
    bstinsert(root, 20);
    bstinsert(root, 150);
    bstinsert(root, 120);

    bstinsert(root, 200);
    bstinsert(root,175);
    bstinsert(root, 160);
    bstinsert(root, 300);
    bstinsert(root, 10);
    bstinsert(root,15);
    bstinsert(root,60);
    bstinsert(root,45);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    Node* minNode = BstMin(root);
    if (minNode != nullptr) {
        cout << "Minimum value in BST: " << minNode->data << endl;
    }

    Node* maxNode = BstMax(root);
    if (maxNode != nullptr) {
        cout << "Maximum value in BST: " << maxNode->data << endl;
    }

    return 0;
}


