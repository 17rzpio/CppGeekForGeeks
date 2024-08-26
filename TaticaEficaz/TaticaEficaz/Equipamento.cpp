#include "pch.h"
#include "Equipamento.h"
Equipamento::Equipamento() {

}
Equipamento::~Equipamento() {

}
void Equipamento::setNome(const char* _nome) {
	memcpy(&nome, _nome, 100);
}
void Equipamento::setFabricante(const char* _fabricante) {
	memcpy(&fabricante, _fabricante, 100);
}
void Equipamento::setPreco(float _preco) {
	preco = _preco;
}
char* Equipamento::getNome(void) {
	return nome;
}
char* Equipamento::getFabricante(void) {
	return fabricante;
}
float Equipamento::getPreco(void) {
	return preco;
}
ostream& operator << (ostream& out, Motor& B) {
	cout << B.getFabricante() << " " << B.getNome() << " " << B.getPotencia();
	return out;
};
void Equipamento::UsarCarro(void) {
	Motor m;
	m.setFabricante("Pioner");
	m.setPreco(8.5);
	m.setNome("zaleski");
	m.setPotencia(100);
	m.setVelocidade(200);
	cout << m.getFabricante() << "\n" << m.getPreco() << "\n" << m.getNome() << "\n" << m.getPotencia() << "\n" << m.getVelocidade() << endl;
	cout << m;
	do {
		sair = 0;
		printf("digite a opcao,p para estacionar ,m para marcha, t para turbo, digite e para sair\n");
		cin >> opcao;
		switch (opcao) {
		case 'm':
			marcha = 0;
			m.setVelocidade(0);
			while (marcha < 6) {
				cout << "marcha numero" << marcha << m.getVelocidade() << endl;
				m.increaseVelocidade();
				marcha++;
				if (marcha * m.getVelocidade() > (m.getPotencia() * 0.1))
					marcha = 6;
				else if (marcha * m.getVelocidade() > (m.getPotencia() * 0.095))
					printf("\nCarro proximo ao limite");
			}
			break;
		case 'p':
			cout << "Digite a data que vai estacionar";
			cin >> m.local.data;
			for (int i = 0; i < 3; i++) {
				printf("\nEstacionando no prédio %d", i);
				for (int j = 0; j < 3; j++) {
					printf("\nEstacionando no setor %d", j);
					for (int k = 0; k < 3; k++) {
						cout << "Estacionando na vaga " << k<<" digite o codigo do modelo do carro para estacionar";
						scanf_s("%d", & m.local.codigo[i][j][k]);
					}
				}
			}
			break;
		case 't':
			m.increasePotencia();
			printf("a nova potencia %f", m.getPotencia());
			break;
		case 'e':
			sair = 1;
			break;
		default:
			cout << "digite uma opcao valida" << endl;
		}
	} while (sair != 1);
}
