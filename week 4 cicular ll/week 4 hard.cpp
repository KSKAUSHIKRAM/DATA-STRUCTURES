#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node*prev;
    Node(int d){
        data=d;
        next=nullptr;
        prev=nullptr;
    }
};
void mergesort(Node*head1,Node*head2){
    Node*start1=head1;Node*start2=head2;
    Node*head=nullptr;
    Node*current=nullptr;
    vector<int>c;
    do{
        c.push_back(head1->data);
        head1=head1->next;
    }while(head1!=start1);
     do{
        c.push_back(head2->data);
        head2=head2->next;
    }while(head2!=start2);
    sort(c.begin(),c.end());
    for(auto i=c.begin();i!=c.end();i++){
        if (head == nullptr) {
            head = new Node(*i);
            current = head;
        } else {
            current->next = new Node(*i);
            current->prev=current->next;
            current = current->next;
            //cout<<current->next<<endl;
        }
    }
    current->next=head;
    Node*start=head;
    do{
        cout<<head->data<<" ";
        head=head->next;
    }while(head!=start);
    }


int main(){
    Node*Head1=nullptr;
    Node*second1=nullptr;
    Node*third1=nullptr;
    Node*Head2=nullptr;
    Node*second2=nullptr;
    Node*third2=nullptr;
    Head1=new Node(1);
    second1=new Node(3);
    third1=new Node(4);
    Head2=new Node(2);
    second2=new Node(5);
    third2=new Node(0);
    Head1->prev=third1;
    Head1->next=second1;
    second1->next=third1;
    second1->prev=Head1;
    third1->next=Head1;
    third1->prev=second1;
    Head2->prev=third2;
    Head2->next=second2;
    second2->next=third2;
    second2->prev=Head2;
    third2->next=Head2;
    third2->prev=second2;
    mergesort(Head1,Head2);
}
