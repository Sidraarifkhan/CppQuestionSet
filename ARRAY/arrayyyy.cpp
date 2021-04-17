#include<iostream>
using namespace std;

int main(){
    int marks[10];
    for(int a=0; a<=9; a++)
    {
        cout<<"enter the marks of each student";
        cin>>marks[a];
    }
    cout<<"The list of marks of students who have been qualified for this session are";
    for(int a=0; a<10; a++)
    {
        cout<<marks[a]<<endl;
    }
    return 0;
}