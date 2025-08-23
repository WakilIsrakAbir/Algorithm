#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool prime=true;

    if(n<2){
        prime=false;
    }else{
        for(int i=2;i<=n/2;i++) {
            if(n%i==0) {
                prime=false;
                break;
            }
        }
    }

    if(prime)
        cout<<"Prime\n";
    else
        cout<<"Not Prime\n";

    return 0;
}
