#include "pch.h"
#include "Conta.h"
Conta::Conta() {
	x = 0;
	y = 0;
}
Conta::Conta(float x_=0,float y_=0) {
	x = x_;
	y = y_;
}
Conta::~Conta() {

}
Conta::Conta(const Conta& a) {
	x = a.x;
	y = a.y;
}
void Conta::inicializa(std::string n, float s) {
	nome = n;
	saldo = s;
	if (saldo < 0)
		cout << "Erro na criacao de conta!!!" << endl;
}
void Conta::deposita(float valor) {
	saldo += valor;
}
void Conta::consulta() {
	cout << "Cliente: " << nome << endl;
	cout << "Saldo atual: " << saldo << endl;
	cout << "Numero da conta: " << numero << endl;
}
int Conta::saque(float valor) {
	if (saldo < valor)
		return 0;
	else {
		saldo = saldo - valor;
		return 1;
	}
}
void Conta::setX(float x_) {
	x = x_;
}
float Conta::getX(void) {
	return x;
}
void Conta::setY(float y_) {
	y = y_;
}
float Conta::getY(void) {
	return y;
}