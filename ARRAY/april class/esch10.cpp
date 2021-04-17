#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the Alphabet";
    cin>>ch;
    if(ch>=65 && ch<=91){
        ch = ch+32;
    }else{
        ch=ch-32;
    }
    cout<<ch;

    return 0;
}