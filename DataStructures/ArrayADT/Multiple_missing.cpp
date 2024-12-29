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
    int diff=A[0]-0;
    cout<<endl;
    for (i = 0; i < length; i++)
    {  
        if(A[i]-i!=diff){
            while (diff<A[i]-i)
            {
                cout<<" "<<i + diff<<" ";
                diff++;
            }      
        }
        
    }  
    return -1;
}

int main()
{
    Array arr(20);
    arr.Append(1);
    arr.Append(2);
    arr.Append(3);
    arr.Append(4);
    arr.Append(5);
    arr.Append(7);
    arr.Append(8);
    arr.Append(9);
    arr.Append(12);
    arr.Append(13);
    arr.Append(14);
    arr.Display();
    arr.MissingEle();
    arr.Display();



    return 0;
}