#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    

};
int main()
{
    // int a=10;
    // int *p;
    // p=&a;

    // cout<<a<<endl;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    // cout<<&a<<endl;

    int A[5]={2,3,5,7,9};

    int *p;
    p=A;
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    
    int *ptr;
    ptr=new int[5];
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;
    ptr[3]=40;
    ptr[4]=50;

    for (int i = 0; i < 5; i++)
    {
        cout<<ptr[i]<<" ";
    }
    
    // delete [] ptr;

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    return 0;
}