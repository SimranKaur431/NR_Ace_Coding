#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[],int n){
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }cout<<"\n";
}
void RotateArr(int arr[],int n){
    cout<<"Enter the no of steps you want to rotate\n";
    int a;
    cin>>a;
    for(int j=1;j<=a;j++){
    int last_ele=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
     arr[0]=last_ele;
    }
    cout<<"Rotated array by "<<a<<" steps is: \n";
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
    RotateArr(arr,n);
    printArr(arr,n);
    return 0;
}
