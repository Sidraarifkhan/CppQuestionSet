#include<iostream>
using namespace std;

int main(){
    int a,b;
    char ar;
    cout<<"enter the first digit"<<endl; 
    cin>>a;
    cout<<"enter the second digit"<<endl; 
    cin>>b;
    cout<<"airthmetic operation to be performed";
    cin>>ar;

    switch(ar){
    case '+':
    cout<<"Result -: "<<" "<<a+b;
    break;
    case '-':
    cout<<"Result -: "<<" "<<a-b;
    break;
    case '*':
    cout<<"Result -: "<<" "<<a*b;
    break;
    case '/':
    cout<<"Result -: "<<" "<<a/b;
    break;
    default:
    cout<<"invalid input";
    }
    return 0;
}