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

int half_array (int array[], int n) // Переворот половины элементов массива
{
	int i = 0;
	while (i < n)
	{
		if (i < n/2)
		{
			printf("%d ", array[4-i]);
		}
		else
		{
			printf("%d ", array[14-i]);
		}
		i++;
	}
	return 0;
}

int main (void)
{
	int array[10];
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите 10 целых элементов массива через пробел");
	printf("Данные на входе: ");
	input_array(array, 10);
	printf("Данные на выходе: ");
	half_array(array, 10);
	return 0;
}