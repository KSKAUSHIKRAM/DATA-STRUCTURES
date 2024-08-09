#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node * next;
    Node*prev;
    Node(int d) : data(d), next(nullptr) {}
};
int count(Node *head){
    int u=0;
    while(head!=NULL){
        u++;
        head=head->next;
    }
    return u;
}
int middle(Node *n,int d){
    int mid,i=0;
    Node*temp=n;
    if(d%2==0){
         mid=((d/2)+((d/2)+1))/2;
    }
    else{
         mid=(d+1)/2;
    }
    while(temp!=nullptr){
        if(i==mid-1){
            cout<<"middle element:"<<temp->data<<endl;
        }
        i++;
        temp=temp->next;
    }
 return 0;
}
int main()
{ 
    int ele,ch;Node*head=NULL;Node*current=NULL;
    do{
    cout<<"Enter the element:";
    cin>>ele;
    if(head==NULL){
        Node*newnode=new Node(ele);
        head=newnode;
        current=head;
    }
    else{
        Node*newnode=new Node(ele);
        current->next=newnode;
        current=current->next;
    }
    cout<<"Do you want to continue or not (1/0):";
    cin>>ch;
}while(ch!=0);
   int j=count(head); 
   middle(head,j);
    return 0;
}