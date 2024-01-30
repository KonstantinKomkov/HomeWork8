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

int find_single_number (int array[], int n) // Поиск одинарных чисел
{
	int counter;
	for (int i = 0; i < n; i++)
	{
		counter = 0;
		for (int j = n - 1; j >= 0; j--)
		{
			if (array[i] == array[j])
			{
				counter++;
			}
			if (counter == 1 && j == 0) // Проверили весь массив и встретили только один раз число то печатаем его
			{
				printf("%d ", array[i]);
			}
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
	find_single_number(array, 10);
	return 0;
}