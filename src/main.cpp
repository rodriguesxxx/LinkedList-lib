#include "linkedlist.h"
#include <iostream>
using namespace std;

int main() {
    LinkedList<int> list;
    list.add(1);
    list.add(2);
    list.add(3);

    cout << list.get(1) << endl;
}