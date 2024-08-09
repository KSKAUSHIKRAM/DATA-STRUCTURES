#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int n=s.length();
    int arr[n];int count1=0,i,j;
    char stf[n];int freq[n];int minh;
    for (i=0;i<n;i++){
        stf[i]=s[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(stf[i]==stf[j]){
                count1++;
            }

        }
        freq[i]=count1;
        count1=0;
    }
    //for(i=0;i<n;i++){cout<<freq[i]<<"  ";}
    cout<<endl;
    for(i=0;i<n-1;i++){
             minh=i;
        for(j=i+1;j<n;j++){
            if(freq[minh]<freq[j]){
                minh=j;
            }
        }
    if(minh!=i){
        swap(freq[i],freq[minh]);
        swap(stf[i],stf[minh]);
    }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(stf[i]==stf[j]&&freq[i]>=2){
                if(stf[i]!=stf[i+1]){swap(stf[j],stf[i+1]);}
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<stf[i];
    }
}
