#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1;i<=5;i++){
        int k=1;
        for(j=1;j<=9;j++){
            if(j>=6-i && j<=4+i && k){
            cout<<" * ";
            k=0;
            }
            else
            {
                cout<<"   ";
            k=1;
             }
            
        }
        cout<<endl;
    }

    return 0;
}