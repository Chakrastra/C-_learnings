#include<iostream>
using namespace std;


struct Rectangle
{
    int length;
    int breadth;
    

};
int main()
{
    Rectangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    Rectangle *p=&r;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    Rectangle *ptr;
    ptr = new Rectangle;

    ptr->length=15;
    ptr->breadth=20;

    cout<<ptr->length<<endl;
    cout<<ptr->breadth<<endl;

    return 0;
}