#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no of rows\n";
	cin>>n;
	for(int row=1;row<=n;row++){
		for(int numSpace=1;numSpace<=n-row;numSpace++){
			cout<<" ";
		}
		for(int numStar=1;numStar<=row;numStar++){
			cout<<"*";
		}
		cout<<"\n";
	}
    return 0;
}