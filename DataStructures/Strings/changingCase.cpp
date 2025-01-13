#include<iostream>
using namespace std;

int main()
{
    string s = "welcome";
    int i;
    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i]>='s' && s[i] <='Z')
            s[i] += 32;
        else if(s[i]>='s' && s[i] <='z')
            s[i] -= 32;
    }
    cout<<"string is "<<s;

    return 0;

}