#include <iostream>
using namespace std;

int main() {
    int y, i, j,ct,m=0;
    cout << "Enter the number of elements: ";
    cin >> y;
    int a[y];
    int s[3];
    for (i = 0; i < y; i++) {
        cin >> a[i];
    }
    for (i=0;i<y;i++){
        ct=0;
        for(j=i+1;j<y;j++){
            if(a[i]==a[j])
            ct++;
        }
        if(ct==0){
            s[m++]=a[i];
        }
    }
    cout<<"After removing duplicates"<<endl;
    for(i=0;i<m;i++){
        cout<<s[i]<<" ";
    }
    return 0;
}
