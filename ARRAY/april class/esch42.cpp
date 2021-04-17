#include<iostream>
using namespace std;

int main(){
    int i,n,t;
    cout<<"enter the num "<<endl;
    cin>>n;
    cout<<" table of "<<n<<" is: "<<endl;
    for(i=1;i<=10;i++){
    t=n*i;
    cout<<n<<" * " <<i<<" = "<<t<<endl;
    }
    return 0;
}