#include <iostream>
#include "longNat.h"
#include "GCF_NN_N.h"
#include "MUL_NN_N.h"
#include "DIV_NN_N.h"
#include "LCM_NN_N.h"

using namespace std;

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
        cout << endl <<"Ошибка, числа не существует!" << endl;

    return ans;
}
