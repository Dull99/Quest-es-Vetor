#include <stdio.h>
/*Faca um programa que preencha um vetor com seis elementos numericos inteiros. Calcule e mostre:
Å° todos os numeros pares;
Å° a quantida,de de numeros pares;
Å° todos os numeros impares;
Å° a quantidade de numeros impares.*/
int main(){
	int vet[6];
	int pares[6];
	int impares[6];
	int i, contP=0, contI=0;
		printf("Digite os numeros:\n");
	for(int i=0; i<6; i++){
	scanf("%d", &vet[i]);
	}
	for(int i=0; i<6; i++){
		if(vet[i]%2==0){
			pares[contP]=vet[i];
			contP++;
		}else{
			impares[contI]= vet[i];
			contI++;
		}	
	}
	
	printf("\n Os numeros pares sao:\n");
	for(int i=0; i<contP; i++){
		printf("Pares %d\n", pares[i]);
	}
	printf("A quantidade de numeros pares: %d\n", contP);
	
	printf("\n Os numeros impares:\n");
	for(int i = 0; i < contI; i++){
		printf("Impares: %d\n", impares[i]);
	}
	printf("A quantidade de numeros impares: %d\n", contI);
	
	return 0;
}
