#include<iostream>
#include<algorithm>
using namespace std;

struct Job{
    char id;
    int deadline;
    int profit;
};

int main()
{
    int n;
    cout<<"Enter number of Job:";
    cin>>n;

    Job jobs[100];
    for(int i=0;i<n;i++){
        cin>>jobs[i].id>>jobs[i].deadline>>jobs[i].profit;
    }

    //sort profit in decreasing order
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(jobs[i].profit<jobs[j].profit){
                Job temp=jobs[i];
                jobs[i]=jobs[j];
                jobs[j]=temp;
            }
        }
    }
    int slot[100];
    for(int i=0;i<n;i++){
        slot[i]= -1;
    }
    int totalProfit=0;
    for(int i=0;i<n;i++){
        for(int j=min(jobs[i].deadline,n)-1;j>=0;j--){
            if(slot[j]==-1){
                slot[j]=i;
                totalProfit +=jobs[i].profit;
                cout<<jobs[i].id<<" ";
                break;
            }
        }
    }
    cout<<"\n Total Profit:"<<totalProfit<<endl;
    return 0;

}
