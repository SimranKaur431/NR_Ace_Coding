#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5,sum=0,tot=0;
    
    int arr[n]={1,2,3,4,5};
    
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    for(int i=0;i<=n;i++){
        tot+=(i*(sum-i));
    }
    cout<<sum<<" "<<tot;
   return 0;
}