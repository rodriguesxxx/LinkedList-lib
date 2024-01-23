#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<typename T>
class Node {
    public:
        T data;
        Node* next;

        Node(const T& value) : data(value), next(nullptr) {}
};

template<typename T>
class LinkedList {
    private:
        Node<T>* head;
        int size;
    
    public:
        LinkedList() : head(nullptr), size(0) {}

        void add(const T& value);
        void del(const int index);
        T get(const int index);

};

#endif