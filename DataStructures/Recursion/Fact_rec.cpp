#include<iostream>
using namespace std;

int fact(int n){
    if(n<0){
        cout<<"Factorial of negative number doesn't exist"<<endl;
    }
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int a;
    a=fact(5);
    cout<<a;

    return 0;
}