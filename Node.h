#ifndef _NODE_H_
#define _NODE_H_

class Node{
    private:
        int data;
        Node* next;
    public:
        Node();
        Node(int);
        ~Node();
        void setData(int);
        int getData();
        void setNext(Node* const);
        Node* getNext();
};
#endif