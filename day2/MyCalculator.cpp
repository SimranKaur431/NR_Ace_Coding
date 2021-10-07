#include<bits\stdc++.h>
using namespace std;

int main(){
cout<<"Calculator"<<"\n";
while(true){
cout<<"Enter the operation you want to perform\n";
cout<<"Press + for addition  operation\n";
cout<<"Press - for subtraction operation\n";
cout<<"Press * for multiplication operation\n";
cout<<"Press / for division operation\n";
cout<<"Press # to exit\n";
  
char operation;
cin>> operation;

if(operation=='#'){
    break;
}

else if(operation=='+'){
    cout<<"Enter two numbers to be added"<<"\n";
    int a,b;
    cin>>a>>b;
    cout<<(a+b)<<"\n";
}
else if(operation=='-'){
    cout<<"Enter two numbers to be subtracted"<<"\n";
    int a,b;
    cin>>a>>b;
    cout<<(a-b)<<"\n";
}
else if(operation=='*'){
    cout<<"Enter two numbers to be multiplied"<<"\n";
    int a,b;
    cin>>a>>b;
    cout<<(a*b)<<"\n";
}
else if(operation=='/'){
    cout<<"Enter two numbers to be divided"<<"\n";
    int a,b;
    cin>>a>>b;
    cout<<(a/b)<<"\n";
}

else{
    cout<<"Invalid Operation"<<"\n";
}

}

    return 0;
}