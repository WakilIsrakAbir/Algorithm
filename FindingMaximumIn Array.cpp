#include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;
    int maxVal = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "Maximum Element: " << maxVal << endl;
    return 0;
}
