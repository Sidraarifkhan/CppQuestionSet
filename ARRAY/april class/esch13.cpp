#include<iostream>
using namespace std;

int main(){
    int a,t;
    float r;
    cout<<"enter the amount deposited:"<<endl;
    cin>>a;
    
    cout<<"enter the time in years:"<<endl;
    cin>>t;

    if(t<=4)
    r=(4.5*a)/100;
    else
    r=(7.25*a)/100;

    cout<<"amout received after a specified num of years is "<<a+r;


    return 0;
}