#pragma once
#include "pch.h"
#include <iostream>
template <typename T> class Template7 {
	
	private:
		T* ptr;
		int size;
	public:
		void Array(T arr[], int s);
		void print();
	};
template <typename T> void Template7<T>::Array(T arr[], int s) {
	ptr = new T[s];
	size = s;
	for (int i = 0; i < size; ++i)
		ptr[i] = arr[i];
}

template <typename T> void Template7<T>::print() {
	for (int i = 0; i < size; ++i)
		std::cout << " " << *(ptr + i);
	std::cout << std::endl;
}
	



