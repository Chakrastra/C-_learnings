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
void dup();
void cntdup();
void using_hash();
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

void Array::dup(){
    int lastdup=0;
    for(int i=0;i<length;i++){
        if(A[i]==A[i+1] && A[i]!=lastdup){
            cout<<" "<<A[i];
            lastdup=A[i];
        }
        cout<<endl;
    }
}

void Array::cntdup(){
 
    for(int i=0;i<length-1;i++){
        if(A[i]==A[i+1]){
            int j=i+1;
        while(A[j]==A[i])j++;
        cout<<" "<<A[i]<<"  is appearing "<<j-i<<" times."<<endl;
            i=j-1;
        }
    }
}
void Array::using_hash(){
    int i;
    int hash[20]={0}; //size of hash array should be Max of the arr
    for(i=0;i<length;i++){
    hash[A[i]]++;
    }
    for(i=0;i<20;i++){
    if(hash[i]>1){
    cout<<" "<<i<<"  is appearing "<<hash[i]<<" times."<<endl;
    }
    }
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
    arr.Append(8);
    arr.Append(12);
    arr.Append(12);
    arr.Append(14);
    
    arr.dup();
    arr.cntdup();
    arr.using_hash();
   



    return 0;
}