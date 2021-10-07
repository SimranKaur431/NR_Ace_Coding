#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the number of rows\n";
    int N,count=1;
    cin>>N;

 for(int row=1;row<=N;row++){
            for(int i=1;i<=N;i++){
                if(row==1){
                    cout<<(char)(i+64);
                    count++;
                }
                else if(row!=1 && row!=N){
                    if(i==1||i==N){
                     cout<<(char)(count+64);
                     count++;   
                    }
                    else{
                     cout<<"$";   
                    }
                   
                }
                else{
                    cout<<(char)(count+64);
                    count++;
                }
            }cout<<"\n";
        }

return 0;
}

    