#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "Node.hpp"

class LinkedList {
    public:
        Node* head;
        Node* tail; 

        LinkedList();         
        ~LinkedList();     
        void printList();    
        
        // Insertion
        void insertFirst(Node* newNode);
        void insertLast(Node* newNode); 
        void insertMiddle(Node* newNode, Node* previous); 
        
        // Search
        Node * search(int value);

        // Getting i'th
        Node * nodeIth(int i);

        // Deletion
        void deleteFirst();
        void deleteLast();
        void deleteMiddle(Node * s);

        // Node Count
        int nodeCount();

        // Merging
        LinkedList merge(const LinkedList &l1, const LinkedList &l2);
};

#endif
