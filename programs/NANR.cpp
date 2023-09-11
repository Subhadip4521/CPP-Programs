#include<iostream>

using namespace std;

void checkPrime();

int main(){
    checkPrime();
    return 0;
}
    



void checkPrime(){
    int n, flag=0;
    cout<<"Enter a positive integer: ";
    cin>>n;

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
    

}