#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=9;j++){
         int k=1;
            if(j<=i || j>=(10-i)){
                 if(j>5){
                k=10-j;
                cout<<k;
            }
            else { cout<<j;}
            //    cout<<k;

            }
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}