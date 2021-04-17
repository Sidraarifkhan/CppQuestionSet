#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        int k=1;
        for(int j=1;j<=9;j++){
            if(j>=i && j<=(10-i) && k){
                cout<<6-i;
                k=0;
            }
            else{
                cout<<" ";
                k=1;
            }
           
            }
        

        cout<<endl;
    }

    return 0;
}