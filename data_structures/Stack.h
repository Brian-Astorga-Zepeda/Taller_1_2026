#include "Node.h"

template <typename T>
class Stack {
private:
    Node<T>* top;
    int size;

public:
    Stack() : top(nullptr), size(0) {}

    ~Stack() { clear(); }

    void push(T val) {
        Node<T>* n = new Node<T>(val);
        n->next = top;
        top = n;
        size++;
    }

    void pop() {
        if (!top) throw std::runtime_error("Pila vacía");
        Node<T>* tmp = top;
        top = top->next;
        delete tmp;
        size--;
    }

    T& peek() {
        if (!top) throw std::runtime_error("Pila vacía");
        return top->data;
    }

    bool isEmpty() const { return top == nullptr; }
    int getSize() const { return size; }

    void clear() {
        while (top) pop();
    }
};