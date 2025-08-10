#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 7, 5};
    int n = arr.size();
    int targetSum = 12;

    int start = 0, end = 0, sum = 0;
    bool found = false;

    while (end < n) {
        sum += arr[end];

        while (sum > targetSum && start < end) {
            sum -= arr[start];
            start++;
        }

        if (sum == targetSum) {
            found = true;
            break;
        }

        end++;
    }

    if (found) {
        cout << "Subarray with given sum exists." << endl;
    } else {
        cout << "No subarray with given sum exists." << endl;
    }

    return 0;
}
