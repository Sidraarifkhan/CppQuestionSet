#include<iostream>
using namespace std;

int main(){
    int lb,cb;
    float r, tu,x;
    cout<<"enter the current reading"<<endl;
    cin>>cb;
    cout<<"enter the last month reading"<<endl;
    cin>>lb;
    tu=lb+cb;

    if(tu<=200)
    r=4.5;
    else if(tu>200 && tu<=500)
    r=6;
    else if(tu>500 && tu<=1000)
    r=9;
    else if(tu>1000)
    r=15;
    x=tu*r;
    cout<<"The amount to be paid is "<<x<<endl;





    return 0;
}