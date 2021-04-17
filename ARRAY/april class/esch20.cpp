#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,percentage;

    cout<<"enter maths marks"<<endl;
    cin>>a;
    cout<<"enter science marks"<<endl;
    cin>>b;
    cout<<"enter english marks"<<endl;
    cin>>c;
    cout<<"enter hindi marks"<<endl;
    cin>>d;
    cout<<"enter social studies marks"<<endl;
    cin>>e;

    percentage=((a+b+c+d+e)/5);

    if(percentage>=90)
    cout<<"GRADE A"<<endl;
    else if(percentage<90 && percentage>=75)
    cout<<"GRADE B"<<endl;
    else if(percentage<75 && percentage>=60)
    cout<<"GRADE C"<<endl;
    else if(percentage<60 && percentage>=33)
    cout<<"GRADE D"<<endl;
    else if(percentage<33)
    cout<<"GRADE E"<<endl;





    return 0;
}