#include<iostream>
using namespace std;
class Node
{
    public:
    string name,id;
    int salary;
    Node * next;
    Node(string data1,string data2,int data3) {
        id=data1;name=data2;salary=data3; next=nullptr;}
};
void employeedetails(Node* head) {
    Node*current=head;
    Node*l;
    int max=head->next->salary;
    while(current!=nullptr){
        if(max<current->salary){
            max=current->salary;
            //Node*l=current;
        }
        current=current->next;
    }
    cout<<"Max:"<<max;
    /*cout<<"id:"<<l->id<<endl;
    cout<<"name:"<<l->name<<endl;
    cout<<"salary:"<<l->salary<<endl;*/
        //head=head->next;
}

int main() {
    string f,m;int k,j,i;
    Node* head = nullptr;
    Node* current = nullptr;
    Node * last=nullptr;
    cout<<"Enter the no:";
    cin >> j;
    for (i = 0; i < j; i++) {
        cout << "Enter the id,name and salary: ";
        cin>>f>>m>>k;
        if (head == nullptr) {
            head = new Node(f,m,k);
            current = head;
        } else {
            current->next = new Node(f,m,k);
            //current->prev=current->next;
            current = current->next;
            //cout<<current->next<<endl;
            //last=current;
        }
    }

    employeedetails(head);
    return 0;
}


