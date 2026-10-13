#include <stdio.h>
#include <locale.h>

int check(int A_pow, int B_pow, int C_pow);

int main(void) {
	setlocale(LC_CTYPE, "ru_RU.UTF-8");

	printf("Условие задачи:\n");
	printf("В игре три героя (A, B, C) атакуют босса. Их специальная способность 'Тройной удар' активируется, только если уровень силы каждого из них кратен трем. Запишите условие активации способности.\n");

	int A, B, C;
	int result;

	printf("Введите уровень силы героев:\n");
	printf("Сила героя A: ");
	scanf("%d", &A);

	printf("Сила героя B: ");
	scanf("%d", &B);

	printf("Сила героя C: ");
	scanf("%d", &C);

	result = check(A, B, C);

	if (result == 1) {
		printf("Специальная способность 'Тройной удар' активирована!\n");
	}
	else {
		printf("Активация не удалась (уровень силы не всех героев кратен 3).\n");
	}

	return 0;
}

int check(int A_pow, int B_pow, int C_pow) {
	int result;

	if (A_pow % 3 == 0 && B_pow % 3 == 0 && C_pow % 3 == 0) {
		result = 1; 
	}
	else {
		result = 0; 
	}

	return result; 
}