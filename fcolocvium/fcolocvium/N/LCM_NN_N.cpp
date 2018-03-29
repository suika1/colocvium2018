#include <stdio.h>
#include "longNat.h"
#include "GCF_NN_N.h"
#include "MUL_NN_N.h"
#include "DIV_NN_N.h"
#include "LCM_NN_N.h"

NUMBN nokNumbN(NUMBN fNumb, NUMBN sNumb)
{
    NUMBN ans;
    if(fNumb.A && sNumb.A)
    {
        NUMBN nod = nodNumbN(fNumb, sNumb);
        if(fNumb.n >= sNumb.n)
            ans = multiplicationTwoNumb(DivNumbN(fNumb, nod), sNumb);
        else
            ans = multiplicationTwoNumb(fNumb, DivNumbN(sNumb, nod));
    }
    else
        printf("\nОшибка, числа не существует!\n");

    return ans;
}