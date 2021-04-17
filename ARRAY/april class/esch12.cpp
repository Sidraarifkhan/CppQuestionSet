#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter your num"<<endl;
    cin>>num;
    if(num<20)
    cout<<"the square of "<<num<<" is "<<num*num<<endl;
    else
    cout<<"the cube of "<<num<<" is "<<num*num*num<<endl;
    

    return 0;
}