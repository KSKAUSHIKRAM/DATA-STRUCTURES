// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int d){
        data=d;
        next=nullptr;
        prev=nullptr;
    }
};

int sumtraverse(Node*head,Node*list){
    Node*curr=head;
    Node *start=list;int sum=0;
    do{
        if(curr->data!=list->data){
            sum+=list->data;
        }
        list=list->next;
    }while(list!=start);
    return sum;
}

int main() {
    Node * head=nullptr;
    Node* second=nullptr;
    Node* third=nullptr;
    Node* fourth=nullptr;
    Node* five=nullptr;
    Node*newhead=nullptr;
    Node*current=nullptr;
    Node*last=nullptr;
    head=new Node(4);
    second=new Node(5);
    third=new Node(6);
    fourth=new Node(7);
    five=new Node(8);
    head->prev=five;
    head->next=second;
    second->prev=head;
    second->next=third;
    third->prev=second;
    third->next=fourth;
    fourth->prev=third;
    fourth->next=five;
    five->next=head;
    five->prev=fourth;
    Node* list=head;

    do{
        int k=sumtraverse(head,list);

         if (newhead == nullptr) {
            newhead = new Node(k);
            current = newhead;
        } else {
            current->next = new Node(k);
            current->prev=current->next;
            current = current->next;
            last=current;
            //cout<<current->next<<endl;
        }
        head=head->next;
    }while(head!=list);
    last->next=newhead;
    newhead->prev=last;
    Node*final=newhead;
    do{
        cout<<newhead->data<<" ";
        newhead=newhead->next;
    }while(newhead!=final);
    return 0;
}
