#include<iostream>
using namespace std;

int main(){
    int cd,cm,cy,bd,bm,by,d;
    cout<<"enter the current date: "<<endl;
    cin>>"date: ">>cd>>" month: ">>cm>>" year: ">>cy;
    cout<<"enter date of your birth: "<<endl;
    cin>>"date: ">>bd>>" month: ">>bm>>" year: ">>by;

    if(cd>bd)
        d=cd-bd;
    else{
        d=30-(bd-cd);
        cm=cm-1;
    }
    cout<<cm<<d;
    
        
    
    
    


    return 0;
}