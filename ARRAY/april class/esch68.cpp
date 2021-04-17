#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){
        for(int j=1;j<=9;j++){
            int k;
            
            if(j>=(6-i) && j<=(4+i)){ k=6-j;
                if((j>5)  && j<=(4+i)){ k=j-4;}
               
            
                cout<<" "<<k<<" ";
                
            } else{
                cout<<"   ";
            }
            
           
        
        }
        cout<<endl;
    }

    return 0;
}