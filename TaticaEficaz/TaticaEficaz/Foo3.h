#pragma once
#include "pch.h"
template<typename T> class Foo3;
template<typename T> Foo3<T> operator+ (const Foo3<T>& lhs, const Foo3<T>& rhs);
template<typename T> std::ostream& operator<< (std::ostream& o, const Foo3<T>& x);

template<typename T>
class Foo3 {
public:
	Foo3(const T& value = T());
	friend Foo3<T> operator+ <> (const Foo3<T>& lhs, const Foo3<T>& rhs);
	friend std::ostream& operator<< <> (std::ostream& o, const Foo3<T>& x);
	T value_;
};