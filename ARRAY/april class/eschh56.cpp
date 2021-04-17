#include<iostream>
using namespace std;

int main(){ int x;
    cout<<"PALINDROME NUMBERS FROM 1 TO 500 ARE:"<<endl;
    for(x=1;x<=500;x++){
        int y=x,k=x; int d,rev=0;
        while(y){
            d=y%10;
            rev=rev*10+d;
            y=y/10;
        }
      if(rev==k){
          cout<<k<<endl;
      }
        
    } 

    return 0;
}