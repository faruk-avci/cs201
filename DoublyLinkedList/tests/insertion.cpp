#include "../includes/DoublyLinkedList.hpp"

int main() {
    DoublyLinkedList list;

    // Insert at the beginning
    DoubleNode* node1 = new DoubleNode(10);
    list.insertFirst(node1);
    list.printList(); // Output: 10

    // Insert at the end
    DoubleNode* node2 = new DoubleNode(20);
    list.insertLast(node2);
    list.printList(); // Output: 10 20

    // Insert at the beginning again
    DoubleNode* node3 = new DoubleNode(5);
    list.insertFirst(node3);
    list.printList(); // Output: 5 10 20

    // Insert in the middle (after node1 which contains 10)
    DoubleNode* node4 = new DoubleNode(15);
    list.insertMiddle(node4, node1); // Insert after node1 (10)
    list.printList(); // Output: 5 10 15 20

    // Clean up
    return 0;
}
