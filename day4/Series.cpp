#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Sum of n-terms series: 1^4+2^4+....+n^4\n";
    cout<<"Enter the value of n\n";
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i*i*i*i;
    }
    cout<<"Sum of n-terms series is "<<sum;
    return 0;
}