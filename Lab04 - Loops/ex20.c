/*20)O programa que lê um numero inteiro positivo n e em seguida imprime n linhas( Triangulo de Floyd).
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/
#include <stdlib.h>
#include <stdio.h> 
int main(void) 
{ 
   	int i,j,n,m=1,acumula=1;
	printf("Digite o número de linhas:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",acumula);
			acumula++;
		}
  		m++;
		printf("\n");
	}

  	system("PAUSE");	
  	return 0;
}