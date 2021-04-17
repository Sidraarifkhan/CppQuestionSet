# include<iostream>
using namespace std;
int glo= 7;
void sum(){
    int glo=77;
    cout<<glo;
}
int main()
{
    int glo=65;
    int a= 1, b=2;
    float c=2.56;
    char d='f';
    bool f= false;
    cout<<"sun is hot"<<b<<"you are dumb"<<a<<"the fuv is \n"<<c<<"heyyy\n"<<d<<"\n" ;
    sum();
    cout<<"\n"<<glo<<"yes\n"<<f;
    return 0;
}