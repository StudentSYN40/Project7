#include<iostream>
#include<stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a=0;
	printf("Угадать число\n");
	while(a!=5)
	{
		printf("Введите число ");
		scanf("%i",&a);
		if(a>5)
		{
			printf("Меньше %i\n",a);
		}
		else
		{
			if(a<5)
			{
				printf("Больше %i\n",a);
			}
		}
	}
	printf("Отлично! Вы отгадали число.\n");
}