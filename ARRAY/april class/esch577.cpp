#include<iostream>
using namespace std;

int main(){
    
    for(int i=2;i<=200;i++){
        int flag=0;
        int j;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }}
        if(flag==0){
            cout<<i<<endl;
        

    }
    }

    return 0;
}