#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[],int n){
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }cout<<"\n";
}


void sort012(int arr[],int n){
int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
 
    // Count the number of 0s, 1s and 2s in the array
    for (i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        }
    }
    i = 0;
    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    } 
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }
    
    }

    int main(){
    int n;
    cout<<"Enter no of values in array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array only 0,1,2\n";
    for(int i=0;i<n;i++ ){
        cin>>arr[i];
    }
    printArr(arr,n);
    sort012(arr,n);
    printArr(arr,n);
    return 0;
    
}