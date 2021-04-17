#include<iostream>
using namespace std;

int main(){
    int sh,a,l,w,h,r,R,H;
    cout<<" select your shape :"<<endl<<"1. CUBE"<<endl<<"2. CUBOID"<<endl<<"3. SPHERE"<<endl<<"4. CYLINDER"<<endl;
    cin>>sh;
    switch(sh){
        case 1:
        cout<<"enter the side of the cube: "<<endl;
        cin>>a;
        cout<<"volume of the CUBE is : "<<a*a*a<<endl;
        break;

        case 2:
        cout<<"enter the length of cuboid: "<<endl;
        cin>>l;
        cout<<"enter the width of cuboid: "<<endl;
        cin>>w;
        cout<<"enter the height of cuboid: "<<endl;
        cin>>h;
        cout<<"volume of the CUBOID is: "<<2*(l+w+h)<<endl;
        break;
        case 3:
        cout<<"enter the radius of the sphere"<<endl;
        cin>>r;
        cout<<"volume of the SPHERE is: "<<3.14*4*r*r<<endl;
        break;

        case 4:
        cout<<"enter the radius of cylinder :"<<endl;
        cin>>R;
        cout<<"enter the height of cylinder :"<<endl;
        cin>>H;
        cout<<"volume if the CYLINDER is: "<<((2*3.14*R*H)+(2*3.14*R*R))<<endl;
        break;
        default:
        cout<<"INVALID";

    }


    return 0;
}