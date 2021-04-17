#include<iostream>
using namespace std;
int sum(int a, int b){
    cout<<"firsttt"<<endl;
    return a+b;
}
int sum(float a, int b, int c){
    cout<<"secondddd"<<endl;
    return a+b+c;
}
int main(){ 

    cout<<sum(4,8)<<endl;
    cout<<sum(7,5,9)<<endl;
    cout<<sum(3,5,7);

    return 0;
}