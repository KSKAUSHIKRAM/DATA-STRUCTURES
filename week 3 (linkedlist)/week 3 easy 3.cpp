#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1) {
        data= data1;
        next = nullptr;
        prev = nullptr;
    }
};

void swapheadandtail(Node*head,Node*tail){
    Node*headnext=head->next;
    Node*tailprev=tail->prev;
    headnext->prev=tail;
    tail->next=headnext;
    tailprev->next=head;
    head->prev=tailprev;
    head->next=NULL;
    head=tail;
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}

int main() {
    int j;
    cout << "Enter the number of nodes: ";
    cin >> j;

    Node* head = nullptr;
    Node* current = nullptr;
    Node* last = nullptr;

    for (int i = 0; i < j; i++) {
        int g;
        cout << "Enter the number: ";
        cin >> g;

        if (head == nullptr) {
            head = new Node(g);
            current = head;
        } else {
            current->next = new Node(g);
            current->next->prev = current;
            current = current->next;
            last = current;
        }
    }
    swapheadandtail(head,last);

    return 0;
}
