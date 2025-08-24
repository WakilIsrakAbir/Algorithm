#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,target;
    cout<<"Enter the number element:";
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter number to search:";
    cin>>target;

    int left=0,right=n-1;
    int index= -1;

    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
            index=mid;
            break;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(index != -1){
        cout<<"Number found at index:"<<index<<endl;
    }
    else{
        cout<<"Number not found.";
    }
}
