#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"

void fillArrayInteger(int *arr, int *len, int *min, int *max)
{
	for (int i = 0; i < *len; i++)
		*(arr + i) = rand() * (*max - *min) / RAND_MAX + *min;
}

/* Вывод на печать целочисленного массива*/
void printArray(int *arr, int *len)
{
	//printf("Исходный массив:\n");
	for (int i = 0; i < *len; i++)
		printf("%d; ", *(arr + i));
	printf("\n");
}

void fillArrayMultDim(int(*arr)[4], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			*(*(arr + i) + j) = 1 + rand() % 5;
		}
	}

}

void printArrayMultDim(int(*arr)[4], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%3d ", *(*(arr + i) + j));
		}
		printf("\n");
	}

}

void fillArrayMultDimDouble(double(*arr)[4], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			*(*(arr + i) + j) = (double)(1 + rand() % 5);
		}
	}

}

void printArrayMultDimDouble(double(*arr)[4], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%3d ", *(*(arr + i) + j));
		}
		printf("\n");
	}

}

void fillArrayMultDimShort(short int(*arr)[4], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			*(*(arr + i) + j) = 1 + rand() % 5;
		}
	}

}

void printArrayMultDimShort(short int(*arr)[4], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%3d ", *(*(arr + i) + j));
		}
		printf("\n");
	}

}


/*22. Написать функцию, которая получает указатель на массив и его размер,
и возвращает сумму и произведение его элементов в двух параметрах-ссылках.*/

void sumAndMult(int *arr, int *len, int *sum, int *mult)
{
	for (int i = 0; i < *len; i++)
	{
		*sum += *(arr + i);
		*mult *= *(arr + i);
	}
}

/*23. Такую же функцию как и в 17 задании написать для многомерного массива
(подумать в 2 стороны: 1. Перегрузка функций; 2 Использование указетелей на функйии)
		a.	Типа int
		b.	Типа double
		c.	Типа Shor int
		*/

void sumAndMultDim(int(*arr)[4], int row, int *sum, int *mult)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			*sum += *(*(arr + i) + j);
			*mult*= *(*(arr + i) + j);
		}
		printf("\n");
	}

}

void sumAndMultDim(double(*arr)[4], int row, double *sum, double *mult)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			*sum += *(*(arr + i) + j);
			*mult *= *(*(arr + i) + j);
		}
		printf("\n");
	}

}

void sumAndMultDim(short int(*arr)[4], int row, short int *sum, short int *mult)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			*sum += *(*(arr + i) + j);
			*mult *= *(*(arr + i) + j);
		}
		printf("\n");
	}

}

/*25. Написать функцию, которая получает указатель на массив и его размер
(зармер при этом не передавать как число, а передавать как ссылку на последний элемент массива),
и возвращает количество отрицательных, положительных и нулевых элементов массива, используя механизм ссылок.
В данном задании обязательно необходимо использовать enum. (enum должен быть глобальным на все файлы,
подумать как это можно сделать не объявляя его везде)*/

void sumAndMult(int *arr, int *len, int *positive, int *negative, int *zero)
{
	for (int i = 0; i < *len; i++)
	{
		if (*(arr + i) > 0) *positive = *positive + 1;
		else if(*(arr + i) < 0) *negative = *negative + 1;
		else *zero = *zero + 1;

	}
}




/*26. Написать функцию, которая получает указатель на двумерный массив и его размер, и возвращает
среднее арифметическое элементов массива, а также количество чётных и нечётных элементов,
используя механизм ссылок.*/

void averEvenOddDim(int(*arr)[4], int row, float *aver, int *even, int *odd)
{
	int sum = 0, count=0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum += *(*(arr + i) + j);
			if (*(*(arr + i) + j) % 2 == 0)
				*(even)= *(even)+1;
			else
				*(odd) = *(odd)+1;
		count++;
		}
		
	}
	*aver = sum / count;
}

/*27. Создать функцию, позволяющую добавлять блок элементов в конец массива.*/
void addElement(int *arr, int *len, int *number)
{
	int A[100] = {};
	for (int i = 0; i < *len; i++)
	{
		*(A+i)=*(arr + i);
	}
	*(A + *len) = *number;
	for (int i = 0; i < 100; i++)
	{
		if (*(A + i) > 0)
			printf("%d; ",*(A + i));
	}		
}

/*28. Создать функцию, позволяющую вставлять блок элементов, начиная с произвольного индекса массива.*/
void addElementAndNumber(int *arr, int *len, int *number, int *count)
{
	int A[100] = {};

	for (int i = 0; i < *count; i++)
	{
		*(A + i) = *(arr + i);
	}

	*(A + *count) = *number;

	for (int i = *count; i < *len; i++)
	{
		*(A + *count + i) = *(arr + i);
	}

	for (int i = 0; i < 100; i++)
	{
		if (*(A + i) > 0)
			printf("%d; ", *(A + i));
	}

}

/*29. Создать функцию, позволяющую удалять блок элементов, начиная с произвольного индекса массива.*/
void deleteElementAndNumber(int *arr, int *len, int *count)
{
	int A[100] = {};

	for (int i = 0; i < *count; i++)
	{
		*(A + i) = *(arr + i);
	}

	for (int i = *count; i < *len; i++)
	{
		*(A + *count + i) = 0;
	}

	for (int i = 0; i < 100; i++)
	{
		if (*(A + i) > 0)
			printf("%d; ", *(A + i));
	}

}

/*30. Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b.
Пользователь вводит a и b. Проиллюстрируйте работу функции примером.*/
int sumElementsRec(int a, int b)
{
	if (a == b)
		return b;

	return a + sumElementsRec(a+1, b);
}