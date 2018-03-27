#pragma once
void fillArrayInteger(int *arr, int *len, int *min, int *max);
void printArray(int *arr, int *len);
void sumAndMult(int *arr, int *len, int *sum, int *mult);
void fillArrayMultDim(int(*arr)[4], int row);
void printArrayMultDim(int(*arr)[4], int row);
void fillArrayMultDimDouble(double(*arr)[4], int row);
void printArrayMultDimDouble(double(*arr)[4], int row);
void fillArrayMultDimShort(short int(*arr)[4], int row);
void printArrayMultDimShort(short int(*arr)[4], int row);
void sumAndMultDim(int(*arr)[4], int row, int *sum, int *mult);
void sumAndMultDim(double(*arr)[4], int row, double *sum, double *mult);
void sumAndMultDim(short int(*arr)[4], int row, short int *sum, short int *mult);
void averEvenOddDim(int(*arr)[4], int row, float *aver, int *even, int *odd);
void addElement(int *arr, int *len, int *number);
void addElementAndNumber(int *arr, int *len, int *number, int *count);
void deleteElementAndNumber(int *arr, int *len, int *count);
int sumElementsRec(int a, int b);
void sumAndMult(int *arr, int *len, int *positive, int *negative, int *zero);

int *const ptr;
const int* ptr;