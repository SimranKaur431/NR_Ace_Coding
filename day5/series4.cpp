#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Product of n-term series:1+2/3+4 * 2+3/4+5  *....\n";
    cout<<"Enter the value of n\n";
    int n;
    cin>>n;
    float prod=1;
    for(int i=1;i<=n;i++){
        prod*=(i+(i+1.0))/((i+2.0)+(i+3.0));
    }
    cout<<"Product of n-term series is:"<<prod;
    return 0;
}
