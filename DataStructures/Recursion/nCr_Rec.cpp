#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
// int nCr(int n,int r){
//     int num, den;

//     num=fact(n);
//     den=fact(r)*fact(n-r);

//     return num/den;
// }
int nCr(int n,int r){
    if(r==0 || r==n)
        return 1;
    return nCr(n-1,r-1)+nCr(n-1,r);
}
int main()
{
    int a;
    a=nCr(5,1);
    cout<<a;


    return 0;
}