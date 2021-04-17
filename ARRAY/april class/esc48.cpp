#include<iostream>
using namespace std;

int main(){
    int n,rev=0,l;
    cout<<"enter your num: "<<endl;
    cin>>n;
    int cpy=n;
    while(n){
        l=n%10;
        n=n/10;
        rev=rev*10+l;
    }
    if(cpy==rev)
        cout<<"num is palindrome"<<endl;
    else
        cout<<"num is not palindrome"<<endl;
    
    return 0;
}