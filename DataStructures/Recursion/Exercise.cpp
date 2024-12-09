#include<iostream>
using namespace std;
/*
int f(int n)

{

static int i = 1;

    if(n>=5)
    return n;

    n = n+i;

    i++;

return f(n);
}
int main()
{
    int a=f(1);
    cout<<a;


    return 0;
}*/

/*
void foo (int n, int sum)
{

int k = 0, j = 0;
if (n == 0) return;
k = n % 10;
j = n/10;
sum = sum + k;
foo (j, sum);
cout<<k;
}

int main ()

{

int a = 2048, sum = 0;

foo (a, sum);

cout<<sum;

}*/

/*int f(int &x, int c) 
{
   c = c-1; 
if (c == 0) return 1; 
x = x + 1; 
return f(x,c)*x;
}
int main(){
    int p=5;
    int a=f(p,p);
    cout<<a;
}*/
/*int fun (int n)
{ 

int x=1, k; 

if (n==1) 
    return x; 

for (k=1; k<n; ++k) 
x=x+fun(k)*fun(n-k); 

return x;  
}
int main(){
    int a=fun(5);
    cout<<a;
}*/
void count(int n) 
{

 static int d = 1; 
printf("%d", n); 
printf("%d", d); 
d++; 
if (n > 1) count (n-1); 
printf("%d", d);
 } 

void main() {

  count (3);
} 

