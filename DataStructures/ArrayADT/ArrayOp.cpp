#include "ArrayOp.h"
#include<iostream>
using namespace std;

void init(struct Array* arr, int size) {
    arr->size = size;
    arr->length = 0;
    arr->A = new int[size]; // Allocate memory dynamically
}

void display(struct Array arr){
    int i;
    cout<<"Elements in array are: "<<endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
        cout << endl;
 
}

void append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
    else {
        cout << "Array is full, cannot append more elements!" << endl;
    }
}

void insert(struct Array *arr, int index,int x){
    int i;
    if(index>=0 && index<=arr->length){
        for(i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
            }
            arr->A[index]=x;
            arr->length++;
    }
    else {
        cout << "Invalid index or array is full!" << endl;
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
    cout << "Invalid index!" << endl;
    return 0;
}

void freeArray(struct Array* arr) {
    delete[] arr->A;
    arr->A = nullptr;
}

