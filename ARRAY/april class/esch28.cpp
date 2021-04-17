#include<iostream>
using namespace std;

int main(){
    int w,r;
    cout<<"enter the weight of the courier"<<endl;
    cin>>w;
    if(w<=1)
    r=100;
    else if(w>1 && w<=6)
    r=((w-1)*8)+100;
    else if(w>6 && w<=11)
    r=(((w-6)*5)+((w-1)*8)+100);
    else if(w>11 && w<=16)
    r=(((w-11)*3) + ((w-6)*5)+((w-1)*8)+100);
    else if(w>16)
    r=((((w-16)*2))+(((w-11)*3) + ((w-6)*5)+((w-1)*8)+100));
     cout<<r;

    return 0;
}