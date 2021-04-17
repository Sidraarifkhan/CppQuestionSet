#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter distance in inches"<<endl;
    cin>>a;
    cout<<"enter the other distance in inches"<<endl;
    cin>>b;
    cout<<"the sum of distance in feet is "<<(a/12 + b/12)<<endl;
    cout<<"the sum of distance in inches is "<<(a + b)<<endl;

    return 0;
}