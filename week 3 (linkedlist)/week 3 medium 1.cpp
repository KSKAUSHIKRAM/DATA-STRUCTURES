#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Node
{
    public:
    int data;
    Node * next;
    Node*prev;
    Node(int data1) {
        data=data1; next=nullptr; }
};
void removeDuplicates(Node* head)
{
    Node* current = head;
    Node* next_next;
    if (current == NULL)
    {
        cout<<"empty";
        return;
    }

    while (current->next != NULL) {
        if (current->data == current->next->data) {
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        }
        current=current->next;
    }

    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }

  } 

int main() {
    string f,m;int k,j,i;
    Node* head = nullptr;
    Node* current = nullptr;
    Node * last=nullptr;
    cout<<"Enter the no:";
    cin >> j;
    for (i = 0; i < j; i++) {
        cout << "Enter the number: ";
        cin>>k;
        if (head == nullptr) {
            head = new Node(k);
            current = head;
        }
        else{
           current->next = new Node(k);
            current->next->prev=current;
            current = current->next;
        }

    }
    removeDuplicates(head);
    return 0;
}


