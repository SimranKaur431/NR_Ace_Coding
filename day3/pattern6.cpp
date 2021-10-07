#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no of rows\n";
	cin>>n;
    for(int num=0;num<=n;num++){
        for(int i=1;i<=n;i++){
            if(i==num||i==(n+1-num)){
                cout<<"*";}
                else{
                    cout<<" ";
                }
            
        }cout<<"\n";
    }
        return 0;
    }