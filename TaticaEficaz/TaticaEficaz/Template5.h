#pragma once
#include "pch.h"
template<class T>
class Template5 {
private:
	T num1, num2;
public:
	Template5(T n1, T n2) {
		num1 = n1;
		num2 = n2;
	}
	void displayResult(void);
	T add() { return num1 + num2; };
	T subtract() { return num1 - num2; };
	T multiply() { return num1 * num2; };
	T divide() { return num1 / num2; };
};