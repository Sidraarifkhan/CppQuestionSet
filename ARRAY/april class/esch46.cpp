#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int f,product=1;
    while(n){
        f=n%10;
        product=product*f;
        n=n/10;
    

    }
    cout<<product;

    return 0;
}