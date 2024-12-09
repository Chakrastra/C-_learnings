#include<iostream>
using namespace std;

// int fun(int n){
//     if(n>0){
//         return n + fun(n-1);
//     }
//     return 0;
// }

int fun1(int n){
    static int x = 0;
    if(n>0){
        x++;
        return  fun1(n-1)+x;
    }
    return 0;
}
int main()
{
    int r;
    r = fun1(5);
    cout<<r;
    return 0;
}