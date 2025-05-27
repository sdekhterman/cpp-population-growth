#include <iostream>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Node structure
struct Node {
    int data;     // store an integer value assioated with node
    Node* next;   // point to next node in the chain
    // this is a constructor, i.e. instructions for start up that tell the class how what to do when a new instance of this class is created 
    // the class has an input arguement of val [Node(int val)] which is assigned in data an initializer list [: data(val), next(nullptr)] 
    // with the body of the constructor otherwise being empty [ {} ]
    Node(int val) : data(val), next(nullptr) {} 
};

// Linked list class
class LinkedList {
public:
    // constructor
    LinkedList();

    // Insert at the end
    void append(int val);

    // Insert at the beginning
    void prepend(int val);

    // Delete a node with a specific value
    void deleteNode(int val);

    // Print the list
    void printList();
    
    // destructor
    ~LinkedList();
};

#endif 