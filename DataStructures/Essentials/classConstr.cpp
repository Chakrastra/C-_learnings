#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(){
    length = 0;
    breadth = 0;
    }
    Rectangle (int l,int b){
    length=l;
    breadth=b;
    }
    void setLength(int l){
        length = l;
    }
    void setBreadth(int b){
        breadth = b;
    }

    void getLength(){
        cout<<"Length of Rectangle is "<<length<<endl;
    }
    void getBreadth(){
        cout<<"Breadth of Rectangle is "<<breadth<<endl;
    }


    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
    ~Rectangle(){
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    int l,b;
    cout<<"Enter Length and Breadth: ";
    cin>>l>>b;

    Rectangle r(l,b);
    int a=r.area();
    int peri=r.perimeter();
    cout<<"Area of Rectangle is "<<a<<endl;
    cout<<"Perimeter of Rectangle is "<<peri<<endl;

    return 0;
}