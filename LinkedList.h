#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include "Node.h"

class LinkedList{
    private:
        Node *head;
    public:
        LinkedList();
        ~LinkedList();

        void addFirst(int);
        int getNumOfNodes(Node*&);
        void addLast(int);
        void displayAll();

        void search(int);

        void deleteFirst();
        void deleteNth(int);
        void deleteLast();
        bool isEmpty();      
};
#endif