#include "../includes/DoublyLinkedList.hpp"
#include <iostream>


DoublyLinkedList::DoublyLinkedList(){
    head = nullptr;
    tail = nullptr;

}

DoublyLinkedList::~DoublyLinkedList(){
    DoubleNode* tmp = head;
    while (tmp != nullptr){
        DoubleNode* next = tmp->next;
        delete tmp;
        tmp = next;
    }
}

void DoublyLinkedList::printList() {
    DoubleNode* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Insertion
void DoublyLinkedList::insertFirst(DoubleNode *newNode){
    if(tail == nullptr){
        tail = newNode;
    }
    else{
        head->previous = newNode;
    }
    newNode->next = head;
    head = newNode;
}

void DoublyLinkedList::insertLast(DoubleNode *newNode){
    if(head == nullptr){
        head = newNode;
    }
    else{
        tail->next = newNode;
    }
    newNode->previous = tail;
    tail = newNode;
}

void DoublyLinkedList::insertMiddle(DoubleNode * newNode, DoubleNode * previous){
    newNode->next = previous->next; 
    newNode->previous = previous;
    previous->next->previous = newNode;
    previous->next = newNode;
}

// Deletion
void DoublyLinkedList::deleteFirst(){
    DoubleNode * tmp = head;
    head = head->next;
    if(head == nullptr){
        tail = nullptr;
    }
    else{
        head->previous = nullptr;
    }
    delete tmp;
}

void DoublyLinkedList::deleteLast(){
    DoubleNode * tmp = tail;
    tail = tail->previous;
    if(tail == nullptr){
        head = nullptr;
    }
    else{
        tail->next = nullptr;
    }
    delete tmp;
}

void DoublyLinkedList::deleteMiddle(DoubleNode * s){
    s->next->previous = s->previous;
    s->previous->next = s->next;
    delete s;
}