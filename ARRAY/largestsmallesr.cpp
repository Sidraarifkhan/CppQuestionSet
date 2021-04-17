#include<iostream>
using namespace std;

int main(){
    int a[5];
    int largest = INT16_MIN;
    int smallest= INT16_MAX;
    for(int i=0; i<5;i++){
        cout<<"enter the digits of array"<<endl;
        cin>>a[i];
    if(a[i]<smallest)
        smallest= a[i];
    if(a[i]>largest)
        largest= a[i];}
 
   cout<<"smallest"<<smallest<<endl;

   cout<<"largest"<<largest<<endl;
}