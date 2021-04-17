#include<iostream>
using namespace std;

int main(){
    int digits[5];
    for(int i=0;i<5;i++)
    {
        cout<<"enter the marks"<<endl;
        cin>>digits[i];
        if (digits[i]>0)
            cout<<"num is positive"<<endl;
        else if(digits[i]<0)
            cout<<"num is negative"<<endl;
        else
            cout<<"num is zero"<<endl;
        if(digits[i]%2==0)
            cout<<"even num"<<endl;
        else
            cout<<"odd num"<<endl;

        
        
    }
        cout<<"the marks is"<<digits[4]<<endl;  
    return 0;
}