#include <iostream>
#include "../includes/DoublyLinkedList.hpp"
#include "../includes/DoubleNode.hpp"

int main() {
    DoublyLinkedList list;

    DoubleNode* node1 = new DoubleNode(10);
    DoubleNode* node2 = new DoubleNode(20);
    DoubleNode* node3 = new DoubleNode(30);
    DoubleNode* node4 = new DoubleNode(40);

    list.insertLast(node1);  
    list.insertLast(node2);  
    list.insertLast(node3);  
    list.insertLast(node4);  

    std::cout << "Initial List: ";
    list.printList(); 

    std::cout << "Deleting the first element..." << std::endl;
    list.deleteFirst();
    list.printList(); 

    std::cout << "Deleting the last element..." << std::endl;
    list.deleteLast();
    list.printList(); 

    std::cout << "Deleting the middle element (20)..." << std::endl;
    list.deleteMiddle(node2);
    list.printList(); 

    delete node2;
    delete node3;
    delete node4;

    return 0;
}
