#include<iostream>
using namespace std;
int main()
{ 
  int age;
cout<<"Tell me your age"<<endl;
  cin>>age;
 // if (age<18 || age>45)
 // {
 //     cout<<"not allowed";
 // }
 // else if (age==18 || age==45)
 //// {
   //     cout<<"exception pass";
   // }
   // else
   // {
   //     cout<<"allowed";
   // }
   // 
   switch (age)
   {
    case 18:
        cout<<"you're 18"<<endl;
        break;
    case 22:
        cout<<"yoyou 22"<<endl;
       break;
    case 34:
        cout<<"you 34"<<endl;
        break;
   
   default:
        cout<<"no sp case";
       break;
   }
        return 0;
}
