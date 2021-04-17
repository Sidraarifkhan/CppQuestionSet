#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<<"enter the first angle of the triangle"<<endl;
    cin>>x;

    cout<<"enter the second angle of the triangle"<<endl;
    cin>>y;

    cout<<"enter the third angle of the triangle"<<endl;
    cin>>z;

    if(x+y+z==180)
    cout<<"Triangle is valid";
    else
    cout<<"Triangle is invalid";
    

    return 0;
}