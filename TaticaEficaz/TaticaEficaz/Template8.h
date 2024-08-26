#pragma once
#include "pch.h"
class Template8
{
public:
	int arr2[5] = { 1,2,3,4,5 };
	Template7<int>Array2;
	void generic6();
};
template<class X>// can replace 'class' keyword by "typename" keyword
X func(X a, X b)
{
	return a;
}
template<class A> class B111 {
public:
	A operator+(A);
};
template<class A> A B111<A>::operator+(A x) {
	return x;
};
template <class Temp>
class Calculator
{
private:
	Temp n1, n2;
public:
	Calculator(Temp num1, Temp num2)
	{
		n1 = num1;
		n2 = num2;
	}

	void show()
	{
		std::cout << "Addition is: " << n1 << "+" << n2 << "=" << addition() << std::endl;
		std::cout << "Subtraction is: " << n1 << "-" << n2 << "=" << subtraction() << std::endl;
		std::cout << "Product is: " << n1 << "*" << n2 << "=" << multiplication() << std::endl;
		std::cout << "Division is: " << n1 << "/" << n2 << "=" << division() << std::endl;
	}
	Temp addition() { return (n1 + n2); }

	Temp subtraction() { return n1 - n2; }

	Temp multiplication() { return n1 * n2; }

	Temp division() { return n1 / n2; }
};
//Class template with more than one parameter
template<class Temp1, class Temp2>
class Sample
{
	Temp1 l;
	Temp2 m;
public:
	Sample(Temp1 a, Temp2 b)
	{
		l = a;
		m = b;
	}
	void display()
	{
		std::cout << std::endl << "The inputs are: " << l << " and " << m << std::endl;
	}
};
template <class C>
class A111 {
private:
	C a;
	C b;
public:
	A111(C x, C y) {
		a = x;
		b = y;
	}
	void show()
	{
		std::cout << "The addition of" << a << "and" << b << "is" << add() << std::endl;
}
	C add() {
		C c = a + b;
		return c;
	}
};
// max returns the maximum of two elements of type T, where T is a class or data type for which operator > is defined.
template <class T>
T max2(T a, T b)
{
	return a > b ? a : b;
}