#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the number of rows\n";
    int n;
    cin>>n;

    for(int row=1;row<=n/2;row++){
        cout<<"* ";
        for(int i=2;i<=row;i++){
            cout<<i-1<<" ";
        }
        for(int i=row-1;i>=2;i--){
            cout<<i-1<<" ";
        }
        if(row>1){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    for(int row=n/2+1;row>=1;row--){
        cout<<"* ";
        for(int i=2;i<=row;i++){
            cout<<i-1<<" ";
        }
        for(int i=row-1;i>=2;i--){
            cout<<i-1<<" ";
        }
        if(row>1){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}