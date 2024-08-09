#include <iostream>
using namespace std;

int main() {
    int y, i, j;
    int poss, possl;

    cout << "Enter the number of elements: ";
    cin >> y;

    int a[y];
    for (i = 0; i < y; i++) {
        cin >> a[i];
    }

    int small = a[0];
    int large = a[0];

    for (j = 1; j < y; j++) {
        if (small > a[j]) {
            small = a[j];
            poss = j;
        } else if (large < a[j]) {
            large = a[j];
            possl = j;
        }
    }

    int ssmall = a[poss + 1];
    int slarge = a[possl + 1];

    for (i = 0; i < y; i++) {
        if (ssmall > a[i] && i != poss) {
            ssmall = a[i];
        } else if (slarge < a[i] && i != possl) {
            slarge = a[i];
        }
    }

    cout << "Second maximum element: " << slarge << endl;
    cout << "Second minimum element: " << ssmall << endl;

    return 0;
}
