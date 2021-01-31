#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int key;
    Node *left, *right;

    Node(int key)
    {
        this->key= key;
        this->left=this->right= nullptr;

    }
};

int Iden(Node* x, Node* y)
{
        if(x==nullptr && y==nullptr)
        return 1;

        return (x&&y) && (x->key==y->key) &&
                Iden(x->left,y->left) &&
                Iden(x->right, y->right);

}


int main()
{
    // construct first tree
    Node* x = nullptr;
 
    x = new Node(15);
    x->left = new Node(10);
    x->right = new Node(20);
    x->left->left = new Node(8);
    x->left->right = new Node(12);
    x->right->left = new Node(16);
    x->right->right = new Node(25);
 
    // construct second tree
    Node* y = nullptr;
 
    y = new Node(15);
    y->left = new Node(10);
    y->right = new Node(20);
    y->left->left = new Node(8);
    y->left->right = new Node(12);
    y->right->left = new Node(16);
    y->right->right = new Node(25);
 
    if (Iden(x, y))
        cout << "Given binary Trees are identical";
    else
        cout << "Given binary Trees are not identical";
 
    return 0;
}