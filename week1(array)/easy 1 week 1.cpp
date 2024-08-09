#include <iostream>
using namespace std;

int main() {
    int y, i, j,ct=0,m;
    cout << "Enter the number of elements: ";
    cin >> y;
    int a[y];
    for (i = 0; i < y; i++) {
        cin >> a[i];
    }
    cout<<"Enter the element to be searched:";
    cin>>m;
    for (i=0;i<y;i++){
        if(a[i]==m){
            ct++;
        }
    }
    cout<<"No of counts:"<<ct<<endl;
    return 0;
}
