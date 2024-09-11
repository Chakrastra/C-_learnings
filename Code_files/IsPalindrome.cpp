#include<iostream>
using namespace std;

int main()
{
    int n,rev=0,r;
    cout<<"Enter number: ";
    cin>>n;
    int m=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if (rev==m)
    {
        cout<<"Palindrome ";
    }
    else
    {
        cout<<"Not a Palindrome ";
    }
    
    

    return 0;
}