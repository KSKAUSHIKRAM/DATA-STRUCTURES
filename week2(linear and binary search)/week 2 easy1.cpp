#include<iostream>
using namespace std;
int main(){
int n,i,j,minh;
cout<<"Enter the no of students:";
cin>>n;
string f[n];
int arr[n];
for(i=0;i<n;i++){
    cin>>arr[i]>>f[i];
}
cout<<"sorted after"<<endl;
for (i=0;i<n-1;i++){
        minh=i;
    for(j=i+1;j<n;j++){
        if(arr[minh]>arr[j]){minh=j;}
    }
    if(minh!=i){
        swap(arr[i],arr[minh]);
        swap(f[i],f[minh]);
    }
}
for(i=0;i<n;i++){cout<<arr[i]<<"\t"<<f[i]<<endl;}

}
