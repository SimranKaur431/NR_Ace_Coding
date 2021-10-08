#include<bits/stdc++.h>
using namespace std;


void func(string s){
    int d;
    for(int i=0;i<s.length();i++){
        d=(int)(s[i]-'a'+1);
        cout<<d;
    }
    
}

int main(){
    string s;

    cout<<"Enter the string\n";
    cin>>s;
    func(s);
    return 0;
}