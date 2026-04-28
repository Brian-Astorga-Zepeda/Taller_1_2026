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
    bool empty() const { return size == 0; }

    T& front() { 
        return head->data;
    }
   
    T& back() {
        return tail->data;
    }
   
    void clear() {
        while (head) popFront();
    }
   
    void pushBack(T val) {
        Node<T>* n = new Node<T>(val);
        if (!tail) { head = tail = n; }
        else { tail->next = n; n->prev = tail; tail = n; }
        size++;
    }

    void pushFront(T val) {
        Node<T>* n = new Node<T>(val);
        if (!head) { head = tail = n; }
        else { n->next = head; head->prev = n; head = n; }
        size++;
    }
    
    void popFront() {
        if (!head) return;
        Node<T>* tmp = head;
        head = head->next;
        if (head) head->prev = nullptr;
        else tail = nullptr;
        delete tmp;
        size--;
    }

    void popBack() {
        if (!tail) return;
        Node<T>* tmp = tail;
        tail = tail->prev;
        if (tail) tail->next = nullptr;
        else head = nullptr;
        delete tmp;
        size--;
    }
};