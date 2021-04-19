#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=4;i++){
          int k=i;
          int x=2;
           
        for(int j=1;j<=7;j++){
           
            if(j>=(5-i) && j<=3+i){
                if(j<=4){
                cout<<k;
                k++;}
                else{
                    cout<<x;
                    x--;
                }
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}