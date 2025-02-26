//  Binarytrees.cpp
//  Author: Sarah Manzanares

#include <iostream>
#include <string>
using namespace std;

class BinaryTree
{
private:
    struct Node {
        string data;
        Node* leftChild;
        Node* rightChild;

        Node(string data) {
            this->data = data;
            this->leftChild = nullptr;
            this->rightChild = nullptr;
        }
    };

    Node* parent;
    void destroy(Node* node)
    {
        if (node)
        {
            destroy(node->leftChild);
            destroy(node->rightChild);
            delete node;
        }
    }

public:
    BinaryTree() { parent = nullptr; }
    ~BinaryTree() { destroy(parent); }
    void insert(string data)
    {
        Node* newNode = new Node(data);
        if (!parent)
        {
            parent = newNode;
            return;
        }
        Node* currentNode = parent;
        while (currentNode)
        {
            if (data < currentNode->data)
            {
                if (currentNode->leftChild)
                {
                    currentNode = currentNode->leftChild;
                }
                else
                {
                    currentNode->leftChild = newNode;
                    return;
                }
            }
            else
            {
                if (currentNode->rightChild)
                {
                    currentNode = currentNode->rightChild;
                }
                else
                {
                    currentNode->rightChild = newNode;
                    return;
                }
            }
        }
    }
    bool search(string data)
    {
        Node* currentNode = parent;
        while (currentNode)
        {
            if (data == currentNode->data)
            {
                return true;
            }
            else if (data < currentNode->data)
            {
                currentNode = currentNode->leftChild;
            }
            else
            {
                currentNode = currentNode->rightChild;
            }
        }
        return false;
    }
    void printInorderTraversal(Node* node)
    {
        if (node)
        {
            printInorderTraversal(node->leftChild);
            cout << node->data << " ";
            printInorderTraversal(node->rightChild);
        }
    }
    void printPreorderTraversal(Node* node)
    {
        if (node)
        {
            cout << node->data << " ";
            printPreorderTraversal(node->leftChild);
            printPreorderTraversal(node->rightChild);
        }
    }
    void printPostorderTraversal(Node* node) {
        if (node) {
            printPostorderTraversal(node->leftChild);
            printPostorderTraversal(node->rightChild);
            cout << node->data << " ";
        }
    }
    void printInorderTraversal() { printInorderTraversal(parent); }
    void printPreorderTraversal() { printPreorderTraversal(parent); }
    void printPostorderTraversal() { printPostorderTraversal(parent); }
};

int main()
{
    BinaryTree tree;
    tree.insert("dog");
    tree.insert("cat");
    tree.insert("elephant");
    tree.insert("giraffe");
    tree.insert("lion");
    tree.insert("alligator");
    tree.insert("eagle");
    tree.insert("tiger");
    cout << "Inorder traversal: ";
    tree.printInorderTraversal();
    cout << endl;
    cout << "Preorder traversal: ";
    tree.printPreorderTraversal();
    cout << endl;
    cout << "Postorder traversal: ";
    tree.printPostorderTraversal();
    cout << endl;
    cout << "Search for 'cat': " << tree.search("cat") << endl;
    cout << "Search for 'bird': " << tree.search("bird") << endl;
    return 0;
}