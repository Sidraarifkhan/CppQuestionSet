#include<iostream>
using namespace std;

int main(){
     for(int i=1;i<=9;i++){
        int k;
        int x=1;
        for(int j=1;j<=5;j++){
                if(i<=5){
                    k=i;
                }else{
                    k=10-i;
                } if(j>=(6-k)){
                cout<<x;
                x++;

            }
            else{
                cout<<" ";
            }}
            cout<<endl;
        }

    return 0;
}