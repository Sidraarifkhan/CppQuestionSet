#include<iostream>
//#include<math.h>
using namespace std;

int main()
{

    
   /* int n;
    cout<<"Enter the Number";     //121      n=rev ;  
    cin>>n;
    int cpy=n;
    int cpy1=n;
    int count=0;
    while(n){
        count++;
        n=n/10;
    }
    int d;
    int rev=0;
    count--;
    cout<<"couunt"<<count<<endl;
    while (cpy)
    {
     /*   d=cpy%10;
        cout<<"digit"<<d<<endl;
        rev = rev + d*(pow(10,count));
        cout<<"somet"<< d*(pow(10,count))<<endl;
        cpy=cpy/10;
          count--;
        cout<<rev<<endl;*/
    
    // cout<<rev<<endl;
   /* if(cpy1==rev)
    cout<<"Number is Plaindrome";
    else
    cout<<"Number is not plaindrome";    
    return 0;*/

int n,rev=0,l;
 cout<<"Enter the Number";
    cin>>n;
int cpy=n;
while(n){
    l=n%10;
    rev=rev*10+l;
}
if(cpy==rev){
    cout<<"num id palindrome"<<endl;
}else{
    cout<<"num isn't palindrome";
}
 return 0; }8208