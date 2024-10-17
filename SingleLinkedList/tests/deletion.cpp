#include <iostream>
#include "../include/Node.hpp"
#include "../include/LinkedList.hpp"

int main() {
    LinkedList list;

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);

    list.insertFirst(node1); 
    list.insertLast(node2); 
    list.insertLast(node3);  
    list.insertLast(node4);  

    std::cout << "Initial list: ";
    list.printList(); 


    std::cout << "Deleting first element..." << std::endl;
    list.deleteFirst();
    list.printList(); 

    std::cout << "Deleting last element..." << std::endl;
    list.deleteLast();
    list.printList(); 

    Node* middleNode = list.search(20); 
    if (middleNode) {
        std::cout << "Deleting middle element (20)..." << std::endl;
        list.deleteMiddle(middleNode);
        list.printList();
    } else {
        std::cout << "Node with value 20 not found." << std::endl;
    }

    return 0;
}
