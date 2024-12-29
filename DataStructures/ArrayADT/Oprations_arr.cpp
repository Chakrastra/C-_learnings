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

void append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

void Insert(struct Array *arr, int index,int x){
    int i;
    if(index>=0 && index<=arr->length){
        for(i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
            }
            arr->A[index]=x;
            arr->length++;
    }
}

int Delete(struct Array *arr, int index){
    int x=0;
    int i=0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int main()
{   struct Array arr={{2,3,4,5,6},20,5};
    
    append(&arr,7);
    Display(arr);
    Insert(&arr,2,12);
    Display(arr);
    cout<<Delete(&arr,2);
    Display(arr);


    return 0;
}