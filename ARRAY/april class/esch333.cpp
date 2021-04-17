1#include<iostream>
using namespace std;

int main(){
       
    int sh,a,l,b,r,h,ba;
    cout<<" select your shape :"<<endl<<"1. square"<<endl<<"2. recteangle"<<endl<<"3. circle"<<endl<<"4. triangle"<<endl;
    cin>>sh;
    switch(sh)
    {
        case 1:
        cout<<"enter the side of the square: ";
        cin>>a;
        cout<<" area of square is: "<<a*a<<endl;
        break;
        case 2:
        cout<<" enter the length of the rec: ";
        cin>>l;
        cout<<" enter the breath ";
        cin>>b;
        cout<<"are of rec is :"<<l*b<<endl;
        break;
        case 3:
        cout<<"enter the radius of the circle: ";
        cin>>r;
        cout<<" area of circle is: "<<3.14*r*r<<endl;
        break;
        case 4:
        cout<<"enter the height of the triangle"<<endl;
        cin>>h;
        cout<<"enter the base of the triangle"<<endl;
        cin>>ba;
        cout<<"area of the triangle is "<<0.5*ba*h;
        break;
        default:
        cout<<"INVALID INPUT";    
    }
    


    return 0;
}