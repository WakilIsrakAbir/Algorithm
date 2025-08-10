#include <iostream>
using namespace std;
int main() {
int arr[] = {4, 8, 1, 8, 3,9};
int n = 6;
int x = 4;
bool found = false;
for(int i=0;i<n;i++){
    int current=arr[i];
    if(current==x){
        for(int j=i;j<n;j++){
            if(arr[j]=x){
                found=true;
                break;
            }
        }
        break;
    }
}

if(found)
cout << "Element " << x << " is present in the array." << endl;
else
cout << "Element " << x << " is NOT present in the array." << endl;
return 0;
}

