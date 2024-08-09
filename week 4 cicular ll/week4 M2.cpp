#include <iostream>
using namespace std;
class Node{
    public:
    string name;
    int task,id,count1=0;
    Node*next;
    Node*prev;
    Node(string nam,int ta,int i){
        name=nam;
        task=ta;
        id=i;
        count1=0;
        next=nullptr;
    }
};

void noofturn(Node*head,int sum){
    int i=1,count1=1;
    Node*list1=head;Node*curr=head;
    do{
        if(head->task!=0){
            cout<<"Turn"<<i<<":"<<" "<<"Task of"<<" "<<head->id<<endl;
        i++;
        int d=head->task;
        d--;
        head->task=d;
        }
        else{
        head->count1=count1;
        count1++;
        }
        head=head->next;
    }while(i!=sum+1);
    do{
        if(list1->count1==1){
            cout<<"First completed task:"<<list1->id<<endl;
            break;
        }
        list1=list1->next;
    }while(list1!=curr);
}

int main() {
int j, i,n,id,task,sum=0;string f;
    Node* head = nullptr;
    Node* current = nullptr;
    cout << "Enter the number of elements: ";
    cin >> j;
    for (i = 0; i < j; i++) {
        cout<<"Enter the id ,name and no of tasks:";
        cin >>id>>f>>n ;
        if (head == nullptr) {
            head = new Node(f,n,id);
            current = head;
        } else {
            current->next = new Node(f,n,id);
            current->prev=current->next;
            current = current->next;
        }

        sum+=n;
    }
    current->next=head;
    noofturn(head,sum);

}
