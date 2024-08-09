#include<iostream>
#include<conio.h>
using namespace std;
int main(){
string slist[]={"ab","ab","abc"};
int n1=sizeof(slist)/sizeof(slist[0]);
string qielist[]={"ab","abc","bc"};
int n2=sizeof(qielist)/sizeof(qielist[0]);
int arr[3];int c=0;int i,h=0,j;

for(i=0;i<n1;i++){
        c=0;
   for(j=0;j<n2;j++){
    if(qielist[i] ==slist[j]){
       c++;

    }
   }
   arr[h]=c;
       h++;


}
for(int i=0;i<h;i++){
cout<<arr[i]<<" ";
}
return 0;
}
