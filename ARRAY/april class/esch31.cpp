#include<iostream>
using namespace std;

int main(){
    int a,b;
    char c;
    cout<<"enter the first num "<<endl;
    cin>>a;
    cout<<"enter the other num "<<endl;
    cin>>b;
    cout<<"enter the airthmetic operator "<<endl;
    cin>>c;
    switch(c){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"INVALID INPUT";    }
    return 0;
}