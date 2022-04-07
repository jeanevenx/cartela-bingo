#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool jaExiste(int cartela[10],int num_gerado ){
	bool existe = false;
	int cont;
	
	//Loop verificando se um determinado número já está na cartela
	for(cont=0; cont < 9; cont++){
		
		if(cartela[cont]==num_gerado)
		{
			existe = true;	
		}
	}
	return existe; 
}

int main() {
	setlocale(LC_ALL, "portuguese");
	int quantidade,Numeros, i, n;
	int bingo[10];
	
	srand(time(NULL));
	
	printf("Informa a quantidade de cartelas:");
	scanf("%d", &quantidade);
	
	
	for(i=0; i < quantidade; i++)
	{
		printf("Cartela número %d:\n", i+1);
		for(n=0; n < 10; n++)
		{
			Numeros =  rand() % 99;
		
			while(jaExiste(bingo,Numeros))
			{
				Numeros =  rand() % 99;		
			}
			
			bingo[n]= Numeros;
			printf("%d ", bingo[n]);	
		}
		
		
		printf("\n\n");
	}
	return 0;
}
