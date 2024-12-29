#ifndef ARRAYOP_H
#define ARRAYOP_H

struct Array
{
    int *A;
    int size;
    int length;
};
void init(struct Array* arr, int size);
void display(struct Array arr);
void append(struct Array *arr, int x);
void insert(struct Array *arr, int index, int x);
int Delete(struct Array *arr, int index);
void freeArray(struct Array* arr);
#endif