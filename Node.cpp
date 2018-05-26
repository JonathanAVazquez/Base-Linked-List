#include "Node.h"
#include <iostream>

Node::Node():data(0), next(NULL){}
Node::Node(int newData){
    data = newData;
    next = NULL;
}
Node::~Node(){}

void Node::setData(int tempData){
    this->data = tempData;
}
int Node::getData(){
    return data;
}
void Node::setNext(Node* const tempNode){
    this->next = tempNode; 
}
Node* Node::getNext(){
    return next;
}