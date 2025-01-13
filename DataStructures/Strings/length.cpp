#include<iostream>
using namespace std;

int main()
{
    string s = "welcome";
    int i;
    for(i=0; s[i] != '\0'; i++);
    cout<<"length of "<<s<<" is "<<i;

    return 0;

}