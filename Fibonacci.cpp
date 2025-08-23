#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int a=0,b=1;
    cout<<a<<" ";
    cout<<b<<" ";

    for (int i=2;i<n;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}
