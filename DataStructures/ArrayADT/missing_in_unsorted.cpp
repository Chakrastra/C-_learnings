#include<iostream>
 
using namespace std;
 
int main(){
    int A[10]={3,7,4,9,12,6,1,11,2,10};
 
    int H[13]={};
    int l=1;
    int h=12;
 
   int n=sizeof(A)/sizeof(A[0]);
 
    for(int i=0;i<n;i++)
    {
        H[A[i]]++;
    }
    
    for(int i=l;i<=h;i++)
    {
        if(H[i]==0)
        {
            cout<<i<<" ";
        }
    }
    
}