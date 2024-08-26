#pragma once
#include "Stl.h"
#include "pch.h"
// An interval has a start time and end time
struct Interval {
	int start, end;
};
class Stl
{
public:
	void generic7();
	std::vector<int> vec;
	int i;
	std::vector<int>::iterator v = vec.begin();
	std::pair<int, char>PAIR1;
	std::pair<int, char>PAIR3;
	std::pair<int, int>pair1;
	int a, b;
	int perimetro(int lado, int altura);
	std::pair<std::string, int>g1;
	void showlist(std::list<int> g);
	std::list<int> gqlist1, gqlist2;
	void showdq(std::deque<int> g);
	std::deque<int> gquiz;
	void showq(std::queue<int> gq);
	std::queue<int> gquiz2;
	void print_queue(std::queue<int> q);
	std::queue<int> q1;
	std::queue<int> q2;
	std::stack<int> s,s1;
	void showpq(std::priority_queue<int> gq);
	std::priority_queue<int> gquiz3;
	void showpq2(std::priority_queue<int, std::vector<int>, std::greater<int>> gq);
	std::priority_queue<int, std::vector<int>, std::greater<int>> gquiz4;
	
	std::set<char> a2;
	//empty set container
	std::set<int, std::greater<int>> s1b;
	
	int num;
	typedef std::pair<int, int> iPair;
	struct Triangle
	{
		int a, b, c;
	};
	void sort3(int& a, int& b, int& c);
	int countUniqueTriangles(struct Triangle arr[], int n);

	//empty multiset container
	std::multiset<int, std::greater<int>>gquiz1;

	//empty map container
	std::map<int, int> gquiz5;

	//for printing map gquiz5
	std::map<int, int>::iterator itr4;

	//for remove all elements with key = 4
	int num2;

	//empty multimap container
	std::multimap<int, int>gquiz7;

	//for printing multimap gquiz7
	std::multimap<int, int>::iterator itr5;

	//for remove all elements with key = 4
	int num3;

	//C++ code to demonstrate the working of sort_heap
	//Initializing a vector
	std::vector<int> v3;

	//C++ code to demonstrate the working of is_heap() and is_heap_until()
	//Initializing a vector
	std::vector<int> v4;

	//Declaring heap iterator
	std::vector<int>::iterator it1;

	//A C++ program to demonstrate working of sort(),reverse(). Initializing vector with array values
	int n1;

	//C++ program to demonstrate working of count() and find()
	//Initializing vector with array values
	int n2;

	//C++ program to demonstrate working of lower_bound() and upper_bound(). Initializing vector with array values
	int n3;

	//C++ program to demonstrate working of erase. Initializing vector with array values
	int n4;

	//C++ program to demonstrate working of next_permutation() and prev_permutation().Initializing vector with array values
	int n5;

	//C++program to demonstrate working of distance(). Initializing vector with array values
	int n6;

	//C++ program to demonstrate default behaviour of sort() in STL
	int n7;

	//C++ program to demonstrate descending order sort using greater<>()
	int n8;

	//C++ program to demonstrate sort()
	int n9;

	//An interval has a start time and end time
	struct Interval {
		int start, end;
	};

	//Compares two intervals according to starting times
	bool compareInterval(Interval i1, Interval i2);
	int n10;
	
	void show(int a[], int array_size);

	template <class T> class Comparator {
	public:
		bool operator()(T x1, T x2) {
			return x1 < x2;
		}
	};
	template <class T>bool funComparator(T x1, T x2) {
		//return type is bool
		return x1 <= x2;
	}

	//C++ program to demonstrate that we can use auto to save time when creating iterators
	std::set<std::string> st;
	
	//C++ program to demonstrate use of decltype
	int fun1();
	char fun2();

	//C++ program to demonstrate use of decltype
	int x3;

	//C++ program to demonstrate use of decltype in functions
	
	//C++ code to add two arrays
	int n11;

	//Using transform() in STL to add two arrays
	int n12;

	//C++ program to demonstrate working of transform with unary operator.
	int increment(int x);
	int n13;

	//C++ program to demonstrate working of Variadic function Template
	//To handle base of below recursive Variadic function Template
	void print();
	//Variadic function Template that takes variable number of arguments and prints all of them.
	template <typename T,typename... Types>
	void print(T var1, Types... var2) {
		std::cout << var1 << std::endl;
		print(var2...);
	}

	//Eg: Let us recall the concept of function overloading
	void show(int, int);
	void show(double, double);
	void show(char, char);

	//A generic sort function
	int swapVar;
	template<class T>
	void sort2(T arr[], int size) {
		for (int i = 0; i < size - 1; i++)
			for (int j = size - 1; i < j; j--)
				if (arr[j] < arr[j - 1]) {
					swapVar = arr[j];
					arr[j] = arr[j - 1];
					arr[j - 1] = swapVar;

				}
	}

	

	
	void printArray(int arr[], int size);

	int n14,n15;

	//Template specialization: A function specialized for char data type
//The size of count must be at the least the (max+1) but , we cannot assign declare it as int count(max+1) in C++ as it does not support dynamic memory allocation. So, its size is provided statically.

	int max;
	int output[10];
	int count2[10];
	template<>
	void sort2<char>(char arr[], int size) {

		
			//Find the largest element of the array
			for (int i = 1; i < size; i++)
				if (arr[i] > max)
					max = arr[i];
			//Initialize count array with all zeros.
			for (int i = 0; i <= max; ++i)
				count2[i] = 0;
			//Store the count of each element
			for (int i = 0; i < size; i++)
				count2[arr[i]]++;
			//Store the cummulative count of each array
			for (int i = 1; i <= max; i++) {
				count2[i] += count2[i - 1];
			}
			//Find the index of each element of the original array in count array, and place the elements in output array
			for (int i = size - 1; i >= 0; --i) {
				output[count2[arr[i]] - 1] = arr[i];
				--count2[arr[i]];
			}
			//Copy the sorted elements into original array
			for (int i = 0; i < size; ++i)
				arr[i] = output[i];
		
	}

	template<class T>
	void show2(T a, T b) {
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
	}

	template<class T>
	void getMax(T a, T b)
	{
		T result;
		result = (a > b) ? a : b;
		std::cout << std::endl << "Maximum:" << result;
	}

	template<class T>
	T getMax2(T a, T b) {
		T result;
		result = (a > b) ? a : b;
		return result;
	}

	int a3,b3;
	double d,x4,y4;

	//create a function template that prints the swap of two numbers.
	template<class T>
	void swap(T& a, T& b) {
		T temp;
		temp = a;
		a = b;
		b = temp;
	}

	template<class T>
	void fun(T a) {
		std::cout << "The main template fun():" << a << std::endl;
	}

	template<>
	void fun(int a) {
		std::cout << "Specialized Template for int type: " << a << std::endl;
	}

	template<class T>
	class Test2
	{
		//Data Members of test
	public:
		Test2() {
			//Initialization of data members
			std::cout << "General template object \n";
		}
		//Other methods of Test
	};

	template<>
	class Test2<int>
	{
	public:
		Test2() {
			//Initialization of data members
			std::cout << "Specialized template object \n";
		}
	};

	int myfun(int x, int y);
	int myfun2(int x, int y);
	int myfun3(int x, int y);
	int myfun4(int x, int y);
	//void myfun5(vector<int> vect);
	int sum;
	int var;

	void printFrequencies(const std::string& str);

	void printDuplicates(int arr[], int n);
	int n16;

	void printUset(std::unordered_multiset<int> ums);
	int val;

	void erase_one_entry(std::unordered_multiset<int>* ums, int val);
	void printUmm(std::unordered_multimap<std::string, int>umm);
	int cnt;

	int n17;

	// Compares two intervals according to starting times.
	bool compareInterval2(Interval i1, Interval i2);
	int n18;

	template<class T>
	class Comparator2 {
		//we pass an object of this class as third arg to sort function
	public:
		bool operator()(T x1, T x2) {
			return x1 < x2;
		}
	};

	template<class T> bool funComparator2(T x1, T x2) {
		//return type is bool
		return x1 <= x2;
	}

	void show3(int a[], int array_size);
	int asize;

	int partition2(int arr[], int start, int end);

	void quickSort(int arr[], int start, int end);

	void heapify(int arr[], int n, int i);

	void heapSort(int arr[], int n);

	void insertionSort(int arr[], int n);

	int sum2;

	int* pos;

	int count3;

	bool even(const int& value);
	bool prime(const int& value);
	
	bool compare(double a, double b);

	std::deque<int> mydeque;
	std::deque<int> mydeque2; // deque container declaration
	std::deque<std::string> mydeque3; // deque container declaration

	void aDecay(int* p);
	void pDecay(int(*p)[7]);

	void fun3(int(&p)[7]);

	std::array<int, 6> ar12;
	std::array<int, 0> ar13;

	std::forward_list<int> sample1;
	std::forward_list<int> sample2;
	std::forward_list<int> sample3;
	std::forward_list<int> sample4;

	std::forward_list<std::string> sample5;

	std::forward_list<char> sample6;

	int element;

	std::forward_list<int> sample7;
	std::forward_list<int>::iterator it29;
	std::forward_list<int>::iterator it30;

	std::forward_list<int> sample8;
	
	std::queue<int> myqueue;

	std::queue<char> queue1, queue2;

	std::queue<std::string> queueA;

	std::priority_queue<int> pqueue;
	std::priority_queue<int> pqueue2;
	std::priority_queue<char> pqueue3;
	std::priority_queue<std::string> pqueue4;
	std::priority_queue<std::pair<char, int>>pqueue5;
	std::priority_queue<int>::value_type AnInt;
	std::priority_queue<std::string>::value_type AString;

	int prime2, nonprime, size2;

	std::stack<int> mystack;
	std::stack<int> mystack2;

	std::set<int> myset;
	std::set<int> myset4;
	std::set<int> myset9;
	std::set<int> myset10;
	std::set<char> myset2;
	std::set<std::string> myset3;

	std::set<int>::iterator sit1, sit2;
	std::set<char>::iterator sit3, sit4;

	std::set<int>::reverse_iterator rit2;
	std::set<int>::reverse_iterator rit;
	std::set<int>::reverse_iterator rit3;

	std::set<int>::key_compare comp;

	std::set<int>::value_compare comp2;

	int start2, key3;

	template<class T>
	T merge2(T a, T b) {
		T t(a);
		t.insert(b.begin(), b.end());
		return t;
	}
	
	void input2(int* a);
	void output2(int* a);

	int* arr27;

	std::unordered_set<int> unorderedset;

	std::map<int, int> map_set;
	std::multimap<int, int> multimap_set;
	std::multiset<int> ms1;
	std::multiset<int> ms2;
	std::unordered_set<int> us1;
	std::unordered_map<int, int> um1;
	std::unordered_multiset<int> gfg;
	unsigned int max_elements;

	std::multiset<int>::iterator ms_iterator;
	
	std::multiset<int>::value_compare comp3;

	std::multiset<char> ms6;
	std::multiset<std::string> ms7;
	std::multiset<std::string> ms8;
	std::multiset<char> ms9;
	std::multiset<char> ms10;
	std::multiset<int> ms11;
	std::multiset<int> ms12;

	std::set<std::string>ms13;
	std::set<std::string>ms14;
	std::multiset<int>::reverse_iterator rit4;
	std::multiset<int> ms15;
	int* pointer;
	unsigned int w1;
	std::map<char, int> mymap;
	std::map<char, int> mymap2;
	std::map<char, int> mymap3;

	std::pair < std::map<char, int>::iterator, std::map<char, int>::iterator> it42;

	std::map<int, char>map1;
	std::map<int, char>map3;
	std::map<char, int>map2;

	std::map<char, int>::key_compare mycomp;
	std::map<char, int>::key_compare mycomp2;

	char highest;

	std::map<char, int>::iterator it43;

	std::multimap<int, std::string>map4;
	std::multimap<int, int>map5;
	//initialize container
	std::multimap<int, int>map6;
	//initialize container
	std::multimap<int, int>map7;
	//initialize container
	std::multimap<int, int>map8;
	std::multimap<int, int>map9;
	//declaring multimap
	std::multimap<char, int>mmap;
	// initialize container
	std::multimap<int, int>mp4;
	// initialize container
	std::multimap<int, int>mp5;
	// initialize multimap
	std::multimap<char, int>m1;
	std::multimap<char, int>m2;
	//iterator for iterate all elements of multimap
	std::multimap<char, int>::iterator iter;
	std::vector<int>vec16;
	//initialize container
	std::multimap<int, int>mp6;
	//initialize container
	std::multimap<int, int>mp7;
	std::multimap<int, int>mp9;
	std::multimap<int, int>mp10;
	std::multimap<int, int>mp11;
	std::multimap<int, int>mp12;
	//initialize container
	std::multimap<int, int>mp13;
	//initialize container
	std::multimap<int, int>mp14;
	//initialize container
	std::multimap<int, int>mp15;
	//initialize container
	std::multimap<int, int>mp16;
	//initialize container
	std::multimap<int, int>mp17;
	// Creating multimap of string and int
	std::multimap<std::string, int>mymultimap;
	std::multimap<char, int>m;
	std::multimap<char, int>m3;
	std::multimap<char, int>m4;
	std::multimap<char, int>::iterator i2;
	std::multimap<char, int>sample9;
	std::multimap<char, int>sample10;
	std::multimap<char, int>sample11;
	std::multimap<char, int>sample12;
	// initialize container
	std::multimap<int, int>mp8;
	// iterator for iterate all element of multimap
	std::multimap<char, int>::iterator iter2;
	// Creating a multimap named m;
	std::multimap<char, int>m5;
	std::multimap<char, int>::key_compare comp4;
	char l3;
	std::map<char, int>::iterator it53;

	std::unordered_set<std::string> mySet11;
	std::string myString;

	std::unordered_set<std::string> mySet12;
	std::array<std::string, 2> myArray;
	std::string myString2;
	//function to display the elements of the unordered_set
	void display_elements(std::unordered_set<int>& u_set);
	void display(std::unordered_multiset<int> s);

	std::unordered_set<int> u_set2;

	std::unordered_set<int> sampleSet;

	std::unordered_set<int> sampleSet2;

	std::unordered_set<int> sampleSet3;

	std::unordered_set<int> sampleSet4;

	std::unordered_set < std::string > sampleSet5;

	std::unordered_set < std::string > sampleSet6;

	std::unordered_set<int> sampleSet7;

	std::unordered_set<int> sampleSet8;

	std::unordered_set < std::string > sampleSet9;

	std::unordered_set<int> sampleSet10;

	std::unordered_set < std::string > sampleSet11;

	std::unordered_set<int> sampleSet12;

	// to store number of buckets
	int bucketCount;

	std::unordered_set < std::string > sampleSet13;

	// to store number of buckets
	int bucketCount2;

	std::unordered_set<int> sampleSet14;

	std::unordered_set < std::string > sampleSet15;

	std::unordered_set<int> arr31;
	std::unordered_set<int> arr32;
	std::unordered_set<int> arr33;
	std::unordered_set<int> arr34;

	std::unordered_set<int> sampleSet16;

	std::unordered_set < std::string > sampleSet17;

	// declaration
	std::unordered_set<int> sample13;
	// declaration
	std::unordered_set<int> sample14;
	//declaration
	std::unordered_set<int> uset;
	// declaration
	std::unordered_set<int> sample15;
	std::unordered_set<int> sample16;
	std::unordered_set<int> sample17;
	std::unordered_set<int> sample18;

	std::unordered_set < std::string > sampleSet18;
	std::unordered_set < std::string > sampleSet19;
	std::unordered_set < std::string > us2;
	std::unordered_set < std::string > us3;

	std::unordered_set<std::string>::hasher fn;
	std::unordered_set<std::string>::hasher fn2;

	std::unordered_set<int> sampleSet20;
	std::unordered_set<int> sampleSet21;
	// declaration
	std::unordered_set<int> sampleSet22;
	//declaration
	std::unordered_set<char> sampleSet23;
	//declaration
	std::unordered_set<std::string> us4;
	//declaration
	std::unordered_set<std::string> us5;
	std::unordered_set<int> uset2;
	std::unordered_set<int> uset3;
	
	std::unordered_set<int> uset4;
	std::unordered_set<int> uset5;

	// declaration
	std::unordered_set<int> sample18b;
	std::unordered_set<int> sample19b;
	std::unordered_set<int> sample20;

	//declaration
	std::unordered_set<std::string> ms16;
	bool res4;

	//declaration
	std::unordered_set<std::string> mp18;
	bool r;

	//declaration
	std::unordered_set<std::string> a14;
	std::unordered_set<std::string> b9;
	std::unordered_set<std::string> c;

	// declaration
	std::unordered_set<int> myset13;

	// declaration
	std::unordered_multiset<std::string> ums3;
	std::array<std::string,3> arr35;
	std::string str2;

	//declaration
	std::unordered_multiset<int> ums4;
	std::vector<int> x5;
	int val2;

	//declaration
	std::unordered_multiset<int> sample21;
	std::unordered_multiset<char> sample22;

	//declaration
	std::unordered_multiset<int> sample23;

	//declaration
	std::unordered_multiset<char> sample24;

	//declaration
	std::unordered_multiset<int> sample25;
	//declaration
	std::unordered_multiset<char> sample26;

	//declaration
	std::unordered_multiset<int> sample27;

	// declaration
	std::unordered_multiset<char> sample28;

	// declaration
	std::unordered_multiset<char> sample29;

	// declaration
	std::unordered_multiset<int> sample30;

	// declaration
	std::unordered_multiset<char> sample31;

	// declaration
	std::unordered_multiset<int> sample32;

	std::unordered_multiset<char> sample33;

	//declaration
	std::unordered_multiset<int> sample34;

	//declaration
	std::unordered_multiset<int> sample35;
	//std::unordered_multiset<char> sample36;

	//Define the unordered_set
	std::unordered_multiset<int> numbers;

	//Define the unordered_set
	std::unordered_multiset<int> num4;

	//Define the unordered_set
	std::unordered_multiset<int> s3;

	//Define the unordered_set
	std::unordered_multiset<int> s4;










};
template <class T>
T merge(T a, T b)
{
	T t(a);
	t.insert(b.begin(), b.end());
	return t;
}
class Point {
private:
	int x;
	int y;
public:
	Point(int i = 0, int j = 0) :x(i), y(j) {}
	//The above use of Initializer list is optional constructor can also be written as:
	//Point(int i=0,int j = 0){ x =i; y = j;}

	int getX() const { return x; }
	int getY() const { return y; }
};
class Test {
	const int t;
public:
	Test(int t) :t(t) {}//Initializer list must be used
	int getT() { return t; }
};
class TestA2 {
	int& tt;
public:
	TestA2(int& tt) :tt(tt) {}//Initializer list must be used
	int getTt() { return tt; }
};
/*class TestA3 {
	int i;
public:
	TestA3(int arg);
};
TestA3::TestA3(int arg) {
	i = arg;
	std::cout << "TestA3's Constructor called: Value of i: " << i << std::endl;
}
class TestA4 {
	TestA3 a;
public:
	TestA4(int x);
};
TestA4::TestA4(int x) :a(x) {
	std::cout << "TestA3's Constructor called";
}*/