#include<iostream>
using namespace std;

int main(){
    int a,b,temp;
    cout<<"enter numbers"<<endl;
    cin>>a>>b;
    int i;
    if(b>a)
    int temp=b;
    b=a;
    a=temp;
    for(i=1;i<b;i++){
    if(a%i==0 || b%i==0){
        i=i*hcf;
    }}
    cout<<i;

    return 0;
}