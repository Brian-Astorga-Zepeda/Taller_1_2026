#include "Node.h"

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    int size;

public:
    LinkedList() : head(nullptr), tail(nullptr), size(0) {}

    ~LinkedList() { clear(); }

    Node<T>* getHead() const { return head;}
    Node<T>* getTail() const { return tail;}
    int getSize() const { return size;}


    T& front() { 
        return head->data;
    }
   
    T& back() {
        return tail->data;
    }
   
   
   
    void pushBack(T val) {

    }

    void pushFront(T val) {

    }
    
    void popFront() {

    }

    void popBack() {

    }


    
};