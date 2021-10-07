#include<bits/stdc++.h>
using namespace std;
 int main(){
    cout<<"Sum of n-term seies:1*3/(1!+2!) + 2*4/(2!+3!) +....\n";
    cout<<"Enter the value of n\n";
    int n,fact=1,fact1=1;
    cin>>n;
    float sum=0;
    for(int i=1;i<=n;i++){
        fact*=i;
        fact1*=(i+1);
        sum+=(i*(i+2))/(fact+fact1+0.0);
    }
    cout<<"Sum of series is:"<<sum;
     return 0;
 }