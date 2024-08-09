#include <iostream>
using namespace std;

void uniq(int a[], int n) {
    bool isUnique;
    for (int i = 0; i < n; i++) {
        isUnique = true;
        for (int j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                isUnique = false;

            }
        }
        if (isUnique) {
            cout << "The number " << a[i] << " is unique" << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    uniq(arr, n);
    return 0;
}
