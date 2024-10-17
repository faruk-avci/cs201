#include "../include/LinkedList.hpp"
#include <iostream>
LinkedList::LinkedList() {
    head = nullptr; 
    tail = nullptr;
}

LinkedList::~LinkedList() {
    Node* tmp = head; 
    while (tmp != nullptr) {
        Node* next = tmp->next;
        delete tmp; 
        tmp = next; 
    }
}
void LinkedList::printList() {
    Node* tmp = head;
    while (tmp != nullptr) {
        std::cout << tmp->data << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

// Insertion
void LinkedList::insertFirst(Node* newNode) {
    if (tail == nullptr) 
        tail = newNode; 

    newNode->next = head; 
    head = newNode;       
}

void LinkedList::insertLast(Node* newNode) {
    if (head == nullptr) { 
        head = newNode;    
        tail = newNode;    
    } else {
        tail->next = newNode; 
    }
    tail = newNode; 
}

void LinkedList::insertMiddle(Node* newNode, Node* previous) {
    newNode->next = previous->next; 
    previous->next = newNode;        
}

// Searching
Node * LinkedList::search(int value){
    Node * tmp;
    tmp = head;
    while( tmp != nullptr){
        if(tmp->data == value){
            return tmp;
        }
        tmp = tmp->next;
    }
    return nullptr;
}

// nodeIth
Node * LinkedList::nodeIth(int i){
    Node * tmp = head;
    int j = 0;
    while(tmp !=nullptr && j<i){
        j++;
        tmp = tmp->next;
    }
    return tmp;
}

// Deletion
void LinkedList::deleteFirst(){
    Node * tmp = head;
    head = head->next;
    if(head == nullptr){
        tail = nullptr;
    }
    delete tmp;
}

void LinkedList::deleteLast(){
    Node * tmp, *previous, *deleted;
    deleted = tail; 
    tmp = head;
    previous = nullptr;

    while(tmp != tail){
        previous = tmp;
        tmp = tmp->next;
    }

    if(previous == nullptr){
        head = nullptr;
    }
    else{
        previous->next = nullptr;
    }
    tail = previous;
    delete deleted;
}

void LinkedList::deleteMiddle(Node * s){
    Node *tmp, *previous;
    tmp = head;
    previous = nullptr;
    while(tmp != s){
        previous = tmp;
        tmp = tmp->next;
    }
    previous->next = s->next;
    delete s;
}

// Node Count
int LinkedList::nodeCount(){
    int count = 0;
    Node * tmp = head;

    while(tmp != nullptr){
        tmp = tmp->next;
        count++;
    }
    return count;
}

// Merging
LinkedList LinkedList::merge(const LinkedList &l1, const LinkedList &l2) {
    LinkedList newList;

    if (l1.head == nullptr) {
        return l2;
    }
    if (l2.head == nullptr) {
        return l1; 
    }

    newList.head = l1.head; 
    newList.tail = l1.tail; 

    if (newList.tail != nullptr) {
        newList.tail->next = l2.head; 
    }

    newList.tail = l2.tail;

    return newList;
}
