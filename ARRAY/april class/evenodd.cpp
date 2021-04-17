#include<iostream>
using namespace std;

int main(){
    int i, sum1=0, sum2=0,n;
    cout<<"Enter the num:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum1=sum1+i;
            
           
        } 
        else{
            sum2=sum2+i;
           
        }

    }cout<<sum1<<endl;
     cout<<sum2<<endl;

    return 0;
}