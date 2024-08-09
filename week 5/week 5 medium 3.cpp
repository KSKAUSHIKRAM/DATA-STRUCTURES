#include<iostream>
#include<stack>
#include<algorithm>
#include<string>
using namespace std;
class Solution {
public:
    void decodeString(string s) {
        stack<int> intg;
        stack<char> chare;
        string h = "", modify = "";
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                intg.push(s[i] - '0');
            } else {
                if (s[i] != ']') {
                    chare.push(s[i]);
                } else {
                    while (!chare.empty()&& chare.top()!='[') {
                        if (chare.top() >= 97 && chare.top() <= 122) {
                            h += chare.top();
                        }

                        chare.pop();
                    }
                    chare.pop();
                    reverse(h.begin(),h.end());
                    for (int i = 0; i < intg.top(); i++) {
                        modify += h;
                    }
                    h="";
                    intg.pop();
                }
            }
        }
        if(!chare.empty()){
            while(!chare.empty()){
                h+=chare.top();
                chare.pop();
            }
            reverse(h.begin(),h.end());
            modify+=h;
        }
        cout<< modify;
    }
};


int main(){
Solution v;
v.decodeString("3[a]2[bc]");
}
