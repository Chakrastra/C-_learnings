
#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[],int key,int n){
    for(int i=0;i<n;i++){
        if(a[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int A[]={1,2,34,45,65,67,89,86,32,54,23,37,11,12,90};
    int key;
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int ans=linear_search(A,key,n);
    if(ans>-1)
        cout<<"The element is found at index: "<<ans;
    else
        cout<<"The element is not found in the array.";

    return 0;
}
