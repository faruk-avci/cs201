#include "../include/Node.hpp"
#include "../include/LinkedList.hpp"

int main() {
    LinkedList L1;
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    L1.insertFirst(node1);
    L1.insertLast(node2);
    L1.insertLast(node3);

    LinkedList L2;
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);
    L2.insertFirst(node4);
    L2.insertLast(node5);

    LinkedList newList = newList.merge(L1, L2);

    newList.printList();

    return 0;
}
