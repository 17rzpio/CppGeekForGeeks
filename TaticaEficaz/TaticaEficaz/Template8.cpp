#include "pch.h"
#include "Template8.h"
void Template8::generic6() {
	
	Array2.Array(arr2, 5);
	Array2.print();

	cout << func(15, 8) << endl;//func(int,int);
	cout << func('p', 'q') << endl;//func(char,char);
	cout << func(7.5, 9.2) << endl;//func(double,double);

	B111<char> ob1;
	B111<int> ob2;
	cout << ob1 + 'p' << endl;
	cout << ob2 + 10;
	
	cout << endl;

	Calculator<int> Calc1(25, 12);
	Calculator<float> Calc2(13.6, 5.9);

	cout << "Integer result for 25 and 12:" << endl;
	Calc1.show();

	cout << endl << "Float results for 13.6 and 5.9:" << endl;
	Calc2.show();

	// Driver function
	// instantiation
	Sample <int, char> ob3(24, 'A');

	// instantiation
	Sample<int, float> ob4(22.56, 24.9);

	// Calling the display function to see the output 
	ob3.display();
	ob4.display();

	A111<int>addint(8, 6);
	A111<float>addfloat(3.5, 2.6);
	A111<double>adddouble(3.156, 5.234);
	addint.show();
	cout << endl;
	adddouble.show();
	cout << endl;

	cout << "max(80, 95) = " << max2(80, 95) << endl;
	cout << "max('a', 'z') = " << max2('a', 'z') << endl;
	cout << "max(11.1, 18.2) = " << max(11.1, 18.2) << endl;
	cout << "max(\"rodrigo\", \"pioner\") = " << max2("rodrigo", "pioner") << endl;
	
}
