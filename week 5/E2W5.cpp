#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
class lifo{
     public:
     string names;
     int id;
     lifo*next;
     lifo(string n,int s){
     names=n;id=s;
     next=NULL;
     }


};
lifo* insertatfrot(lifo*head){
 string name;int id;
 lifo*curr=NULL;
 cout<<"Enter your name and id:";
 cin>>name>>id;
 if(head==NULL){
    lifo*newnode=new lifo(name,id);
    head=newnode;
    curr=head;
 }
 else{
    lifo*newnode=new lifo(name,id);
    newnode->next=head;
    head=newnode;
 }
 return head;
}
lifo*deletefront(lifo*head){
 lifo*curr=NULL;
 if(head==NULL){
    return NULL;
 }
 else{
    lifo*temp=head;
    head=head->next;
    delete temp;
 }
 return head;
}
void display(lifo*head){
 if(head==NULL){
    cout<<"NULL";
 }
 while(head!=NULL){
    cout<<head->names<<" "<<head->id<<endl;
    head=head->next;
 }
}
void peek(lifo*head){
cout<<"Name:"<<head->names<<" "<<head->id<<endl;
}
int main(){
    int i,ch;string n;lifo*head=NULL;

  do{
      cout<<"1.PUSH"<<endl;
      cout<<"2.POP"<<endl;
      cout<<"3.DISPLAY"<<endl;
      cout<<"4.PEEK"<<endl;
      cout<<"Enter the option:";
      cin>>ch;
      switch(ch){
          case 1:
            head=insertatfrot(head);
            //display(head);
            break;
           case 2:
           head=deletefront(head);
           display(head);
           break;
           case 3:
            display(head);
           break;
           case 4:
           peek(head);
           break;

          default:
          cout<<"Exit";
      }
  }while(ch!=0);
}
