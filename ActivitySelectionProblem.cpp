#include <iostream>
#include <algorithm>
using namespace std;

struct Activity {
    int start;
    int finish;
};

int main(){
    int n;
    Activity activities[100];

    cout<<"Enter number of activities:";
    cin>>n;

    cout<<"Enter start and finish times:\n";
    for(int i=0;i<n;i++) {
        cin>>activities[i].start>>activities[i].finish;
    }

    // Sort activities by finish time
    sort(activities, activities+n,[](Activity a,Activity b){
        return a.finish < b.finish;
    });

    cout<<"Selected activities:\n";
    cout<<activities[0].start<<" "<<activities[0].finish<<"\n";

    int lastSelectedActivity=0;

    // Select remaining compatible activities
    for(int i=1;i<n;i++){
        if(activities[i].start>=activities[lastSelectedActivity].finish){
            cout<<activities[i].start<<" "<<activities[i].finish<<"\n";
            lastSelectedActivity=i;
        }
    }

    return 0;
