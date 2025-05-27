#include "LinkedList.h"
#include <iostream>
// Linked list class
LinkedList::LinkedList(): head(nullptr) {}

// Insert at the end
void LinkedList::append(int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next) {
        current = current->next;
    }
    current->next = newNode;
}

// Delete a node with a specific value
void LinkedList::deleteNode(int val) {
    if (!head) return;

    Node* current = head;
    if(head->data != val){
        while (current->next && current->next->data != val) {
            current = current->next;
        }
    }
    Node* currentDelete = current->next;
    current->next = nullptr;

    while (currentDelete) {
        Node* next = currentDelete->next;
        delete currentDelete;
        currentDelete = next;
    }
}

// Print the list
void LinkedList::printList() {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}