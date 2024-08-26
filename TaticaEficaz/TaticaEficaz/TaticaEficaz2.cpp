#include "pch.h"
#include "TaticaEficaz2.h"
TaticaEficaz2::TaticaEficaz2() {

}
TaticaEficaz2::~TaticaEficaz2() {

}
void TaticaEficaz2::calculo() {
	sair = 0;
	res = 0;
	z = 0;
	do {
		cont = 0;
		printf("\tDigite s para somar, b de binario, e para sair e d para dividir:\n");
		scanf_s("%c", &opcao);
		switch (opcao) {
		case 's':
			printf("\tDigite valor a somar:\n");
			scanf_s("%d", &x1);
			while (cont <= 10) {
				res = soma(x1, cont);
				printf("\nResultado eh: %d ", res);
				paridade(res);
				cont++;
			}
			break;
		case 'd':
			printf("\nDigite valor a dividir:\n");
			scanf_s("%f", &z1);
			for (float i = 0; i <= 10; i++) {
				z = divisao(z1, i);
				printf("\nResultado eh: %f ", z);
			}
			break;
		case 'b':
			printf("\ndigite 1 ou 0 para ");
			scanf_s("%d", &binario[0]);
			scanf_s("%d", &binario[1]);
			if (binario[1] && binario[0])
				printf("AND = TRUE");
			if (binario[1] || binario[0])
				printf("OR = TRUE");
			if (!((binario[1] && binario[0]) || binario[0]))
				printf("negaco = TRUE");
			break;
		case 'e':
			sair = 1;
			break;
		default:
			printf("\tDigite uma opcao valida");
		}
	} while (sair == 0);
	printf("\nDeseja rever o resultado? ");
	cin >> opcao;
	if (opcao == 's') {
		printf("\nResultado eh: %d ", res);
		printf("\nResultado eh: %f ", z);
	}
	else {
		printf("terminou");
	}
	printf("Fazendo cadastro: digita codigo e peso\n");
	scanf_s("%d", &cadastro2.id);
	scanf_s("%f", &cadastro2.peso);
	printf("foi cadastrado codigo %d e peso %f", cadastro2.id, cadastro2.peso);
	printf("\ndigite a sequencia de anos de versoes do projeto");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d",&cadastro2.sequencia[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("anos de versoes do projeto %d", cadastro2.sequencia[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("Escola %d", i);
		for (int j = 0; j < 3; j++)
		{
			printf("Turma %d, digite o numero das materias ", j);
			for (int k = 0; k < 3; k++)
				scanf_s("%d", &cadastro2.sequencia2[i][j][k]);
		}
	}
	printf("exibindo os codigos: todos os assuntos de materias da escola");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 3; k++)
				printf("%d", cadastro2.sequencia2[i][j][k]);
	printf("digite valor a dobrar 5 vezes: ");
	scanf_s("%d", &calculo2);
	listaDobro(calculo2);

	printf("valores dobrados: %d",calculo2);
}
int TaticaEficaz2::soma(int a, int b) {
	return a + b;
}
float TaticaEficaz2::divisao(float z1, float z2) {
	return z1 / z2;
}
void TaticaEficaz2::paridade(int x2) {
	if (x2 % 2 == 0) {
		printf("par");
		return;
	}
	printf("impar");
	return;
}
void TaticaEficaz2::listaDobro(int& resultado) {
	for (int i = 0; i < 5; i++)
		resultado *= 2;
}