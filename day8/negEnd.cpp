#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[],int n){
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }cout<<"\n";
}

void negAtEnd(int arr[],int n){
    int pos=0,neg=n-1;
    while(pos<neg){
        while(arr[pos]>0 && pos<=n-1){
            pos++;
        }
        while(arr[neg]<0 && neg>=0){
            neg--;
        }
        if(pos<neg){
            int temp=arr[pos];
            arr[pos]=arr[neg];
            arr[neg]=temp;
        }
    }
}

int main(){
    int n;
    cout<<"Enter no of values in array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array\n";
    for(int i=0;i<n;i++ ){
        cin>>arr[i];
    }
    printArr(arr,n);
    negAtEnd(arr,n);
    printArr(arr,n);
    return 0;
    
}