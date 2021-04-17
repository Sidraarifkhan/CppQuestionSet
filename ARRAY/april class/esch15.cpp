#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the length of the perpendicular  of the triangle"<<endl;
    cin>>a;

    cout<<"enter the length of the base of the triangle"<<endl;
    cin>>b;

    cout<<"enter the length of the hypotenious of the triangle"<<endl;
    cin>>c;

    if((a*a + b*b)==c*c)
    cout<<"Triangle is a pythagoras triplet";
    else
    cout<<"Triangle isn't a pythagorus triplet";

    return 0;
}