#include<bits/stdc++.h>
using namespace std;

int main(){
   cout<<"Enter the number of rows\n";
   int n;
   cin>>n;
   for(int row=1;row<=(n/2);row++){
      for(int i=1;i<=row;i++){
       cout<<row+2;
       }cout<<"\n";
   }
   for(int i=1;i<=(n/2)+1;i++){
       cout<<n;
   }cout<<"\n";
   
   for(int row=(n/2);row>=1;row--){
      for(int i=1;i<=row;i++){
       cout<<row+2;
       }cout<<"\n";
   }
   
       
    return 0;
}