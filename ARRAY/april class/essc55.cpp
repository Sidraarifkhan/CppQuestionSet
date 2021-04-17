#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=5;i<=17;i++){
         cout<<"Table of  "<<i<<" is: "<<endl;
        for(j=1;j<=10;j++){
           
           cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        }
        cout<<endl;
    }

    return 0;
}