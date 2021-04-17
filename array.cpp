#include<iostream>
using namespace std;

int main(){
    int marks[] = {56,78,98,35,22};
    int mathmarks[]={3445,87,864,9};
    /*cout<<marks[4]<<"\n";
    cout<<marks[0]<<endl;
    cout<<mathmarks[3];*/
   /* for (int i = 1; i < 5; i++)
    {
        cout<<"marks obtained by"<<i<<"is: "<<marks[i]<<endl;   
        cout<<"math marks:"<<i<<"is: "<<mathmarks[i]<<endl;
    }*/
   /* int i=1;
    while(i<5)
    { cout<<"marks obtained by"<<i<<"is: "<<marks[i]<<endl;
    cout<<"math marks:"<<i<<"is: "<<mathmarks[i]<<endl;
        i++;
    
    }*/
    int i=1;
    do{
        cout<<"marks"<<i<<"  is : "<<marks[i]<<endl;
        cout<<"maths marks"<<i<< "  is: "<<mathmarks[i]<<endl;
        i++; 
        }
    while (i<5);      
   

    return 0;
}