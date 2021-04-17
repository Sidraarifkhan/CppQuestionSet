#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i;
    int j,k;
    double p;
for(i=1;i<10000;i++){
    j=i;
    k=i;
p=0;
int count=0;
int d;
while(k){
    k=k/10;
    count++;}
//cout<<count<<endl;

while(j){
    d=j%10;
    
    p=p+pow(d,count);
    j=j/10;
}
if(p==i){
    cout<<i<<endl;

}}
    return 0;
}