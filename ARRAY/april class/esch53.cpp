#include<iostream>
using namespace std;

int main(){
    int a,b,i,hcf;
    cout<<"enter number"<<endl;
    cin>>a;
    cout<<"enter another number"<<endl;
    cin>>b;

    if(b>a){
       int temp=b;
        b=a;
        a=temp;
    }
         for(i=2;i<=b;i++)
        {
            if(a%i==0 && b%i==0){
             hcf=i;
            }
        }        
        cout<<hcf;
    

    return 0;
}