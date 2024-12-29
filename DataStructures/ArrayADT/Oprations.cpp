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

int Get(struct Array arr,int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
        }
    
    return -1;
}

int Set(struct Array *arr,int index,int x){
    if(index>=0 && index< arr->length){
        arr->A[index]=x;
    }

}

int Max(struct Array arr){
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++){
        if (arr.A[i] > max)
        max = arr.A[i];
        }
    return max;
}
int Min(struct Array arr){
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++){
        if (arr.A[i] < min)
        min = arr.A[i];
        }
    return min;
}

int Sum(struct Array arr){
    int sum = 0;
    int i=0;
    for (i = 0; i < arr.length; i++){
        sum = sum + arr.A[i];
        
    }
    return sum;
}

float Avg(struct Array arr){
    int sum = 0;
    int i=0;
    for (i = 0; i < arr.length; i++){
        sum = sum + arr.A[i];
    }
    return sum/arr.length;
}
void Reverse(struct Array *arr){
    int i = 0, j = arr->length - 1;
    while (i < j) {
        int temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
        i++;
        j--;
        }
}
void InsertSort(struct Array *arr,int x){
    int i=arr->length-1;
    if(arr->length==arr->size)return;
    while(arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

int isSorted(struct Array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1])return 0;
    }
    return 1;
}

void Rearrange(struct Array *arr){
    int i = 0, j = arr->length-1;
    while (i < j) {
        if (arr->A[i] > 0) {
            i++;
        }
        else if (arr->A[j] < 0) {
                j--;
        }
        else {
                    int temp = arr->A[i];
                    arr->A[i] = arr->A[j];
                    arr->A[j] = temp;
        }
    }  
}

struct Array* Merge(struct Array *arr1,struct Array *arr2){
    int i = 0, j = 0, k = 0;
    struct Array *arr5=(struct Array *)malloc(sizeof(struct Array));


    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr5->A[k++]=arr1->A[i++];
            }
        else{
                arr5->A[k++]=arr2->A[j++];
            }   
    }

    for(;i<arr1->length;i++)
    arr5->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
    arr5->A[k++]=arr2->A[j];
    arr5->length=arr1->length+arr2->length;
    arr5->size=10;

    return arr5;
}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    struct Array arr2={{2,3,-3,-8,-4,5,-7,6,9},10,9};
    struct Array arr3={{2,6,10,15,25},10,5};
    struct Array arr4={{3,4,7,18,20},10,5};
    struct Array *arr5;
    cout<<Get(arr,4)<<endl;
    Set(&arr,4,10);
    cout<<Get(arr,4)<<endl;
    cout<<Max(arr)<<endl;
    cout<<Min(arr)<<endl;
    cout<<Sum(arr)<<endl;
    cout<<Avg(arr)<<endl;
    Reverse(&arr);
    Display(arr);
    cout<<endl;
    Reverse(&arr);
    InsertSort(&arr,15);
    Display(arr);
    cout<<endl<<isSorted(arr)<<endl;
    Rearrange(&arr2);
    Display(arr2);
    cout<<endl;
    arr5=Merge(&arr3,&arr4);
    Display(*arr5);
    

    return 0;
}