#pragma once
#include "pch.h"
class TaticaEficaz2 {
private:
public:
	TaticaEficaz2();
	virtual ~TaticaEficaz2();
	int x1;
	int y;
	int res;
	int cont;
	float z,z1,z2;
	int soma(int a, int b);
	float divisao(float z1, float z2);
	void calculo();
	char opcao;
	char sair;
	struct cadastro {
		int id;
		float peso;
		int sequencia[5];
		int sequencia2[3][3][3];
	};
	cadastro cadastro2;
	void paridade(int x2);
	int binario[2];
	int calculo2;
	void listaDobro(int &resultado);
};