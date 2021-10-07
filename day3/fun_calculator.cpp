#include<bits/stdc++.h>
using namespace std;


int sum(int a, int b){
	return a+b;
}

int sub(int a ,int b){
	return a-b;
}
int mul(int a, int b){
	return a*b;
}
int divide(int a, int b){
	return a/b;
}

int main(){

	cout<<"Calculator";
	while(true){
		cout<<"Enter the operation you want to perform\n";
		cout<<"Press + for  addition operation\n";
		cout<<"Press - for  subtraction operation\n";
		cout<<"Press * for  multiplication operation\n";
		cout<<"Press / for  division operation\n";
		cout<<"Press # to exit\n ";

		char operation;
		cin>>operation;

		if(operation=='#'){
			break;
		}

		else if( operation=='+'){
			cout<<"Enter two number for addition\n";
			int a,b;
			cin>>a>>b;
			cout<<sum(a,b)<<"\n\n";
		}
		else if( operation=='-'){
			cout<<"Enter two number for subtraction\n";
			int a,b;
			cin>>a>>b;
			cout<<sub(a,b)<<"\n\n";
		}
		else if( operation=='*'){
			cout<<"Enter two number for multiplication\n";
			int a,b;
			cin>>a>>b;
			cout<<mul(a,b)<<"\n\n";
		}
		else if( operation=='/'){
			cout<<"Enter two number for division(a/b)\n";
			int a,b;
			cin>>a>>b;
			cout<<divide(a,b)<<"\n\n";
		}
        else{
            cout<<"Invalid Operation";
        }
	}

	return 0;
}