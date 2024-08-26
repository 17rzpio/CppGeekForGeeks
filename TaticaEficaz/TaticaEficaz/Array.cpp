#include "pch.h"
#include "Array.h"
template<typename T>
class Array {
public:
	Array(int len=10) : len_(len), data_(new T[len]){}
	~Array() { delete[] data_;	}
	int len()const { return len_; }
	const T& operator[](int i) const { return data_[check(i)]; }
	T& operator[](int i) { return data_[check(i)]; }
	Array(const Array<T>&);
	Array(Array<T>&&);
	Array<T>& operator=(const Array<T>&);
	Array<T>& operator= (Array<T>&&);
private:
	int len_;
	T* data_;
	int check(int i)const {
		assert(i >= 0 && i < len_);
		return i;
	}
};
