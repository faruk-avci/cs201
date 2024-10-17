#include <iostream>
#include "../include/Node.hpp"
#include "../include/LinkedList.hpp"

int main(){
    LinkedList list;

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);

    list.insertFirst(node1);
    list.insertLast(node4);
    list.insertMiddle(node2, node1); 
    list.insertMiddle(node3, node2); 

    Node * second_el = list.nodeIth(2);
    Node * doesnt_exist = list.nodeIth(9);

    if (second_el) {
        std::cout << "Second element value: " << second_el->data << std::endl;
    } else {
        std::cout << "The second element does not exist." << std::endl;
    }

    if (doesnt_exist) {
        std::cout << "Node at index 9 value: " << doesnt_exist->data << std::endl;
    } else {
        std::cout << "The node at index 9 does not exist." << std::endl;
    }

    return 0;

}