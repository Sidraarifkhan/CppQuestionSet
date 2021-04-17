#include<iostream>
using namespace std;

int main(){
    int a[5];
    int sum=0;
    int product=1;
     for(int i=0;i<5;i++)
     {
         cin>>a[i];
     }

  
        sum = a[0]+a[1]+a[2]+a[3]+a[4];
        product=a[0]*a[1]*a[2]*a[3]*a[4];
        cout<<"sum of each element of array is"<<sum<<endl;
        cout<<"product of each element of array is"<<product<<endl;
    

    return 0;
}