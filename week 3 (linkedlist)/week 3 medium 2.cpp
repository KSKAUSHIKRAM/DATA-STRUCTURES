#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Node {
public:
    string name;
    Node* next;
    Node* prev;

    Node(string data1) {
        name = data1;
        next = nullptr;
        prev = nullptr;
    }
};

void printReverse(Node* tail) {
    while (tail != nullptr) {
        string v=tail->name;
        reverse(v.begin(),v.end());
        cout<<v<<" ";
        tail = tail->prev;
    }
    cout << endl;
}

int main() {
    int j;
    cout << "Enter the number: ";
    cin >> j;

    Node* head = nullptr;
    Node* current = nullptr;
    Node* last = nullptr;

    for (int i = 0; i < j; i++) {
        string name;
        cout << "Enter the name: ";
        cin >> name;

        if (head == nullptr) {
            head = new Node(name);
            current = head;
        } else {
            current->next = new Node(name);
            current->next->prev = current;
            current = current->next;
            last = current;
        }
    }

    cout << "Reversed names:" << endl;
    printReverse(last);

    return 0;
}
