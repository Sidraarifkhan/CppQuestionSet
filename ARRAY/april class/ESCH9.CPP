#include<iostream>
using namespace std;

int main(){
    int y;
    cout<<"enter the year of your choice:";
    cin>>y;
    if((y%400==0)||((y%4==0) && (y%100!=0))) 
    cout<<"LEAP YEAR"<<endl;
    else
    cout<<"COMMON YEAR";

    return 0;
}