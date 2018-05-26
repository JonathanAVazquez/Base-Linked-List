#include "LinkedList.h"
#include <iostream>


LinkedList::LinkedList():head(NULL){
    //TODO
}
LinkedList::~LinkedList(){
    Node* destList = head;
    while(destList != NULL){
        head = head->getNext();
        delete destList;
        destList = head;
    }
    head = NULL;
}

void LinkedList::addFirst(int value){
    Node* newNode = new Node(value);
    newNode->setNext(NULL);

    if(isEmpty()){
        head = newNode;
    }else{
        newNode->setNext(head);
        head = newNode;
    }
    newNode = NULL;
}

int LinkedList::getNumOfNodes(Node *&temp){
    Node* traverse = temp;
    int count = 0;
    while(traverse != NULL){
        ++count;
        traverse = traverse->getNext();
    }
    return count;
}

void LinkedList::addLast(int value){
    Node* newNode = new Node(value);
    newNode->setNext(NULL);
    
    if(isEmpty()){
        head = newNode;
    }else{
        Node *traverse = head;
        while(traverse->getNext() != NULL)
            traverse = traverse->getNext();

        traverse->setNext(newNode);
    }
    newNode = NULL;
}

void LinkedList::displayAll(){
    Node *traverse = head;
    while(traverse != NULL){
        std::cout << "Data: " << traverse->getData() << " | ";
        traverse = traverse->getNext();
    }
    traverse = NULL;
    std::cout << std::endl;
}

void LinkedList::deleteFirst(){
    if(isEmpty())
        std::cout << "Can't delete whats not there..." << std::endl;
    else{
        Node* delFirst = head;
        head = head->getNext();
        delete delFirst;
    }
}

void LinkedList::deleteNth(int data){
    //must traverse list to find a match
    //once match is acquired we must delete it
    if(isEmpty())
        std::cout << "Can't delete whats not there..." << std::endl;
    else{
        Node* curr = head;
        Node* prev = NULL;
        while(curr->getData() != data && curr != NULL){
            prev = curr;
            curr = curr->getNext();
        }
        prev->setNext(curr->getNext());
        delete curr;
    }
}

void LinkedList::deleteLast(){
    if(isEmpty())
        std::cout << "Can't delete whats not there..." << std::endl;
    else{ 
        Node* prev = NULL;
        Node* delLast = head;
        while(delLast->getNext() != NULL){
            prev = delLast;
            delLast = delLast->getNext();
        }
        prev->setNext(NULL); 
        delete delLast;
    }
}

//quicker way of testing for empty list
bool LinkedList::isEmpty(){
    return (head == NULL);
}