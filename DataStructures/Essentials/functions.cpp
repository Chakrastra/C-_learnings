#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

void swap(int *a,int *b){
    int temp = *a;
    * a = *b;
    * b = temp;
}

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void fun(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void fun2(int *A,int n){
    A[0]=15;
}

int * fun3(int n){
    int *p;
    p = new int[n];

    for (int i = 0; i < n; i++)
    {
        p[i]=i+1;
    }

    return p;
    
}


int main()
{
    int num1=10;
    int num2=20;
    // int sum=add(num1,num2);

    // cout<<"Sum is "<<sum<<endl;
    // Address
    swap(&num1,&num2);

    cout<<num1<<endl;
    cout<<num2<<endl;

    //reference
    swap(&num1,&num2);

    cout<<num1<<endl;
    cout<<num2<<endl;

    // Array

    int A[]={2,4,6,8,10};

    int n =5;
    fun(A,n);
    fun2(A,n);

    for(int x:A){
        cout<<x<<" ";
    }
    cout<<endl;
    int *ptr;
    ptr = fun3(n);
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
        }
    return 0;
}