#include<iostream>

using namespace std;

int addition(int a, int b){
    int add=a+b;
    return add;
}

void duplicate(int &a, int&b, int &c){
    a*=2;
    b*=2;
    c*=2;
}

int main(){
    int a;
    a=addition(5,2);
    cout<<"The addition is "<<a<<"\n";

    //type of return(int)=>> 0, EXIT_SUCCESS, EXIT_FAILURE

    int x=2,y=3,z=5;
    duplicate(x,y,z);
    cout<<"x: "<<x<<" y: "<<y<<" z: "<<z;
}