#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"enter the number :"<<endl;
    cin>>n;
    while(n){
       int l=n%10;
       count=count+l;
      
       n=n/10;}
       cout<<count;  
    
       // cout<<count;

    
    

    return 0;
}