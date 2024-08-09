#include<iostream>
using namespace std;
int main(){
int u;int c=0,i,j;bool swapp;
cout<<"Enter the no of employees:";
cin>>u;
string f[u];
int arr[u];
for(i=0;i<u;i++){
    cin>>f[i]>>arr[i];
}
cout<<"SORTED FORM"<<endl;
for(i=0;i<u;i++){
    for(j=0;j<u-i-1;j++){
        if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);swap(f[j],f[j+1]);swapp=true;}

    }
    if(swapp!=true){break;}
    }


for(i=0;i<u;i++){cout<<arr[i]<<"\t"<<f[i]<<endl;}

}
