#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;

    if (year%100==0)
    {
        if (year%400==0)
        {
            cout<<"It is a Leap Year."<<endl;
        }
        else
        {
            cout<<"It is not a Leap Year."<<endl;
        }
        
    }
    else if (year%4==0)
    {
        cout<<"It is a Leap Year."<<endl;
    }
    else
    {
        cout<<"It is not a Leap Year."<<endl;
    }
    
    
    

    return 0;
}