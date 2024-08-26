#include "pch.h"
#include "Banco.h"
Banco::Banco() {

}
Banco::~Banco() {

}
void Banco::UsarConta() {
	Conta MinhaConta;
	//Conta* OutraConta;

	MinhaConta.inicializa("Rodrigo", 10.25);
	//OutraConta->inicializa("Zaleski", 220.00);

	MinhaConta.deposita(12.75);
	MinhaConta.consulta();
	MinhaConta.saque(15.00);
	MinhaConta.consulta();

	//OutraConta->consulta();

	Conta v1;
	v1.setX(4.5);
	v1.setY(-1.4);
	cout << v1.getX() << " " << v1.getY() << endl;
	Conta v2(5.8, -3);
}
