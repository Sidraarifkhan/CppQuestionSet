#include<iostream>
using namespace std;

int main(){
    char al;
    cout<<"enter the alphabet of your choice"<<endl;
    cin>>al;
    switch(al){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<"entered alphabet is a vowel"<<endl;
        break;
        default:
        cout<<"alphabet is a constant"<<endl;
        break;
    }

    return 0;
}