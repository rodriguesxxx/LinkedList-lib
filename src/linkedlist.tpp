template<typename T>
Node<T>& LinkedList<T>::getNode(const int& index) {
    if(index >= size || index < 0) {
        throw std::out_of_range("Index is out of range");
    }
    
    Node<T>* current = head;

    for(int i = 0; i < index; ++i) {
        current = current->next;
    }
    
    return *current;
}

template<typename T>
T LinkedList<T>::get(const int& index) {
    return getNode(index).data;
}

template<typename T>
void LinkedList<T>::add(const T& value) {
    Node<T>* newNode = new Node<T>(value);
    newNode->next = head;
    head = newNode;
    size++;
}

template<typename T>
void LinkedList<T>::del(const int& index) {
    if(index >= size || index < 0) {
        throw std::out_of_range("Index is out of range");
    }

    Node<T>* current = head;
    Node<T>* previous = nullptr;

    if(index == 0) {
        head = current->next;
        delete current;
        size--;
        return;
    }

    for(int i = 0; i < index; ++i) {
        previous = current;
        current = current->next;
    }

    previous->next = current->next;
    delete current;
    size--;
}