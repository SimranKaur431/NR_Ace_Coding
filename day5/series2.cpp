#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Sum of n-terms series: 1/2+2/3+..+n/(n+1)\n";
    cout<<"Enter the value of n\n";
    int n;
    float sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i/(i+1+0.0); //sum+=i/(i+1.0)
    }
    cout<<"Sum of n-terms series is "<<sum;
    return 0;
}
