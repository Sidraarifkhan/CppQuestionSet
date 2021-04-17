#include<iostream>
using namespace std;

int main(){

    int i,flag;
    for(int x=2;x<=200;x++){
    //cout<<"enter num"<<endl;
    //cin>>n;
    // cout<<x<<endl;
    flag=0;
    for(i=2;i<x;i++)
    {
    if(x%i==0)
    {
    flag=1;
    break;
    }
    }
    if(flag==0)
    cout<<x<<endl;
}
   return 0;
}