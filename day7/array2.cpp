#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the no of values of array\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the values of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value whose occurance you want to find\n";
    int x,count=0;
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
        else{
            continue;
        }
        
    }
    cout<<"Occurance of "<<x<<" in array is: "<<count;
    return 0;
}