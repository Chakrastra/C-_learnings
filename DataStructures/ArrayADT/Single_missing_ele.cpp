#include<iostream>
using namespace std;

class Array
{
private:
 int *A;
 int size;
 int length;

public:
Array(){
    size=10;
    length=0;
    A = new int[size];
}
Array(int s){
    size=s;
    length=0;
    A = new int[size];
}
~Array(){
    delete[] A;
}
void Display();
void Append(int x);
int MissingEle();
};

void Array::Display()
{
 int i;
 cout<<"\nElements are\n";
 for(i=0;i<length;i++)
 cout<<" "<<A[i];
}
void Array::Append(int x)
{
 if(length<size)
 A[length++]=x;
 
}

int Array::MissingEle(){
    int i=0;
    int diff=A[i]-i;
    for (i = 1; i < length; i++)
    {
        if(A[i]-i!=diff){
            return i + diff;
        }
    }
    return -1;
    
}
int main()
{
    Array arr(10);
    arr.Append(1);
    arr.Append(2);
    arr.Append(3);
    arr.Append(4);
    arr.Append(5);
    arr.Append(7);
    arr.Append(8);
    arr.Append(9);
    arr.Display();
    cout<<endl<<arr.MissingEle()<<endl;
    arr.Display();



    return 0;
}