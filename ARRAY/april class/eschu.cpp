#include<iostream>
using namespace std;

int main(){
     for(int i=1;i<=7;i++){
          for(int j=1;j<=7;j++){
              if(j<=(8-i)){
                  cout<<(8-i-j);

              }
              else{
                  cout<<" ";
              }
        }
    cout<<endl;
     }
    return 0;
}