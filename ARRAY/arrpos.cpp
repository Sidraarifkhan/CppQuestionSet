#include<iostream>
using namespace std;

int main(){
    int a[20];
    int pos= 0;
    int neg= 0;
    int zero= 0;
    int even= 0;
    int odd= 0;
    for(int i=0; i<20; i++)
    {
        cin>>a[i];
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
        else
            zero++;
        if(a[i]%2==0)
            even++;
        else
            odd++;
            }
cout<< "positive"<<pos<<endl<<"neg"<<neg<<endl<<"zero"<<zero<<endl<<"even"<<even<<endl<<"odd"<<odd<<endl;
    return 0;
}