#include<iostream>
using namespace std;

int main(){
    int P,T;
    float R,SI;
    cout<<"enter the deposited amount"<<endl;
    cin>>P;
    cout<<"enter the time in years"<<endl;
    cin>>T;
    if(T<=5)
    R=6.5;
    else if(T>5 && T<=10)
    R=9.0;
    else if(T>10 && T<=20)
    R=12.0;
    else if(T>20)
    R=18;
    SI=(P*R*T)/100;
    cout<<"Simple Interset is "<<SI;

    return 0;
}