#include<iostream>
using namespace std;

int main(){
    cout<<"Enter  the Number ";
    int n;
    cin>>n;
    int sum=0;
    int d;
    while(n){
        d= n%10;
        sum = sum +d;
        n=n/10;
    }
    cout<<"Required Sum -:"<<sum;

    return 0;
}