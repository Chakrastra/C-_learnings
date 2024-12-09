#include<iostream>
#include<algorithm>
using namespace std;
// 
int F[10];


int fib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1)
            F[n-2]=fib(n-2);
        if(F[n-1]==-1)
            F[n-1]=fib(n-1);
        F[n]=F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
}
int main()
{
    int a;
    // for (int i = 0; i < 10; i++)
    // {
    //     F[i]=-1;
    // }
    fill(F, F + 10, -1);
    a=fib(7);
    cout<<a;

    return 0;
}