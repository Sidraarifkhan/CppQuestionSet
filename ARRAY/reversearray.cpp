#include<iostream>
using namespace std;

int main(){
    int a[6];
    for(int i=0;i<6;i++)
    {
        cout<<"the value of block "<<i<<" is "<< endl;
        cin>>a[i];


    }cout<<"the reverse order of this array is"<<endl;
    for(int i=5;i>=0;i--)
    {   
        cout<<a[i]<<endl;
    }

    return 0;
}