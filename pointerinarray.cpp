#include<iostream>
using namespace std;

typedef struct employee
{
    int eID;
    char name;
    float salary;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
    ep harry;
    union money m;
    m.rice = 5;
    m.car = 'f';
    m.pounds = 54.98;
    harry.eID = 1;
    harry.name = 'h';
    harry.salary = 1500.8;
    

    
   cout<<"har"<<harry.eID<<endl;
   cout<<"har"<<harry.name<<endl;
   cout<<"har"<<harry.salary<<endl;
   cout<<"mon"<<m.car<<endl;
   cout<<"mon"<<m.pounds<<endl;
   cout<<"mon"<<m.rice<<endl;



    return 0;
}