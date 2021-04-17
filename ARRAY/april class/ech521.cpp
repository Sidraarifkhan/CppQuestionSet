#include<iostream>
using namespace std;

int main(){
    int n,i,flag=0;
    cout<<"enter the number" <<endl;
    cin>>n;

    for(i=2;i<n;i++){
        if(n%i==0)
        flag=1;
        break;
    }

    if(flag==0){
        cout<<"num is prime";
    }
    else
    {
        cout<<"num is not prime";
    }
    

    return 0;
}