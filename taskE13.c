#include <stdio.h>
#include <locale.h>

int input_array (int array[], int n) // Считывание массива
{
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &array[i]);
	}
	return 0;
}

int sort_array (int array[], int n) // Сортировка чисел массива без десятков
{
	for (int i = 0; i < n; i++)
	{
		if ((array[i]/10)%10 == 0)
		{
			printf("%d ", array[i]);
		}
	}
	return 0;
}

int main (void)
{
	int array[10];
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите 10 целых чисел через пробел");
	printf("Данные на входе: ");
	input_array(array, 10);
	printf("Данные на выходе: ");
	sort_array(array, 10);
	return 0;
}