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
int Pairs(int k);
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

int Array::Pairs(int k){
    int i;
    int hash[20]={0}; //size of hash array should be Max of the arr
    for(i=0;i<length;i++){
        if(hash[k-A[i]]!=0 && A[i]<11)
            cout<<A[i]<<"+"<<k-A[i]<<"="<<k<<endl;   
        hash[A[i]]++;

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
    arr.Pairs(10);
    



    return 0;
}