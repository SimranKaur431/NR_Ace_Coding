#include<bits/stdc++.h>
using namespace std;

string func(string s){
  int n=s.length();
  string res=" ";
  for(int i=0;i<=n;i++){
      char curr=s[i];
      if(s[i]=='a'){
         res.append("a"); 
      }
      else if(s[i]=='b'){
        res.append("bb");
      }
      else if(s[i]=='c') {
         res.append("ccc"); 
          
      }
      
  }
 return res;
}

int main(){
    cout<<"Enter the alphabet in abc fashion\n";
    string s;
    cin>>s;
    cout<<func(s);
  return 0;  
}

 