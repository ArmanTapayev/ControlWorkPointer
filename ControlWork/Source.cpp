#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n;
	do
	{
		//printf("Работа содержит 13 заданий.\n");
		printf("Для выхода наберите 0.\n");
		printf("Введите номер задания: ");
		scanf("%d", &n);
		printf("\n");

		switch (n)
		{
		case 1:
		{
			/*22. Написать функцию, которая получает указатель на массив и его размер, 
			и возвращает сумму и произведение его элементов в двух параметрах-ссылках.*/
			int A[5], len = 5, maxN = 1, minN = 10, sum =0, mult=1;

			fillArrayInteger(A, &len, &minN, &maxN);
			printArray(A, &len);
			sumAndMult(A, &len, &sum, &mult);
			printf("Сумма sum = %d и произведение mult = %d элементов массива", sum, mult);

			printf("\n");
			system("pause");
			system("cls");

		}break;

		case 2:
		{
			/*23. Такую же функцию как и в 17 задании написать для многомерного массива 
			(подумать в 2 стороны: 1. Перегрузка функций; 2 Использование указетелей на функйии)
				a.	Типа int
				b.	Типа double
				c.	Типа Shor int
			*/	

			int A[2][4], row = 2, sum = 0, mult = 1;
			double B[2][4], sumD = 0, multD = 1;
			short int C[2][4], sumS = 0, multS = 1;

			
			printf("Массив А:\n");
			fillArrayMultDim(A, row);
			printArrayMultDim(A, row);
			printf("\n");

			printf("Массив B:\n");
			fillArrayMultDimDouble(B, row);
			printArrayMultDimDouble(B, row);
			printf("\n");

			printf("Массив C:\n");
			fillArrayMultDimShort(C, row);
			printArrayMultDimShort(C, row);
			printf("\n");

			sumAndMultDim(A, row, &sum, &mult);
			sumAndMultDim(B, row, &sumD, &multD);
			sumAndMultDim(C, row, &sumS, &multS);

			printf("Сумма sum = %d и произведение mult = %d элементов массива\n", sum, mult);
			printf("Сумма sum = %.3lf и произведение mult = %.3lf элементов массива\n", sumD, multD);
			printf("Сумма sum = %d и произведение mult = %d элементов массива\n", sumS, multS);

			printf("\n");
			system("pause");
			system("cls");
		}
		break;

		case 3:
		{
			/*24. Написать Функции для распечатки массивов, как одномерных, так и двумерных.*/
			int A[5], len = 5, maxN = 1, minN = 10;
			int B[2][4], row = 2;

			fillArrayInteger(A, &len, &minN, &maxN);
			printArray(A, &len);
			printf("\n");

			fillArrayMultDim(B, row);
			printArrayMultDim(B, row);
			printf("\n");

		}break;

		case 4:
		{
			/*25. Написать функцию, которая получает указатель на массив и его размер 
			(зармер при этом не передавать как число, а передавать как ссылку на последний элемент массива),
			и возвращает количество отрицательных, положительных и нулевых элементов массива, используя механизм ссылок.
			В данном задании обязательно необходимо использовать enum. (enum должен быть глобальным на все файлы,
			подумать как это можно сделать не объявляя его везде)*/

			int A[5], len = 5, maxN = -10, minN = 10, positive = 0, negative = 0, zero = 0;

			fillArrayInteger(A, &len, &minN, &maxN);
			printArray(A, &len);
			printf("\n");

			sumAndMult(A, &len, &positive, &negative, &zero);

			printf("Количество отрицательных = %d\n", negative);
			printf("Количество положительных = %d\n", positive);
			printf("Количество нулевых = %d\n", zero);

			printf("\n");
			system("pause");
			system("cls");


		}break;

		case 5:
		{
			/*26. Написать функцию, которая получает указатель на двумерный массив и его размер, и возвращает 
			среднее арифметическое элементов массива, а также количество чётных и нечётных элементов,
			используя механизм ссылок.*/

			int A[2][4], row = 2, even=0, odd=0;
			float aver;

			fillArrayMultDim(A, row);
			printArrayMultDim(A, row);
			printf("\n");

			averEvenOddDim(A, row, &aver, &even, &odd);

			printf("Cреднее арифметическое элементов массива = %0.2f\n", aver);
			printf("Kоличество чётных элементов массива even = %d\n", even);
			printf("Kоличество нечётных элементов массива odd = %d\n", odd);


		}break;

		case 6:
		{
			/*27. Создать функцию, позволяющую добавлять блок элементов в конец массива.*/

			int A[5], len = 5, maxN = 1, minN = 10, number;

			fillArrayInteger(A, &len, &minN, &maxN);
			printArray(A, &len);
			printf("\n");

			
			printf("Введите число:");
			scanf("%d", &number);
			printf("\n");

			addElement(A, &len, &number);


		}break;

		case 7:
		{
			/*28. Создать функцию, позволяющую вставлять блок элементов, начиная с произвольного индекса массива.*/
			int A[5], len = 5, maxN = 1, minN = 10, number=20, count=2;

			fillArrayInteger(A, &len, &minN, &maxN);
			printArray(A, &len);
			printf("\n");

			printf("Введите число и номер элемента: ");
			scanf("%d", &number);
			scanf("%d", &count);
			printf("\n");

			addElementAndNumber(A, &len, &number, &count);

			printf("\n");
			system("pause");
			system("cls");

		}break;

		case 8:
		{
			/*29. Создать функцию, позволяющую удалять блок элементов, начиная с произвольного индекса массива.*/

			int A[5], len = 5, maxN = 1, minN = 10, count;

			fillArrayInteger(A, &len, &minN, &maxN);
			printArray(A, &len);
			printf("\n");

			printf("Введите номер элемента: ");
			scanf("%d", &count);
			printf("\n");

			deleteElementAndNumber(A, &len, &count);

			printf("\n");
			system("pause");
			system("cls");


		}break;

		case 9:
		{
			/*30. Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b.
			Пользователь вводит a и b. Проиллюстрируйте работу функции примером.*/
			int a, b, sum;

			printf("Введите числа а и b: ");
			scanf("%d", &a);
			scanf("%d", &b);
			printf("\n");

			sum = sumElementsRec(a, b);
			printf("Сумма чисел: %d", sum);

			printf("\n");
			system("pause");
			system("cls");

		}break;

		case 10:
		{
			/*31. **Напишите функцию, которая принимает дату (день, месяц, год) и возвращает номер дня недели,
			которому соответствует эта дата. 1 – понедельник, 2 – вторник, 3 – среда, 4 – четверг, 5 – пятница, 6 – суббота, 7 – воскресенье.
			При этом функция должна возвращать значение enum. Пользователю же необходимо отобразить корректный тест, не число дня недели.
			( подумать как это можно реализовать. 
			Подумать в сторону: 
			1. Еще одна функция которая возвращает указатель на строку; 
			2. Вариант подумать над использованием массива со значения,
			   если учесть что при выводе enum-а, выводиться его порядковый номер)*/



		}

		case 11:
		{
			/*1.	Что такое указатель? Для чего они используются?
          Указатель — это переменная, значением которой является адрес некоторого объекта (обычно другой переменной) в памяти компь-ютера.
•	Указатели являются средством, с помощью которого функция может изменять значения передаваемых в нее аргументов. 
•	С помощью указателей выполняется динамическое распределение памяти. 
•	Указатели позволяют повысить эффективность многих процедур. И наконец, они обеспечивают поддержку динамических структур данных, таких, например, как двоичные деревья и связные списки.


2.	Какие операции допустимы с указателями?
Операция адресации: & 
         Знак &, за которым следует имя переменной, представляет адрес этой переменной. 

        Оператор размежевания: * 
        Если за знаком * следует имя или и адрес, то он передает значение, которое хранится по указанному адресу. 


3.	В чем различие между следующими объявлениями: c
onst int* ptr и int* const ptr?

    сonst int* ptr – это запрет модификации объекта.


4.	Что такое ссылка? Для чего они используются?

         Синонимом ссылки является указатель.


5.	Какими способами можно передать параметр внутрь функции?

         С помощью списка аргументов функции.
*/
		}break;

		}
	} while (n != 0);
}
