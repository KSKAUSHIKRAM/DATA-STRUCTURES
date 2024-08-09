#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
class employee{
    public:
    int top=-1;
    int size;
    string name[50];
    string id[50];
    int salary[50];
    employee(int d){
        size=d;
        name[size];
        id[size];
    }
    void push(string nam,string ib,int s){
        top++;
        name[top]=nam;
        id[top]=ib;
        salary[top]=s;

    }
    void display(){
        for(int i=top;i>=0;i--){
        cout<<"ID:"<<id[i]<<" "<<"NAME:"<<name[i]<<" "<<"SALARY:"<<salary[i]<<endl;
    }
    }
    void pop(){
        top--;
    }
    void peek(){
        cout<<"ID:"<<id[top]<<" "<<"NAME:"<<name[top]<<" "<<"SALARY:"<<salary[top]<<endl;
    }


};
int main(){
    int i,j,n,ch;string f,g;int s;
    cout<<"Enter the no of employees:";
    cin>>n;
    employee obj(n);
    for(i=0;i<n;i++){
        obj.top++;
        cout<<"Enter the id,name and salary:";
        cin>>obj.id[obj.top]>>obj.name[obj.top]>>obj.salary[obj.top];

    }
    for(i=obj.top;i>=0;i--){
        cout<<"ID:"<<obj.id[i]<<" "<<"NAME:"<<obj.name[i]<<" "<<"SALARY:"<<obj.salary[i]<<endl;
    }
  do{
      cout<<"1.PUSH"<<endl;
      cout<<"2.POP"<<endl;
      cout<<"3.DISPLAY"<<endl;
      cout<<"4.PEEK"<<endl;
      cout<<"Enter the option:";
      cin>>ch;
      switch(ch){
          case 1:
            cout<<"Enter the id,name and salary:";
            cin>>g>>f>>s;
            obj.push(f,g,s);
            obj.display();
            break;
           case 2:
           cout<<"After poping"<<endl;
           obj.pop();
           obj.display();
           break;
           case 3:
           obj.display();
           break;
           case 4:
           obj.peek();
           break;

          default:
          cout<<"Exit";
      }
  }while(ch!=0);
}
