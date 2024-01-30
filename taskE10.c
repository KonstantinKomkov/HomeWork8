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

int right_shift (int array[], int n) // Циклический сдвиг вправо на 4
{
	int i = 0;
	while (i < n)
	{
		if (i < 4)
		{
			printf("%d ", array[i+8]);
		}
		else
		{
			printf("%d ", array[i-4]);
		}
		i++;
	}
	return 0;
}

int main (void)
{
	int array[12];
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите 12 целых чисел через пробел");
	printf("Данные на входе: ");
	input_array(array, 12);
	printf("Данные на выходе: ");
	right_shift(array, 12);
	return 0;
}