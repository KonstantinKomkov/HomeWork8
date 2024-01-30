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

int sort_array_last_number (int array[], int n) // Сортировка массива по последней цифре в элементе массива
{
	int value, i = n - 1;
	do
	{
		for (int j = 0; j < i; j++)
		{
			if (array[j]%10 > array[j+1]%10)
			{
				value = array[j];
				array[j] = array[j + 1];
				array[j + 1] = value;
			}
		}
		i--;
	} while (i >= 0);
	for (i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
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
	sort_array_last_number(array, 10);
	return 0;
}