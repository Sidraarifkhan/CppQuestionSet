#include<iostream>
using namespace std;
void  fire(void);
int sum(int t, int r);
int main(){
    int t,r,first,second;
    cout<<"gegeu"<<endl;
    cin>>t;
    cout<<"gegeu"<<endl;
    cin>>r;
    cout<<"sumdg"<<sum(t,r)<<endl;
    
    fire();




   /* cout<<"first"<<endl;
    cin>>first;
    cout<<"second"<<endl;
    cin>>second;
    cout<<"sun"<<sum(first, second)<<endl;
    cout<<(sum(f,g))*(sum(first, second)); */


    return 0;


}
int sum(int a, int b){
    int c = a+b;
    return c;
}

void fire(void)
{
    cout<<"hello, goodmorning";
}