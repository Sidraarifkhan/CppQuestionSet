#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x,l;
    double p;
  //  cout<<"enter the num"<<endl;
    //cin>>n;
    int cpy,cpy1;
     for(x=1;x<10000;x++){
     cpy=x;
     cpy1=x;
    int count=0;
     p=0;
    while(cpy){
        cpy=cpy/10;
        count++;
    }
   // cout<<count<<endl;

    while(cpy1){
        l=cpy1%10;
        
       // cout<<l<<endl;
        p=p+pow(l,count);
        // cout<<"p is:"<<p<<endl;
        cpy1=cpy1/10;
    }
    if(p==x){
        cout<<x   <<endl;
        }
    }
//    cout<<p<<endl;
   // if(cpy1==p)
    //cout<<"ARMSTRONG NUM"<<endl;
    //else
    //cout<<"num is not "<<endl;

    return 0;
}