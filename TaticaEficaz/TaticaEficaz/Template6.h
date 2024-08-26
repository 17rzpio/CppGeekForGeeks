#pragma once
#include "pch.h"
class Template6
{
public:

	void generic3(void);
	template<typename T>
	T myMax(T x, T y)
	{
		return (x > y) ? x : y;

	}
	int swapVar;
	template<class T> void bubbleSort(T a[], int n) {
		for (int i = 0; i < n - 1; i++)
			for (int j = n - 1; i < j; j--)
				if (a[j] < a[j - 1]) {
					swapVar = a[j];
					a[j] = a[j - 1];
					a[j - 1] = swapVar;

				}
	}
	void generic4(void);
	int a[5];
	int n;
	void generic5();

};

