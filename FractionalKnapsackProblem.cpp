#include <iostream>
#include <algorithm>
using namespace std;

struct Item{
    double value;
    double weight;
};

int main(){
    int n;
    double capacity;

    cout<<"Enter number of items:";
    cin>>n;

    cout<<"Enter knapsack capacity:";
    cin>>capacity;

    Item items[100];

    cout<<"Enter value and weight of each item:\n";
    for(int i=0;i<n;i++) {
        cin>>items[i].value>>items[i].weight;
    }

    // Sort items by value-to-weight ratio in descending order
    sort(items,items+n,[](Item a,Item b) {
        return(a.value/a.weight)>(b.value/b.weight);
    });

    double totalValue=0.0;

    for(int i=0;i<n;i++){
        if(items[i].weight<=capacity) {
            totalValue +=items[i].value;
            capacity -=items[i].weight;
        } else{
            totalValue +=items[i].value*(capacity/items[i].weight);
            break;
        }
    }

    cout<<"Maximum value in knapsack="<<totalValue<<endl;

    return 0;
}
