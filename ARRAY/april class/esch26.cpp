#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"enter any character"<<endl;
    cin>>a;

    if(a>=65 && a<=91)
    cout<<"char is a capital letter"<<endl;
    else if(a>=97 && a<=123)
    cout<<"char is a small letter"<<endl;
    else if(a>='0' && a<='9')
    cout<<"char is a num"<<endl;
    else
    cout<<"char is a special symbol"<<endl;




    return 0;
}