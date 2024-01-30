#include <stdio.h>
#include <locale.h>

int sum_plus_elements (void)
{
	int sum, i = 0, array[10];
	while (i < 10)
	{
		scanf("%d", &array[i]);
		if (array[i] > 0)
		{
			sum += array[i];
		}
		i++;
	}
	return sum;
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите 10 целых чисел через пробел");
	printf("Данные на входе: ");
	printf("Данные на выходе: %d\n", sum_plus_elements());
	return 0;
}