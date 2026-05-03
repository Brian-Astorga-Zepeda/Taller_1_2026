#include "Node.h"

template <typename T>
class Queue {
private:
    Node<T>* head;
    Node<T>* tail;
    int size;

public:
    Queue() : head(nullptr), tail(nullptr), size(0) {}

    ~Queue() { clear(); }

    void enqueue(T val) {
        Node<T>* n = new Node<T>(val);
        if (!tail) { head = tail = n; }
        else { tail->next = n; tail = n; }
        size++;
    }

    void dequeue() {
        if (!head) throw std::runtime_error("Cola vacía");
        Node<T>* tmp = head;
        head = head->next;
        if (!head) tail = nullptr;
        delete tmp;
        size--;
    }

    T& front() {
        if (!head) throw std::runtime_error("Cola vacía");
        return head->data;
    }

    T& back() {
        if (!tail) throw std::runtime_error("Cola vacía");
        return tail->data;
    }

    Node<T>* getHead() const { return head; }

    bool isEmpty() const { return head == nullptr; }
    int getSize() const { return size; }

    void clear() {
        while (head) dequeue();
    }
};
