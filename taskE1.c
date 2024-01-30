#include <stdio.h>
#include <locale.h>

float middle_value (void)
{
	float sum;
	int i = 0, array[12];
	while (i < 12)
	{
		scanf("%d", &array[i]);
		sum += array[i];
		i++;
	}
	return sum/i;
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите 5 целых ненулевых чисел через пробел");
	printf("Данные на входе: ");
	printf("Данные на выходе: %.2f\n", middle_value());
	return 0;
}