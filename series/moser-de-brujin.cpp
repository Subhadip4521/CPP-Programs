// 0 1 4 5 16 17 20 21 64 65 68 69 80 81 84

#include<bits/stdc++.h>
using namespace std;
void mdb(int num){
    int n1=0, n2 = 1, n3, n4;
    cout<<n1<<" "<<n2<<" ";
    num = num - 4;
    while(num--){
        n3 = 4 * n2;
        n4 = 4 * n2 + 1;
        cout<<n3<<" "<<n4<<" ";
        n2 = n3;
        n3 = n4;
    }
}
int main()
{
    int num;
    cin >> num;
    mdb(num);
    return 0;
}