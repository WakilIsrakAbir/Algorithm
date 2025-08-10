#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int hash[1000] = {0};
    int repeatedElement = -1;

    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] == 1) {
            repeatedElement = arr[i];
            break;
        }
        hash[arr[i]] = 1;
    }

    if (repeatedElement != -1) {
        cout << "First repeated element: " << repeatedElement << endl;
    } else {
        cout << "No repeated elements found." << endl;
    }

    return 0;
}
