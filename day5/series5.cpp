#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Product of n-term series:1/1! + 3/2! + 6/3! +...\n";
    cout<<"Enter the value of n\n";
    int n,fact=1,numerator=0;
    cin>>n;
    float sum=0;
    for(int i=1;i<=n;i++){
        fact*=i;
        numerator=(numerator+i);
        sum+=numerator/(fact+0.0);

    }
    cout<<"Sum of series is:"<<sum;
    return 0;
}