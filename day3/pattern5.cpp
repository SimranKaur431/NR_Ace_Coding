#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the number of rows\n";
    int n;
    cin>>n;
    for(int row=1;row<=n/2;row++){
        for(int numspace=0;numspace<=row;numspace++){
            cout<<" ";
        }cout<<"*";
        for(int space=0;space<=n-row-1;space++){
            cout<<" ";
        }cout<<"*";
        cout<<"\n";
     
    }
    if(n%2!=0){
        for(int space=-1;space<=n/2;space++){
            cout<<" ";
        }
        cout<<"*";
        cout<<"\n";
    }
    for(int row=n/2;row>=1;row--){
        for(int numspace=0;numspace<=row;numspace++){
            cout<<" ";
        }cout<<"*";
        cout<<"\n";
     
    }
    return 0;
}