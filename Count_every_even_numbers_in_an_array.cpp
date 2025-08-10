#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5};
    int n = 2;
    int totalEven = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            totalEven += (i + 1) * (n - i);
        }
    }

    cout << "Total even numbers in all subarrays: " << totalEven << endl;
    return 0;
}
