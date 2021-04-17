#include<iostream>
using namespace std;

int main(){
    int f,l,i,a;
    cout<<"enter first number: "<<endl;
    cin>>f;
    cout<<"enter last number: "<<endl;
    cin>>l;
    cout<<"numbers btw "<<f<< " and "<<l<<" are:"<<endl;
   
    // if(l>f){
    // for(i=f+1;i<l;i++)
    // cout<<i<<endl;  
    // }
    // else{
    // for(i=f-1;i>l;i--)
    // cout<<i<<endl;
    // }
    if(f>l){
        f=f+l;
        f=f-l;
        f=f-l;
        
    for(i=f+1;i<l;i++)
    cout<<i<<endl;
    }
    return 0;
}