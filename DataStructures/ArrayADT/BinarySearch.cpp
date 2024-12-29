#include<iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    cout<<"Elements in array are: "<<endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }   
}
int BinarySearch(struct Array arr, int key){
    int l = 0, h = arr.length - 1;
    while (l <= h) {
        int m = l + (h - l) / 2;
        if (arr.A[m] == key)
        return m;
        if (arr.A[m] < key)
        l = m + 1;
        else
        h = m - 1;
        }
        return -1;
}
int RBinSearch(int a[],int l,int h,int key){
    if(l<=h){
        int m = l + (h - l) / 2;
        if(a[m] == key)
            return m;
        if(a[m] < key)
            return RBinSearch(a, m + 1, h, key);
        else
            return RBinSearch(a, l, m - 1, key);
    }
    return -1;
}


int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    cout<<BinarySearch(arr,15)<<endl;
    cout<<RBinSearch(arr.A,0,arr.length-1,15)<<endl;
    Display(arr);

    return 0;
}