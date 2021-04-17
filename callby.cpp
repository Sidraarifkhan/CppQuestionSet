#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a=4, b=5;
    cout<<"the value of a"<<a<<"the b"<<b<<endl;
    swap(a,b);
    cout<<"the value of a"<<a<<"the b"<<b<<endl;


    

    return 0;
}