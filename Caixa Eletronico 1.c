#include <stdio.h>

int main() {
	
	int saque, notas;
	
	printf("Digite um valor para sacar: ");
	scanf("%d", &saque);
		
	printf("Valor do saque foi R$%d,00\n", saque);
	
	notas = saque/100;
	printf("Notas de R$100,00: %d\n", notas);
	saque = saque%100;
	notas = saque/50;
	printf("Notas de R$50,00: %d\n", notas);
	saque = saque%50;
	notas = saque/20;
	printf("Notas de R$20,00: %d\n", notas);
	saque = saque%20;
	notas = saque/10;
	printf("Notas de R$10,00: %d\n", notas);
	saque = saque%10;
	notas = saque/5;
	printf("Notas de R$5,00: %d\n", notas);
	saque = saque%5;
	notas = saque/2;
	printf("Notas de R$2,00: %d\n", notas);
	saque = saque%2;
	notas = saque/1;
	printf("Notas de R$1,00: %d\n", notas);

	getch();
	return 0;
}
