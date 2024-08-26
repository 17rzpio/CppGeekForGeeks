#include "pch.h"
#include "Template2.h"
template<typename T>
void swap2(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}
template<typename T>void foo(T* x) {
	std::cout << "foo<" << typeid(T).name() << ">(T*)\n";
}
void foo(int x) {
	std::cout << "foo(int)\n";
}
void foo(double x) {
	std::cout << "foo(double)\n";
}


/*template<typename T>inline std::string stringfy(const T& x) {
	std::ostringstream out;
	out << x;
	return out.str();
}*/
/*template<class T, class B> struct Derived_from {
	static void constraints(T* p) { B* pb = p; }
	Derived_from() { void(*p)(T*) = constraints; }
};*/
/*template<class T1, class T2> struct Can_copy {
	static void constraints(T1 a, T2 b) { T2 c; c = a; b = a; }
	Can_copy() { void(*p)(T1, T2) = constraints; }
};*/
/*template<class T1, class T2 = T1> struct Can_compare {
	static void constraints(T1 a, T2 b) { a == b; a != b; a < b; }
	Can_compare() { void(*p)(T1, T2) = constraints; }
};*/
/*template<class T1, class T2, class T3 = T1> struct Can_multiply {
	static void constraints(T1 a, T2 b, T3 c) { c = a * b; }
	Can_multiply() { void(*p)(T1, T2, T3) = constraints; }
};*/
struct B{};
struct D:B{};
struct DD : D {};
struct X {};

template<typename Container, typename T>
bool contains(const Container& c, const T& val) {
	typename Container::iterator iter;
	iter = std::find(c.begin(), c.end(), val);
	return iter != c.end();
}

void Template2::trocar(void) {
	cout << "Digite a e b para trocar" << endl;
	cin >> a >> b;
	swap2(a, b);
	cout << "a e b trocados" << a << b;
	//foo2(a);
	//stringfy(a);
	foo(42);
	foo(42.0);
	foo("abcdef");
	/*Foo3<int> lhs(1);
	Foo3<int> rhs(2);
	Foo3<int> result = lhs + rhs;
	std::cout << result;*/

	//Derived_from<D, B>();
	//Derived_from<DD, B>();
	//Derived_from<X, B>();
	//Derived_from<int, B>();
	//Derived_from<X, int>();

	//Can_compare<int, float>();
	//Can_compare<X, B>();
	//Can_multiply<int, float>();
	//Can_multiply<int, float, double>();
	//Can_multiply<B, X>();

	//Can_copy<D*, B*>();
	//Can_copy<D, B*>();
	//Can_copy<int, B*>();

}
/*template<typename T>
void foo2(const T& x) {
	switch (typeof(T)) {
	case int:
		cout << "tipo inteiro" << endl;
		break;
	case std::string:
		cout << "tipo string" << endl;
		break;
	default:
		cout << "outro tipo" << endl;
		break;

	}
}*/

/*template<> inline std::string stringfy<bool>(const bool& x) {
	std::ostringstream out;
	out << std::boolalpha << x;
	return out.str();
}
template<> inline std::string stringfy<double>(const double& x) {
	const int sigdigits = std::numeric_limits<double>::digits10;
	std::ostringstream out;
	out << std::setprecision(sigdigits) << x;
	return out.str();
}
template<> inline std::string stringfy<float>(const float& x) {
	const int sigdigits = std::numeric_limits<float>::digits10;
	std::ostringstream out;
	out << std::setprecision(sigdigits) << x;
	return out.str();
}
template<> inline std::string stringfy<long double>(const long double& x) {
	const int sigdigits = std::numeric_limits<long double>::digits10;
	std::ostringstream out;
	out << std::setprecision(sigdigits) << x;
	return out.str();
}*/
