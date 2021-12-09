#include <stdio.h>

int main ()
{
int firstNumber;
int secondNumber;

printf ("ingrese el primer valor: ");
scanf ("%d", &firstNumber);
printf ("ingrese el segundo valor: ");
scanf ("%d", &secondNumber);

int result = firstNumber +  secondNumber;
int resultR = firstNumber - secondNumber;
int resultM = firstNumber * secondNumber;
int resultD = firstNumber / secondNumber;

printf ("resultado: %d \n", result );
printf ("resultado resta: %d \n", resultR );
printf ("resultado multiplicacion: %d \n", resultM);
printf ("resultado division: %d \n", resultD);


return 0; 

}