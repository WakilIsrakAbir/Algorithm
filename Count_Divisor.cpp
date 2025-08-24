#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int count=0;
    cout<<"Divisors: ";

    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            count++;
        }
    }

    cout<<"\nTotal divisors="<<count<<endl;

    return 0;
}
