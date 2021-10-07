#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Report Card"<<"\n";
    int marks;
    int m1,m2,m3,m4,m5;
    cout<<"Enter the Marks English Obtainted "<<"\n";
    cin>>m1;
    cout<<"Enter the Marks Hindi Obtainted "<<"\n";
    cin>>m2;
    cout<<"Enter the Marks Mathematics Obtainted "<<"\n";
    cin>>m3;
    cout<<"Enter the Marks Social Science Obtainted "<<"\n";
    cin>>m4;
    cout<<"Enter the Marks Science Obtainted "<<"\n";
    cin>>m5;
    marks=(m1+m2+m3+m4+m5)/5;
    if ((marks>=90) && (marks<=100)){
        cout<<"Grade Obtained: A+"<<"\n";
    }
    else if ((marks>=80) && (marks<=89)){
        cout<<"Grade Obtained: A"<<"\n";
    }
    else if ((marks>=70) && (marks<=79)){
        cout<<"Grade Obtained: B+"<<"\n";
    }
     else if ((marks>=60) && (marks<=69)){
        cout<<"Grade Obtained: B"<<"\n";
    }
    else if ((marks>=50) && (marks<=59)){
        cout<<"Grade Obtained: C+"<<"\n";
    }
    else if ((marks>=40) && (marks<=49)){
        cout<<"Grade Obtained: C"<<"\n";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}