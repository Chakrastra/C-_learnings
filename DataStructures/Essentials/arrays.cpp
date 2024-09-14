#include<iostream>
using namespace std;

int main()
{
    int A[5];
    A[0]=12;
    A[1]=15;
    A[2]=18;
    A[3]=21;
    A[4]=24;

    cout<<sizeof(A)<<endl;
    cout<<sizeof(A[4])<<endl;
    printf("%d\n",A[2]);

    int a[10]={2,4,6,8,10,12,14};
    int n =10;
    cout<<sizeof(a)<<endl;
    cout<<a[8]<<endl;
    printf("%d\n",a[9]);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    for(int x:a){
        cout<<x<<" ";
    }

    return 0;
}