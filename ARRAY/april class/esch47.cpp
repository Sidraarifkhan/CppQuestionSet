#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
int l;

    while(n){
        l=n%10;
        n=n/10;
        cout<<l;

    }

    return 0;
}