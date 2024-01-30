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

int find_same_number (int array[], int n) // Поиск одинаковых чисел
{
	int number, counter, max = 0;
	for (int i = 0; i < n; i++)
	{
		counter = 0;
		for (int j = 0; j < n; j++)
		{
			if (array[i] == array[j])
			{
				counter++;
				if (counter > max)
				{
					number = array[i];
					max = counter;
				}
			}
		}
	}
	printf("Число - %d, количество - %d", number, max);
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
	find_same_number(array, 10);
	return 0;
}