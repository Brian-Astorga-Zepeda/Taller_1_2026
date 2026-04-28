
template <typename T>
struct Node {
    
    T data;

    Node<T>* next;
    Node<T>* prev;

    Node (T) : data(val), next(nullptr), prev(nullptr) {}
};