#include<iostream>
using namespace std;
//int product(int a, int b){
    //static int c=0;
    //c=c+1;
  //  return a*b+c;
//}
float moneyR(int Cmoney, float factor=1.04){
    return Cmoney*factor;

}
int main(){
    int money;
    cin>>money;
   // cin>>a>>b;
   // cout<<"product"<<product(a,b)<<endl;
    //cout<<"product"<<product(a,b)<<endl;
    //cout<<"product"<<product(a,b)<<endl;
    //cout<<"product"<<product(a,b)<<endl;
    cout<<money<<"interest"<<moneyR(money, 1.10);

    return 0;
}