#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the Weekday Number";
    int n;
    cin>>n;
    switch(n){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        cout<<"WEEKDAY";
        break;
        case 6:
        case 7:
        cout<<"WEEKOFF";
        break;      
       
        default:
        cout<<"Invalid Input";
    }

    return 0;
}