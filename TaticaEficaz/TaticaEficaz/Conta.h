#pragma once
#include "pch.h"
class Conta
{
private:
	float x, y;
public:
	Conta();
	Conta(float x_,float y_);
	Conta(const Conta& a);
	virtual ~Conta();
	int numero;
	std::string nome;
	float saldo;
	void inicializa(std::string n, float s);
	void deposita(float valor);
	void consulta();
	int saque(float valor);
	void setX(float x_);
	float getX(void);
	void setY(float y_);
	float getY(void);
	Conta(float z, int w) {}

};
