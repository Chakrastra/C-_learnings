#include<iostream>
using namespace std;


int main()
{
    int length=0;
    int breadth=0;

    cout<<"Enter Length and Breadth: ";
    cin>>length>>breadth;

    int area=length*breadth;
    int peri=2*(length+breadth);
    cout<<"Area of Rectangle is "<<area<<endl;
    cout<<"Perimeter of Rectangle is "<<peri<<endl;

    return 0;
}