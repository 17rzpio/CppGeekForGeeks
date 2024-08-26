#pragma once
#include "pch.h"
template<class T>
class Template3
{
private:
	T num;
public:
	//Template3();
	//virtual ~Template3();
	T getNum(void) { return num; };
	Template3(T n) :num(n) {}
};

