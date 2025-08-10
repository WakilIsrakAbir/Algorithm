
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 5};
    int n = 7;

    int hash[100] = {0};
    int unique[100];
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] == 0) {
            hash[arr[i]] = 1;
            unique[uniqueCount++] = arr[i];
        }
    }

    cout << "Array with unique elements: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}
