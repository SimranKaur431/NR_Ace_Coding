#include<bits\stdc++.h>
using namespace std;


int main(){
    int a,b;
    cin>>a>>b;
    int res;
    res=a-b;
    if (res>0){
       cout<<res*100; 

    }
    else if((res<0) && (res<-100)){
        cout<<res+600;

    }
    else {
        cout<<res*2;
    }
    return 0;
}
