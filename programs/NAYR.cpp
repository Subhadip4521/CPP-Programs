#include<iostream>

using namespace std;

int checkPrime();

int main(){
    int n, flag=0;
    n= checkPrime();
    for(int i= 2; i<=n/2; i++){
        if(n%i==0){
            flag=1;
        }

    }
    if (flag==1){
        cout<<"The number is not a prime number.";
    }
    else{
        cout<<"The number is a prime number.";
    }
    return 0;
}
    



int checkPrime(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    return n;
}