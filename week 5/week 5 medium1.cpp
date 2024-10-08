
#include <iostream>
#include<stack>
using namespace std;
bool areBracketsBalanced(string s)
{
    stack<char> temp;
    for (int i = 0; i < s.length(); i++) {
        if (temp.empty()) {
            temp.push(s[i]);
        }
        else if ((temp.top() == '(' && s[i] == ')')
                 || (temp.top() == '{' && s[i] == '}')
                 || (temp.top() == '[' && s[i] == ']')) {

            temp.pop();
        }
        else {
            temp.push(s[i]);
        }
    }
    if (temp.empty()) {
        return true;
    }
    return false;
}

// Driver code
int main()
{
    string expr = "{()}[]";

    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
