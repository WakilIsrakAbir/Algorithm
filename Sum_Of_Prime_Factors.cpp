#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;

    cout<<"Prime factors: ";

    if(n%2==0){
        sum +=2;
        cout<<2<<" ";
        while(n%2==0){
            n/=2;
        }
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            sum+=i;
            cout<<i<<" ";
            while(n%i==0){
                n/=i;
            }
        }
    }

    if(n>2){
        sum+=n;
        cout<<n<<" ";
    }

    cout<<"\nSum of prime factors="<<sum<<endl;

    return 0;
}

