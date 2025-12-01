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

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void createtree(Node *p) {
    int choice, data;
    cout << "Does left child of " << p->data << " exist? (1,0): ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter data for left child: ";
        cin >> data;
        p->left = newNode(data);
        createtree(p->left);
    }

    cout << "Does right child of " << p->data << " exist? (1 for Yes, 0 for No): ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter data for right child: ";
        cin >> data;
        p->right = newNode(data);
        createtree(p->right);
    }
}




int main() {
    int data;
    cout << "Enter data for p node: ";
    cin >> data;
    Node* p = newNode(data);
    createtree(p);
    cout << "Inorder traversal: ";
    inorder(p);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(p);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(p);
    cout << endl;

    return 0;
}