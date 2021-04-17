#include<iostream>
using namespace std;

int main(){
    int bs,ms,as,da,hra,pf,ins,i;                                               //annual =monthly*12
                                                         //monthly = bs+da+hra-pf-ins
    cout<<"enter the basic salary "<<endl;
    cin>>bs;
    ins=(12*bs)/100;
    pf=(10*bs)/100;
    hra=(25*bs)/100;
    da=(115*bs)/100;
    ms=bs+da+hra-pf-ins;
    as=ms*12;


    if(as<=250000)
    i=0;
    else if(as>250000 && as<=500000)
    i=(10*as)/100;
    else if(as>500000 && as<=1000000)
    i=(20*as)/100;
    else if(as>1000000)
    i=(30*as)/100;

    cout<<"Income tax to be paid "<<i<<endl;

    return 0;
}