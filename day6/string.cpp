#include<bits/stdc++.h>
using namespace std;
string convert(string s){
    for(int i=0;i<=s.length();i++){
        char curr=s[i];
        if(curr>='a'&& curr<='z'){
            s[i]=s[i]-'a'+'A';

        }
        else if(curr>='A'&& curr<='Z'){
            s[i]=s[i]-'A'+'a';
        }
       
    }
    return s;
}

int main(){
    string s="simR@7";
    cout<<convert(s)<<" ";
    return 0;
}