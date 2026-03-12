#include <iostream>
#include "class\class.h"
using namespace std;

int main()
{
    BinaryTree tree;

    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);

    tree.print();

    return 0;
}