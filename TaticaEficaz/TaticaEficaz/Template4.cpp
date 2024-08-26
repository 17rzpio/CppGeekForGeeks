#include "pch.h"
#include "Template4.h"
void Template4::generic(void) {
	//create object with int type
	Template3<int> numberInt(7);

	//create object with double type
	Template3<double> numberDouble(7.7);

	cout << "int Number = " << numberInt.getNum() << endl;
	cout << "double Number = " << numberDouble.getNum() << endl;
}
void Template4::generic2(void) {
	/*Template5<int> intCalc(2, 1);
	Template5<float> floatCalc(2.4, 1.2);
	
	cout << "Int results: " << endl;
	intCalc.displayResult();

	cout << endl << "Float results: " << endl;
	floatCalc.displayResult();*/
}