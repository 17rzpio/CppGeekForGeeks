#include "pch.h"
#include "Motor.h"
Motor::Motor() {

}
Motor::~Motor() {

}
void Motor::setPotencia(float _potencia) {
	potencia = _potencia;
}
void Motor::setVelocidade(float _velocidade) {
	velocidade = _velocidade;
}
float Motor::getPotencia(void) {
	return potencia;
}
float Motor::getVelocidade(void) {
	return velocidade;
}
void Motor::increasePotencia(void) {
	potencia += 10;
}
void Motor::increaseVelocidade(void) {
	velocidade += 50;
}