#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

 // Lesson2Modul5HomeWork1547125597

void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 20;
	int arr[ind], i;

	for (i = 0; i < ind; i++)
	{
		arr[i] = 50 + rand() % 51;

		printf("A[%2d] = %2d \n", i, arr[i]);
	}

}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 8;
	int arr[ind], i;

	printf("\n  a.	убывающую последовательность \n\n");

	for (i = 0; i < ind; i++)
	{
		arr[i] = ind - i;
		
		printf("%d - ", arr[i]);
	}
	
	printf("\n\n  b.	возрастающую последовательность \n\n");

	for (i = 0; i < ind; i++)
	{
		arr[i] = i + 1;

		printf("%d - ", arr[i]);
	}

	printf("\n\n");
}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 10;
	int arr[ind], i, c=0, max=0;

	for (i = 0; i < ind; i++)
	{
		arr[i] = 0 + rand() % 40;

		printf("A[%d] = %d \n", i, arr[i]);
	}

	for (i = 0; i < ind; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			c = i;
		}
	}
	
	printf("\n\n Max - A[%d] = %d \n\n", c, max);

	arr[c] = arr[0];
	arr[0] = max;
	
	for (i = 0; i < ind; i++)
	{
		if (i == 0) printf(" - change A[%d] -> A[0] = %d \n", c, arr[i]);
		if (i != c && i !=0) printf("A[%d] = %d \n", i, arr[i]);
		if (i == c) printf(" - change A[0] -> A[%d] = %d \n", i, arr[i]);
	}
		

}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 15;
	int arr[ind], i, sum = 0;

	for (i = 0; i < ind; i++)
	{
		arr[i] = 1 + rand() % 15;

		printf("A[%2d] = %2d \n", i, arr[i]);
	}

	for (i = 0; i < ind; i++)
	{
		if (arr[i] > arr[0]) sum = sum + 1;
	}

	printf("\n\n Кол-во элементов массива, значения которых больше значения 1го элемента = %d \n\n", sum);
}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 15;
	int arr[ind], i, min = 0, max = 0;

	for (i = 0; i < ind; i++)
	{
		arr[i] = 1 + rand() % 15;

		printf("A[%2d] = %d \n", i, arr[i]);

		if (arr[i] > max)
		{
			max = arr[i];
			min = max;
		}
	}
	
	for (i = 0; i < ind; i++) 
		if (arr[i] < min) min = arr[i];

	printf("\n\n max = %d  min = %d \n", max, min);
	printf("\n max + min = %d \n", max + min);
	printf("\n max - min = %d \n", max - min);

}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 17;
	int arr[ind], i, sum = 0;

	for (i = 0; i < ind; i++)
	{
		arr[i] = 1 + rand() % 25;

		printf("A[%2d] = %2d \n", i, arr[i]);

		if (arr[i] % 2 != 0) sum = sum + arr[i];
	}

	printf("\n\n Заменa элементов кратных трем на сумму нечетных по значению элементов \n\n");

	for (i = 0; i < ind; i++)
	{
		if (arr[i] % 3 == 0) arr[i] = sum;
		printf("A[%2d] = %2d \n", i, arr[i]);
	}


}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 15;
	int arr[ind], i, sum = 0, x = 1, zero = 0;
	
	for (i = 0; i < ind; i++)
	{
		arr[i] = -5 + rand() % 15;

		printf("A[%2d] = %2d \n", i, arr[i]);
	}

	for (i = 0; i < ind; i++)
	{
		if (arr[i] < 0) sum++;

		else x *= arr[i];

		if (arr[i] == 0) zero++;
	}
		
	printf("\n - количество отрицательных - %d \n - произведение положительных - %d \n - количество нулевых элементов - %d \n\n", sum, x, zero);

}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 19;
	int arr[ind], i, sum = 0, sum1 = 0;

	for (i = 0; i < ind; i++)
	{
		arr[i] = -1 + rand() % 9;

		printf("A[%2d] = %2d \n", i, arr[i]);

		if (arr[i] < 0) sum += arr[i];
	}

	if (sum == 0) printf("\n Отрицательных элементов в массиве не найдено. \n");

	for (i = 0; i < ind; i++)
	{
		if (arr[i] >= 0) sum1 += arr[i];
		else break;
	}

	
	if (sum != 0 && arr[0] > 0) printf("\n Cумма элементов, расположенных до первого отрицательного элемента = %d \n\n", sum1);
	else printf("\n Первый элемент массива имеет отрицательное значение. \n\n");

}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	float M[12] = { 0 }, min=0, b;
	int i, buf=0;

	for (i = 0; i < 12; i++)
	{
		M[i] = float (-1 + rand() % 15) / (1 + rand() % 15);

		printf("M[%2d] = %5.2f \n", i, M[i]);
	}

	for (i = 0; i < 12; i++)
	{
		if (M[i] < min)
		{
			min = M[i];
			buf = i;
		}
	}

		printf("\n минимальное значение элемента массива - M[%2d] = %5.2f", buf, M[buf]); // можно не исползовать перемен buf, а сделать i-1

		b = M[12-1];

		M[12-1] = M[buf] * 3;

		M[buf] = b;

		printf("\n\n увеличили минимальный элемент в три раза и поменяли местами с последним : \n\n");

		for (i = 0; i < 12; i++) printf("M[%2d] = %5.2f \n", i, M[i]);
}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask10\n\n");
	printf("\n Дан массив М(15) вещественных чисел. Расположить элементы в обратном порядке \n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 15;
	int M[ind] = { 0 }, i, buf=0;

	for (i = 0; i < ind; i++)
	{
		M[i] = -1 + rand() % 15;
		
		printf("M[%2d] = %2d \n", i, M[i]);
	}

	printf("\n\n Расположение элементов массива в обратном порядке :\n\n");

	for (i = 0; i < ind/2; i++)
	{
		buf = M[i];

		M[i] = M[ind-1 - i];

		M[ind - 1 - i] = buf;
	}

	for (i = 0; i < ind; i++) printf("M[%2d] = %2d \n", i, M[i]);
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (10) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;
		case 10: {Task10(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");


}