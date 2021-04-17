#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    if(b>a){
        int temp=b;
        b=a;
        a=temp;
    }
    for(int i=b+1;i<a;i++){
        cout<<i<<endl;
    }    return 0;
}