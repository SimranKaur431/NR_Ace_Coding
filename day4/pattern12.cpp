#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the number of rows\n";
    int n,count=0,k=0,a;
    cin>>n;

    for(int row=1;row<=n/2;row++){
        for(int i=1;i<=row;i++){
            cout<<k+1;
            k++;
            a=k;
            count++;
            if(count>=row){
                break;
            }else{
            cout<<"*";
            }
        }
        
        count=0;
        cout<<"\n";
    }
      
    for(int row=n/2;row>=1;row--){
        for(int i=1;i<=row;i++){
            cout<<a;
            a--;
            count++;

            if(count>=row){
                break;
            }else{
            cout<<"*";
            }
        }  
        count=0;
        cout<<"\n";
    }
    
    return 0;
}

