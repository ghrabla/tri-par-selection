#include <stdio.h>
#include <math.h>
int main()
{
	char Operator;
	float num1, num2, result = 0;
	
	printf("\n donner votre operateur (+, -, *, /, ^, !, %)  :  ");
  	scanf("%c", &Operator);
  	
	printf("\n  donner les Valeur : num1  num2  :  ");
  	scanf("%f%f", &num1, &num2);
  	
  	if(Operator == '+')
  	{
  		printf("\n la resultat de %.2f + %.2f  = %.2f", num1, num2, num1 + num2);
  	}
  	else if(Operator == '-')
  	{
  		printf("\n la resultat de %.2f - %.2f  = %.2f", num1, num2, num1 - num2);
  	}
  	else if(Operator == '*')
  	{
  		printf("\n la resultat de %.2f * %.2f  = %.2f", num1, num2, num1 * num2);
  	}
  	else if(Operator == '/')
  	{
  		printf("\n la resultat de %.2f / %.2f  = %.2f", num1, num2, num1 / num2);
  	}
//  	alos
  	else if(Operator == '^')
  	{
  		printf("\n la resultat de %.2f ^ %.2f  = %.2f  ", num1,num2,pow(num1,num2) );
  		
  	}
//  	RACINE
    else if(Operator == '!')
  	{
  		printf("\n la resultat de %.2f ! %.2f  = %.2f  ", num1,num2,sqrt(num1) );
  		
  	}
  	else if(Operator == '%')
  	{
  		printf("\n la resultat de %.2f % %.2f  = %.2f  ", num1,num2,fmod(num1,num2) );
  		
  	}
  	else
  	{
  		printf("\n impossible faire votre operateur ");
	}
	
  	return 0;
}
