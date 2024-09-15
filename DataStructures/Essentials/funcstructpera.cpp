#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

void fun(struct Rectangle r){
    cout<<r.length<<" "<<r.breadth<<endl;
}

void fun2(struct Rectangle *r){
    r->length++;
}
struct Rectangle *fun3(){
    struct Rectangle *p;
    p = new Rectangle;

    p->length=17;
    p->breadth=19;
    return p;
}


int main()
{
    struct Rectangle r={10,5};
    fun(r);
    cout<<r.length<<" "<<r.breadth<<endl;

    //by address

    fun2(&r);
    cout<<r.length<<" "<<r.breadth<<endl;

    struct Rectangle *ptr=fun3();
    cout<<ptr->length<<" "<<ptr->breadth<<endl;

    return 0;
}