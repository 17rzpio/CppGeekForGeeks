#pragma once
#include "pch.h"
class Equipamento
{
	char nome[100];
	char fabricante[100];
	float preco;
public:
	Equipamento();
	virtual ~Equipamento();
	void setNome(const char* _nome);
	void setFabricante(const char* _fabricante);
	void setPreco(float _preco);
	char* getNome(void);
	char* getFabricante(void);
	float getPreco(void);
	void UsarCarro(void);
	char opcao;
	int sair;
	int marcha;
};


