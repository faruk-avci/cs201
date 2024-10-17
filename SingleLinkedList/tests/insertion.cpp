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
    list.insertLast(node4);
    list.insertMiddle(node2, node1); 
    list.insertMiddle(node3, node2); 

    Node* current = list.head;

    while(current != nullptr){
        std::cout << current->data << " -> ";
        current = current->next;    
    }
    std::cout << "nullptr" << std::endl; // End of the list

    
}
