
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,amount,coins[100],count=0;

    cout<<"Enter number of coins:";
    cin>>n;

    cout<<"Enter coin denominations:";
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }

    cout<<"Enter amount:";
    cin>>amount;

    // Sort coins in descending order
    sort(coins,coins+n,greater<int>());

    // Greedy coin selection
    for(int i=0;i<n;i++) {
        if(amount>=coins[i]) {
            int numCoins=amount/coins[i]; // take as many as possible
            count +=numCoins;
            amount -=numCoins*coins[i];
        }
        if(amount==0)break; // stop if amount is covered
    }

    cout<<"Minimum coins needed:"<<count;
    return 0;
}
