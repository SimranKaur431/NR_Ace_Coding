#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no of rows\n";
	cin>>n;
    for(int row=1;row<=n;row++){
        for(int i=1;i<=row;i++){
            cout<<(char)(i+64);
        }
        for(int i=row-1;i>=1;i--){
            cout<<(char)(i+64);
        }cout<<"\n";

            
        }
    
    return 0;
}