#include<iostream>
using namespace std;

int main(){
    int n,i,c=0,d=0;
    cout<<"enter the num"<<endl;
    cin>>n;

    for(i=1; i<=n; i++)
    {
       if(i%2==0)
        c=c+i;
        else
        d=d+i;
        

    }

cout<<"sum of even numbers "<<c<<endl;
cout<<"sum of odd numbers "<<d;
    return 0;
}