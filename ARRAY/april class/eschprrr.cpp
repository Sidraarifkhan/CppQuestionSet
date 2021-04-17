#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(j>=(5-i) && j<=(3+i)){
                if(i>4){
                    if(j>=(i-3) && j<=(11-i)){
                        cout<<"*";
                    }else {
                        cout<<"                       
                   
                }
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;

    }

    return 0;
}