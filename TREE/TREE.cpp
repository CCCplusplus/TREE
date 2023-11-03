#include <iostream>
#include "Node.hpp"
#include "BinaryTree.hpp"

int main()
{
    /*Node* root = new Node(1);
    Node* subtree1 = new Node(3);

    root->AddChild(new Node(2));

    subtree1->AddChild(new Node(5));
    subtree1->AddChild(new Node(6));

    root->AddChild(subtree1);
    root->AddChild(new Node(4));

    std::cout << std::endl;

    subtree1->DisplayTree();
    std::cout << std::endl;

    root->DisplayTree();
    std::cout << std::endl;

    if (root->Search(5) == true) 
    {
        std::cout << "Node Found" << std::endl;
    }
    else 
        std::cout << "Node Not Found" << std::endl;

    return 0;*/

    BinaryTree<int>  b;

    b.Push(20);
    b.Push(10);
    b.Push(12);
    b.Push(27);
    b.Push(9);
    b.Push(50);
    b.Push(33);
    b.Push(6);

    b.Remove(27);

    if (b.Search(20) == true)
    {
        std::cout << "node found" << std::endl;
    }
    else
        std::cout << "node not found" << std::endl;

    if (b.Search(14) == true)
    {
        std::cout << "node found" << std::endl;
    }
    else
        std::cout << "node not found" << std::endl;

    std::cout << std::endl;

    std::cout << "pre order: ";
    b.DisplayPerOrder();
    std::cout << std::endl;

    std::cout << "post order: ";
    b.DisplayPostOrder();
    std::cout << std::endl;

    std::cout << "in order: ";
    b.DisplayInOrder();
    std::cout << std::endl;
}
