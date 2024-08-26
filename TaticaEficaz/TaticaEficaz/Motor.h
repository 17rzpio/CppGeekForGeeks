#pragma once
#include "pch.h"
class Motor : public Equipamento
{
	float potencia;
	float velocidade;
public:
	Motor();
	virtual ~Motor();
	void setPotencia(float _potencia);
	void setVelocidade(float _velocidade);
	float getPotencia(void);
	float getVelocidade(void);
	void increasePotencia(void);
	void increaseVelocidade(void);
	struct Garagem{
		int data;
		int codigo[3][3][3];
	};
	Garagem local;
};

