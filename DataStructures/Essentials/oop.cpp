#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
void initialize(int l,int b){
    length=l;
    breadth=b;
}
int area(){
    return length*breadth;
}
int perimeter(){
    return 2*(length + breadth);
}
};

int main()
{
    Rectangle r;
    int l,b;
    cout<<"Enter Length and Breadth: ";
    cin>>l>>b;

    r.initialize(l,b);
    int a=r.area();
    int peri=r.perimeter();
    cout<<"Area of Rectangle is "<<a<<endl;
    cout<<"Perimeter of Rectangle is "<<peri<<endl;

    return 0;
}