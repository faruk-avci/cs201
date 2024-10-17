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

    Node * foundNode1 = list.search(10);
    Node * foundNode2 = list.search(15);

    if(foundNode1){
        std::cout << "Found node with value: " << foundNode1->data << std::endl;
    }else {
        std::cout << "Value not found in the list." << std::endl;
    }   

    if(foundNode2){
        std::cout << "Found node with value: " << foundNode2->data << std::endl;
    }else {
        std::cout << "Value 15 not found in the list." << std::endl;
    }  

}