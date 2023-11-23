#include <stdio.h>
#include <stdbool.h>

void main() {

	//типізація, масив, для циклів і допоміжні зміні для пошуку рядку
	bool find_first_positive_string = true;
	int i = 0, j = 0, number_first_positive_string = 0;
	float array[5][10];

	//ведення елементів масиву
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("Element %d %d: ", (i + 1), (j + 1));
			scanf_s("%f", &array[i][j]);
		}
		//розділення
		printf("\n");
	}

	//пошук рядка з додатьними елементами
	for (i = 0; i < 5; i++)
	{
		//допоміжна зміна пошуку
		find_first_positive_string = true;

		//цикл пошуку
		for (j = 0; j < 10; j++) 
		{
			//якщо у рядку знайдено відємний елемент
			if (array[i][j] < 0.0) 
			{
				//надати домопіжній зміній значення хиба і вийти з внутрішнього циклу
				find_first_positive_string = false;
				break;

			}

		}

		//перевірка чи знайдено відємні елементи
		if (find_first_positive_string) 
		{
			//якщо так надати зміній рядок значення зовнішнього цикла + 1 і покинути зовнішній цикл
			number_first_positive_string = i + 1;
			break;

		}

	}

	//вивід результату
	printf("number of first string with only positive numbers: %d", number_first_positive_string);

	//повернення 0
	return 0;

}