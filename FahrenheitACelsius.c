/*Imprime la tabla de Fahreinhet a Celsius
 * Gomez Julian Ariel 153.605-9
 * 20150426
*/


#include <stdio.h>


float GetCelsius(int fahr)
{
 fahr = (5.0/9.0)*(fahr-32);
 return fahr; 	
}

main(void)
{
	int fahr=0;
	const int maximo=300;
	const int incremento=20;
	
	for (fahr; fahr<=maximo; fahr=fahr+incremento)
		printf("%3d%7.1f\n", fahr, GetCelsius(fahr));
	
}

