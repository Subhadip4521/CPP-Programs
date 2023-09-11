#include <bits/stdc++.h>

using namespace std;

void rev(string s)
{
    int flag=0;
    string temp = s;
    int len = s.length();
    
        for (int i = 0; i < len/2; i++)
        {
            if(s[i]==s[len]){
                
            }
        }

    if (flag == 1)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
}

int main()
{
    string s;
    cin >> s;

    rev(s);

    return 0;
}