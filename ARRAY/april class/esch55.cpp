#include<iostream>
using namespace std;

int main(){
    cout<<"palindrome num from 1 to 500 are:";
    for(int i=1;i<=500;i++){
        int j=i;
        int k=i,rev=0;
        int d;
        while(j){
            d = j%10;
            rev = rev*10+d;
            j=j/10;
 //   cout<<rev<<endl;
        }
        if(rev == k){
            cout<<k<<endl;
        }
    }
    
    
    
    
        return 0;
}