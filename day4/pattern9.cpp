#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the no of rows\n";
    int n;
    cin>>n;
    int count=0,k=0;
   for(int row=1;row<=n;row++){
       for(int space=0;space<=n-row;space++){
           cout<<" ";
           count++;
       }
       for(int num=1;num<=row;num++){
           cout<<num;
       }
       for(int i=row-1;i>=1;i--){
            cout<<i;
        }
       cout<<"\n";
      
   }

    return 0;
}