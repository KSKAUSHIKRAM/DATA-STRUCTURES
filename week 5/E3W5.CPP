#include <iostream>
#include<string>
using namespace std;
class lifo {
public:
 string d;
 int top=-1;
 lifo (string f){
     d=f;
     top=f.length()-1;
 }
};
void pop(lifo c){
    if(c.top!=-1){
        cout<<c.d[c.top];
        c.top--;
        pop(c);
    }
}
int main() {
    string u;
    cout<<"Enter the string:";
    cin>>u;
   lifo f(u);
   pop(f);
   //for(int i=0;i<s.length();i++)

    return 0;
}
