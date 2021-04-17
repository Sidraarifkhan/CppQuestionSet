#include<iostream>
using namespace std;

int main(){
    int n,flag=0,i;
    cout<<"enter the num"<<endl;
    cin>>n;
for(i=2;i<n;i++)
{
    if(n%i==0){
       cout<<"not prime";
       break;}
 else{
    cout<<"prime";
       break;}
       
}
/*if(flag==0)
 cout<<" prime";
 else
    cout<<" not prime";*/
 
 
    

    return 0;
}