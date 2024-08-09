#include <iostream>
using namespace std;
int minSumOfProduct(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i],arr[j]);
            }
        }
    }

    int sum = 0;

    for (int i = 0; i < n / 2; i++) {
        sum += arr[i] * arr[n - i - 1];
    }

    return sum;
}

int main() {
    int y,i;
    cout<<"Enter the no of elements:";
    cin>>y;
    int arr[y];
    for (i = 0; i < y; i++) {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int minSum = minSumOfProduct(arr, n);
    cout << "Minimum sum of the product of consecutive pair elements: " << minSum << endl;
    return 0;
}
