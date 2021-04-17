#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"first number is "<<endl;
    cin>>a;
    cout<<"second num is "<<endl;
    cin>>b;
    cout<<"third" num is "<<endl;
    cin>>c;

    if(a>b && a>c)
    cout<<a<<" is the greatest num among these three";
    else if(b>a && b>c)
    cout<<b<<" is the greatest";
    else
    cout<<c<<" is the greatest";
    
    return 0;
}