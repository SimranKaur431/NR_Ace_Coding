#include<bits/stdc++.h>
using namespace std;

int main(){
	int fact=1,n;
	cout<<"Enter the value of n\n";
	cin>>n;
	for(int i=1; i<=n;i++){
		fact*=i;
	}
	cout<<"The factorial of "<<n<<" is:"<<fact;
	return 0;
}