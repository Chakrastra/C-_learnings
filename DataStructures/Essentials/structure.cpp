#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
    string user;

}r3,r4,r5;

struct Rectangle r2,r6;
int main()
{
    struct Rectangle r1={10,5,'V',"Vivek"};

    cout<<sizeof(r1);
    cout<<r1.breadth<<endl;
    cout<<r1.length<<endl;
    cout<<r1.x<<endl;
    cout<<r1.user<<endl;

    return 0;
}