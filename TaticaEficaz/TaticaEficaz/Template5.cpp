#include "pch.h"
#include "Template5.h"
template<class T>
void Template5<T>::displayResult(void) {
	cout << "Numbers: " << Template5<T>::num1 << " and " << Template5<T>::num2 << "." << endl;
	cout << Template5<T>::num1 << " + " << Template5<T>::num2 << " = " << Template5<T>::add() << endl;
	cout << Template5<T>::num1 << " - " << Template5<T>::num2 << " = " << Template5<T>::subtract() << endl;
	cout << Template5<T>::num1 << " * " << Template5<T>::num2 << " = " << Template5<T>::multiply() << endl;
	cout << Template5<T>::num1 << " / " << Template5<T>::num2 << " = " << Template5<T>::divide() << endl;
}