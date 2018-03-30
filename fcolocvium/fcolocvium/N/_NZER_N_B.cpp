#include <stdlib.h>
#include <stdio.h>
#include "longNat.h"
#include "_NZER_N_B.h"

/*
Функция для проверки числа на ноль,
1 - не явл. нулем, 0 - явл. нулем, -1 - ошибка

Параметры:
1) a - Первое число

return: int
*/
int isZero(LNGNT x)
{
	int ans = 0;
	if (x.A)
	{
		for (int i = 0; i < x.n; i++)
			if (x.A[i] != 0)
				ans = 1;
	}
	else
	{
		printf("\nОшибка, числа не существует!\n");
		ans = -1;
	}

	return ans;
}
