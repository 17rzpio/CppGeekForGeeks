#include "pch.h"
#include "Template6.h"
#include "Template7.h"
void Template6::generic3() {
	cout << myMax<int>(3, 7) << endl;
	cout << myMax<float>(3.7, 3.5) << endl;
}
void Template6::generic4() {
	a[0] = 10;
	a[1] = 50;
	a[2] = 30;
	a[3] = 40;
	a[4] = 20;
	n = sizeof(a) / sizeof(a[0]);
	bubbleSort<int>(a, n);
	cout << " Sorted array: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

}

void Template6::generic5() {
	int arr[5] = { 1,2,3,4,5 };
	

}
