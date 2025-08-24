#include<iostream>
using namespace std;
int main()
{
    int n,target;

    cout<<"Number of element:";
    cin>>n;

    cout<<"Enter Array Element:";
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Set Target:";
    cin>>target;

    int index= -1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
        index=i;
        break;
        }
    }
    if( index != -1){
        cout<<"number found at index:"<<index<<endl;
    }
    else{
        cout<<"Number not found.";
    }
    return 0;

}

