#include <stdio.h>

/*Imprime la tabla de Fahreinhet a Celsius*/

float GetCelsius(int fahr)
{
 fahr = (5.0/9.0)*(fahr-32);
 return fahr; 	
}

main()
{
	 int fahr=0;
	
	for (fahr; fahr<=300; fahr=fahr+20)
		printf("%3d%7.1f\n", fahr, GetCelsius(fahr));
	
}

