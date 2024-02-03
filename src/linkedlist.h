#include <iostream>

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
        Node<T>& getNode(const int& index);

    public:
        LinkedList() : head(nullptr), size(0) {}

        void add(const T& value);
        void del(const int& index);
        T get(const int& index);

};

#include "linkedlist.tpp"

#endif