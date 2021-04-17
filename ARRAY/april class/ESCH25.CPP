#include<iostream>
using namespace std;

int main(){
    int a,d,c;
    cout<<"enter the amount "<<endl;
    cin>>a;
    if(a<=5000)
    d=5;
    else if(a>5000 && a<=10000)
    d=8;
    else if(a>10000 && a<=25000)
    d=12;
    else if(a>25000 && a<=50000)
    d=17;
    else if(a>50000)
    d=23;

    c=(d*a)/100;

    cout<<"the discount is"<<c<<endl;
    cout<<"the amount after discount is "<<(a-c);




    return 0;
}