#include <iostream>
using namespace std;

class BinaryTree
{
private:

    struct Node
    {
        int value;
        Node* left;
        Node* right;

        Node(int v)
        {
            value = v;
            left = nullptr;
            right = nullptr;
        }
    };

    Node* root;

public:

    // конструктор
    BinaryTree()
    {
        root = nullptr;
    }

    // вставка елемента
    void insert(int value)
    {
        root = insertRec(root, value);
    }

    // вивід (inorder)
    void print()
    {
        printRec(root);
        cout << endl;
    }

private:

    Node* insertRec(Node* node, int value)
    {
        if (node == nullptr)
        {
            return new Node(value);
        }

        if (value < node->value)
        {
            node->left = insertRec(node->left, value);
        }
        else
        {
            node->right = insertRec(node->right, value);
        }

        return node;
    }

    void printRec(Node* node)
    {
        if (node == nullptr)
            return;

        printRec(node->left);
        cout << node->value << " ";
        printRec(node->right);
    }
};