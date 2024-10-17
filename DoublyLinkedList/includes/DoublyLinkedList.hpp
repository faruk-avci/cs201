#ifndef D_LINKED_LIST
#define D_LINKED_LIST

#include "DoubleNode.hpp"

class DoublyLinkedList{
    public:
        DoubleNode * head;
        DoubleNode * tail;
        
        DoublyLinkedList();
        ~DoublyLinkedList();
        void printList();

        // Insertion
        void insertFirst(DoubleNode *newNode);
        void insertLast(DoubleNode * newNode);
        void insertMiddle(DoubleNode * newNode, DoubleNode * previous);

        // Deletion
        void deleteFirst();
        void deleteLast();
        void deleteMiddle(DoubleNode * s);  
};

#endif