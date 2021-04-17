#include<iostream>
using namespace std;

int main(){                                 
    for(int i=1;i<=5;i++){
        int k=1;
        int cpy=1;
        for(int j=1;j<=9;j++){
            
             if(j>5){
                    k=((6-i)-cpy);
                cpy++;

             }
             else{
                 cout<<"";
             }
            
            if(j>=i && j<=(10-i)){
               
            
                cout<<k;
                k++;
                
            }
            else{
                cout<<" ";
            }
        
        }
        cout<<endl;

    }
    

    return 0;
}