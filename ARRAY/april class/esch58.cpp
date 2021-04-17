#include<iostream>
using namespace std;

int main(){
    for(int i=12;i<=40;i++) {
        for(int j=2;j<=i;j++){
            if(i%j==0){
                cout<<j<<endl;
            }
        }cout<<endl;
    }

    return 0;
}