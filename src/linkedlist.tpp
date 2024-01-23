template<typename T>
T LinkedList<T>::get(const int& index) {
    if(index >= size || index < 0) {
        //lancar excecao
    }
    
    Node<T>* current = head;

    for(int i = 0; i < index; ++i)
        current = current->next;
    
    return current->data;

}

template<typename T>
void LinkedList<T>::add(const T& value) {
    Node<T>* newNode = new Node<T>(value);
    newNode->next = head;
    head = newNode;
    size++;
}