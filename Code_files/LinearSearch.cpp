#include<iostream>
using namespace std;

int main()
{
    
    int A[10],n=10;

    cout<<"Enter Numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter Key: ";
    int key;
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        if(key==A[i]){
            cout<<"Key Found at "<<i<<" index";
            return 0;
        }
    }
    cout<<"Key Not Found";
    
    return 0;
}