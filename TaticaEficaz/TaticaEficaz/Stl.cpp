#include "pch.h"//diretiva do pré-processador
#include "Stl.h"
//A generic function which finds minium of two values return type is type of variable which is minium
template<class A, class B> auto findMin(A a2, B b2)->decltype(a2 < b2 ? a2 : b2) {
	return (a2 < b2) ? a2 : b2;
}
typedef unordered_multiset<int>::iterator umit;
// making typedef for short declaration
typedef unordered_multimap<string, int>::iterator unit;
void Stl::generic7() {
	/*cout << "vector size = " << vec.size() << endl;
	for (i = 0; i < 5; ++i)
		vec.push_back(i);

	cout << "extended vector size = " << vec.size() << endl;

	for (i = 0; i < 5; ++i)
		cout << "value of vec [" << i << "] = " << vec[i] << endl;

	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		++v;
	}*/
	PAIR1.first = 100;
	PAIR1.second = 'G';
	cout << PAIR1.first << " ";
	cout << PAIR1.second << endl;
	std::pair<std::string, double>PAIR2("Rodrigo", 1.23);
	cout << PAIR2.first << " ";
	cout << PAIR2.second << endl;
	cout << PAIR3.first;
	PAIR2 = make_pair("Pioner", 4.56);
	cout << PAIR2.first;
	std::pair<std::string, double>PAIR4("zaleski", 7.89);
	PAIR2.swap(PAIR4);
	cout <<endl<< PAIR2.first << PAIR4.second;
	pair1 = { 1,2 };
	//std::tie(a, b) = (pair1);
	cout << perimetro(2, 3);
	std::pair<std::string, int>g2("Quiz", 3);
	std::pair<std::string, int>g3(g2);
	std::pair<int, int>g4(5, 10);

	g1 = make_pair(std::string("eu"), 1);
	g2.first = ".com";
	g2.second = 2;

	cout << "This is pair g" << g1.second << " with " << "value " << g1.first << "." << endl;

	cout << "This is pair g" << g3.second << " with value " << g3.first << "This pair was initizalized as a copy of " << "pair g2" << endl;

	cout << "This is pair g" << g2.second << " with value " << g2.first << "\nThe values of this pair were" << " changed after initialization." << endl;

	cout << "This is pair g4 with values " << g4.first << " and " << g4.second << " made for showing addition. \nThe " << "sum of the values in this pair is" << g4.first + g4.second << "." << endl;

	cout << "We can concatenate the values of" << " the pairs g1,g2 and g3: " << g1.first + g3.first + g2.first << endl;

	cout << "We can also swap pairs " << "(but type of pairs should be same) : " << endl;
	cout << "Before swappting, " << "g1 has " << g1.first << " and g2 has " << g2.first << endl;
	swap(g1, g2);
	cout << "After swapping, " << "g1 has " << g1.first << " and g2 has " << g2.first;

	for (int i = 0; i < 10; ++i) {
		gqlist1.push_back(i * 2);
		gqlist2.push_front(i * 3);
	}
	cout << "\nList 1 (gqlist1) is : ";
	showlist(gqlist1);
	cout << "\nList2 (gqlist2) is : ";
	showlist(gqlist2);
	cout << "\ngqlist1.front() : " << gqlist1.front();
	cout << "\ngqlist1.back() : " << gqlist1.back();
	cout << "\ngqlist1.pop_front() : ";
	gqlist1.pop_front();
	showlist(gqlist1);

	cout << "\ngqlist2.pop_back() : ";
	gqlist2.pop_back();
	showlist(gqlist2);

	cout << "\ngqlist1.reverse() : ";
	gqlist1.reverse();
	showlist(gqlist1);

	cout << "\ngqlist2.sort(): ";
	gqlist2.sort();
	showlist(gqlist2);

	gquiz.push_back(10);
	gquiz.push_front(20);
	gquiz.push_back(30);
	gquiz.push_front(15);
	cout << "The deque gquiz is : ";
	showdq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.max_size() : " << gquiz.max_size();

	cout << "\ngquiz.at(2) : " << gquiz.at(2);
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop_front() : ";
	gquiz.pop_front();
	showdq(gquiz);

	cout << "\ngquiz.pop_back() : ";
	gquiz.pop_back();
	showdq(gquiz);

	gquiz2.push(10);
	gquiz2.push(20);
	gquiz2.push(30);

	cout << "The queue gquiz2 is : ";
	showq(gquiz2);

	cout << "\ngquiz2.size() : " << gquiz2.size();
	cout << "\ngquiz2.front() : " << gquiz2.front();
	cout << "\ngquiz2.back() : " << gquiz2.back();

	cout << "\ngquiz2.pop() : ";
	gquiz2.pop();
	showq(gquiz2);

	q1.push(1);
	q1.push(2);
	q1.push(3);

	cout << "The first queue is : ";
	print_queue(q1);

	q2.push(4);
	q2.push(5);
	q2.push(6);

	cout << "The second queue is : ";
	print_queue(q2);

	q1.swap(q2);

	cout << "After swapping, the first queue is : ";
	print_queue(q1);
	cout << "After swapping the second queue is : ";
	print_queue(q2);

	cout << q1.empty();

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout << "size of the stack " << s.size() << endl;
	cout << "the top of stack: " << s.top() << endl;
	s1 = s;
	while (!s1.empty()) {
		cout << s1.top() << endl;
		s1.pop();
	}

	gquiz3.push(10);
	gquiz3.push(30);
	gquiz3.push(20);
	gquiz3.push(5);
	gquiz3.push(1);

	cout << "The priority queue gquiz is : ";
	showpq(gquiz3);

	cout << "\ngquiz3.size() : " << gquiz3.size();
	cout << "\ngquiz3.top() : " << gquiz3.top();

	cout << "\ngquiz3.pop() : ";
	gquiz3.pop();
	showpq(gquiz3);

	gquiz4.push(10);
	gquiz4.push(30);
	gquiz4.push(20);
	gquiz4.push(5);
	gquiz4.push(1);

	cout << "The priority queue gquiz is : ";
	showpq2(gquiz4);

	cout << "\ngquiz4.size() : " << gquiz4.size();
	cout << "\ngquiz4.top() : " << gquiz4.top();

	cout << "\ngquiz4.pop : ";
	gquiz4.pop();
	showpq2(gquiz4);

	int arr[] = { 1,2,3 };// arr[0] = { 1 };
	//arr[1] = { 2 };
	//arr[3] = { 3 };

	std::priority_queue<int> pq1(arr, arr + 3);

	cout << "Max priority queue: ";
	while (pq1.empty() == false) {
		cout << pq1.top() << " ";
		pq1.pop();
	}
	cout << endl;

	for (int i = 0; i < 3; ++i)
		arr[i] = -arr[i];

	std::priority_queue<int> pq2(arr, arr + 3);

	cout << "Min priority queue: ";
	while (pq2.empty() == false) {
		cout << -pq2.top() << " ";
		pq2.pop();
	}

	a2.insert('R');
	a2.insert('Z');
	a2.insert('P');
	for (auto& str : a2) {
		std::cout << str << ' ';
	}
	std::cout << '\n';
	//insert elements in random order
	s1b.insert(40);
	s1b.insert(30);
	s1b.insert(60);
	s1b.insert(20);
	s1b.insert(50);
	//only one 50 will be added to the set
	s1b.insert(50);
	s1b.insert(10);

	//printing set s1
	std::set<int, std::greater<int>>::iterator itr2;
	cout << "\nThe set s1 is : \n";
	for (itr2 = s1b.begin(); itr2 != s1b.end(); itr2++)
		cout << *itr2 << " ";
	cout << endl;

	//assign the elements from s1 to s2
	std::set<int> s2(s1b.begin(), s1b.end());

	//print all elements of the set s2
	cout << "\nThe set s2 after assign from s1 is : \n";
	for (itr2 = s2.begin(); itr2 != s2.end(); ++itr2)
		cout << *itr2 << " ";
	cout << endl;

	//remove all elements up to 30 in s2
	cout << "\ns2 after removal of elements less than 30 : \n";
	s2.erase(s2.begin(), s2.find(30));
	for (itr2 = s2.begin(); itr2 != s2.end(); ++itr2)
		cout << *itr2 << " ";

	//remove elements with value 50 in s2
	num = s2.erase(50);
	cout << "\ns2.erase(50) : ";
	cout << num << " removed\n";
	for (itr2 = s2.begin(); itr2 != s2.end(); ++itr2)
		cout << *itr2 << " ";
	cout << endl;

	//lower bound and upper bound for set s1
	cout << "s1.lower_bound(40) : \n" << *s1b.lower_bound(40) << endl;
	cout << "s1.upper_bound(40) : \n" << *s1b.upper_bound(40) << endl;

	//lower bound and upper bound for set s2
	cout << "s2.lower_bound(40) :\n" << *s2.lower_bound(40) << endl;
	cout << "s2.upper_bound(40) :\n" << *s2.upper_bound(40) << endl;

	//driver program to test above function
	struct Triangle arr2[] = { {3,2,2},{3,4,5} };
	int n5 = sizeof(arr2) / sizeof(Triangle);

	cout << "Number of Unique Triangles are " << countUniqueTriangles(arr2, n5);

	//insert elements in random order
	gquiz1.insert(40);
	gquiz1.insert(30);
	gquiz1.insert(60);
	gquiz1.insert(20);
	gquiz1.insert(50);

	//50 will be added again to the multiset unlike set
	gquiz1.insert(50);
	gquiz1.insert(10);

	//printing multiset gquiz1
	std::multiset<int, std::greater<int>>::iterator itr3;
	cout << "\nThe multiset gquiz1 is : \n";
	for (itr3 = gquiz1.begin(); itr3 != gquiz1.end(); ++itr3)
		cout << *itr3 << " ";
	cout << endl;

	//assign the elements from gquiz1 to gquix4
	std::multiset<int> gquiz4(gquiz1.begin(), gquiz1.end());

	//print all elements of the multiset gquiz4
	cout << "\nThe multiset gquiz4 \n after assign from gquiz1 is : \n";
	for (itr3 = gquiz4.begin(); itr3 != gquiz4.end(); ++itr3)
		cout << *itr3 << " ";
	cout << endl;

	//remove all elements up to element with value 30 in gquiz4
	cout << "\ngquiz4 after removal of elements less than 30 : \n";
	gquiz4.erase(gquiz4.begin(), gquiz4.find(30));
	for (itr3 = gquiz4.begin(); itr3 != gquiz4.end(); ++itr3)
		cout << *itr3 << " ";

	//remove all elements with value 50 in gquiz4
	num = gquiz4.erase(50);
	cout << "\ngquiz4.erase(50) : \n";
	cout << num << " removed \n";
	for (itr3 = gquiz4.begin(); itr3 != gquiz4.end(); ++itr3)
		cout << *itr3 << " ";
	cout << endl;

	//lower bound and upper bound for multiset gquiz1
	cout << "\ngquiz1.lower_bound(40) : \n" << *gquiz1.lower_bound(40) << endl;
	cout << "gquiz1.upper_bound(40) : \n" << *gquiz1.upper_bound(40) << endl;

	//lower bound and upper bound for multiset gquiz4
	cout << "gquiz4.lower_bound(40) : \n" << *gquiz4.lower_bound(40) << endl;
	cout << "gquiz4.upper_bound(40) : \n" << *gquiz4.upper_bound(40) << endl;

	//insert elements in random order
	gquiz5.insert(std::pair<int, int>(1, 40));
	gquiz5.insert(std::pair<int, int>(2, 30));
	gquiz5.insert(std::pair<int, int>(3, 60));
	gquiz5.insert(std::pair<int, int>(4, 20));
	gquiz5.insert(std::pair<int, int>(5, 50));
	gquiz5.insert(std::pair<int, int>(6, 50));

	gquiz5[7] = 10;//another way of inserting a value in a map

	//printing map gquiz5
	cout << "\nThe map gquiz5 is : \n"<<"\tKEY\tELEMENT\n";
	for (itr4 = gquiz5.begin(); itr4 != gquiz5.end(); ++itr4)
		cout << '\t' << itr4->first << '\t' << itr4->second << '\n';
	cout << endl;

	//assign the elements from gquiz5 to gquiz6
	std::map<int, int>gquiz6(gquiz5.begin(), gquiz5.end());

	//print all elements of the map gquiz6
	cout << "\nThe map gquiz6 after assign from gquiz5 is : \n\tKEY\tELEMENT\n";
	for (itr4 = gquiz6.begin(); itr4 != gquiz6.end(); ++itr4)
		cout << '\t' << itr4->first << '\t' << itr4->second << '\n';
	cout << endl;

	//remove all elements up to element with key=3 in gquiz6
	cout << "\ngquiz6 after removal of elements less than key=3 : \n\tKEY\tELEMENT\n";
	gquiz6.erase(gquiz6.begin(), gquiz6.find(3));
	for (itr4 = gquiz6.begin(); itr4 != gquiz6.end(); ++itr4)
		cout << '\t' << itr4->first << '\t' << itr4->second << '\n';

	//remove all elements with key = 4
	num2 = gquiz6.erase(4);
	cout << "\ngquiz6.erase(4) : " << num2 << " removed \n\tKEY\tELEMENT\n";
	for (itr4 = gquiz6.begin(); itr4 != gquiz6.end(); ++itr4)
		cout << '\t' << itr4->first << '\t' << itr4->second << '\n';
	cout << endl;

	//lower bound and upper bound for map gquiz5 key = 5
	cout << "gquiz5.lower_bound(5) : \tKEY = ";
	cout << gquiz5.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = " << gquiz5.lower_bound(5)->second << endl;
	cout << "gquiz5.upper_bound(5) : \tKEY = ";
	cout << gquiz5.upper_bound(5)->first << '\t';
	cout << "\tELEMENT = " << gquiz5.upper_bound(5)->second << endl;

	//CPP Program to demonstrate the implementation of multimap
	//Driver Code

	//insert elements in random order
	gquiz7.insert(std::pair<int, int>(1, 40));
	gquiz7.insert(std::pair<int, int>(2, 30));
	gquiz7.insert(std::pair<int, int>(3, 60));
	gquiz7.insert(std::pair<int, int>(6, 50));
	gquiz7.insert(std::pair<int, int>(6, 10));

	//printing multimap gquiz7
	cout << "\nThe multimap gquiz7 is : \n\tKEY\tELEMENT\n";
	for (itr5 = gquiz7.begin(); itr5 != gquiz7.end(); ++itr5)
		cout << '\t' << itr5->first << '\t' << itr5->second << '\n';
	cout << endl;

	//adding elements randomly, to check the sorted keys property
	gquiz7.insert(std::pair<int, int>(4, 50));
	gquiz7.insert(std::pair<int, int>(5, 10));

	//printing multimap gquiz7 again
	cout << "\nThe multimap gquiz7 after adding extra elements is : \n\tKEY\tELEMENT\n";
	for (itr5 = gquiz7.begin(); itr5 != gquiz7.end(); ++itr5)
		cout << '\t' << itr5->first << '\t' << itr5->second << '\n';
	cout << endl;

	//assigning the elements from gquiz7 to gquiz8
	std::multimap<int, int>gquiz8(gquiz7.begin(), gquiz7.end());

	//print all elements of the multimap gquiz8
	cout << "\nThe multimap gquiz8 after assign from gquiz7 is : \n\tKEY\tELEMENT\n";
	for (itr5 = gquiz8.begin(); itr5 != gquiz8.end(); ++itr5)
		cout << '\t' << itr5->first << '\t' << itr5->second << '\n';
	cout << endl;

	//remove all elements up to key with value 3 in gquiz8
	cout << "\ngquiz8 after removal of elements less than key=3 : \n\tKEY\tELEMENT\n";
	gquiz8.erase(gquiz8.begin(), gquiz8.find(3));
	for (itr5 = gquiz8.begin(); itr5 != gquiz8.end(); ++itr5)
		cout << '\t' << itr5->first << '\t' << itr5->second << '\n';

	//remove all elements with key = 4
	num3 = gquiz8.erase(4);
	cout << "\ngquiz8.erase(4) : " << num3 << " removed \n\tKEY\tELEMENT\n";
	for (itr5 = gquiz8.begin(); itr5 != gquiz8.end(); ++itr5)
		cout << '\t' << itr5->first << '\t' << itr5->second << '\n';
	cout << endl;

	//lower bound and upper bound for multimap gquiz7 key = 5
	cout << "gquiz7.lower_bound(5) : \tKEY = ";
	cout << gquiz7.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = " << gquiz7.lower_bound(5)->second << endl;
	cout << "gquiz7.upper_bound(5) : \tKEY = ";
	cout << gquiz7.upper_bound(5)->first << "\t\tELEMENT = " << gquiz7.upper_bound(5)->second << endl;

	//C++ code to demonstrate the working of make_heap(), front()
	//Initializing a vector
	

	std::vector<int> v1={20,30};
	//Converting vector into a heap using make_heap()
	make_heap(v1.begin(), v1.end());

	//Displaying the maxium element of heap using front()
	cout << "The maxium element of heap is : " << v1.front() << endl;

	//C++ code to demonstrate the working of push_heap() and pop_heap()
	//Initializing a vector
	std::vector<int> v2 = { 20,30,40,25,15 };

	//Converting vector into a heap using make_heap()
	make_heap(v2.begin(), v2.end());

	///Displaying the maxium element of heap using front()
	cout << "The maxium element of heap is : " << v2.front() << endl;

	//using push_back() to enter element in vector
	v2.push_back(50);

	//using push_heap to reorder elements
	push_heap(v2.begin(), v2.end());

	//Displaying the maxium element of heap using front()
	cout << "The maxium element of heap after push is : " << v2.front() << endl;

	//using pop_heap() to delete maxium element
	pop_heap(v2.begin(), v2.end());
	v2.pop_back();

	//Displaying the maxium element of heap using front()
	cout << "The maxium element of heap after pop is : " << v2.front() << endl;

	//C++ code to demonstrate the working of sort_heap()
	//Initializing a vector
	v3.push_back(20);
	v3.push_back(30);
	v3.push_back(40);
	v3.push_back(25);
	v3.push_back(15);

	//Converting vector into a heap using make_heap()
	make_heap(v3.begin(), v3.end());

	//Displaying heap elements
	cout << "The heap elements are : ";
	for (int& x : v3)
		cout << x << " ";
	cout << endl;

	//sorting heap using sort_heap()
	sort_heap(v3.begin(), v3.end());

	//Displaying heap elements
	cout << "The heap elements after sorting are : ";
	for (int& x : v3)
		cout << x << " ";


	//C++ code to demonstrate the working of is_heap() and is_heap_until()
	//Initializing a vector
	v4.push_back(40);
	v4.push_back(30);
	v4.push_back(25);
	v4.push_back(35);
	v4.push_back(15);

	//Checking if container is heap using is_heap()
	is_heap(v4.begin(), v4.end()) ? cout << "The container is heap " : cout << "The container is not heap";
	cout << endl;

	//using is_heap_until() to check position till which container is heap
	auto it = is_heap_until(v4.begin(), v4.end());

	//Displaying heap range elements
	cout << "The heap elements in container are : ";
	for (it1 = v4.begin(); it1 != it; ++it1)
		cout << *it1 << " ";

	//A C++ program to demonstrate working of sort(), reverse()
	//Initializing vector with array values
	int arr3[] = { 10,20,5,23,42,15 };
	n1 = sizeof(arr3) / sizeof(arr3[0]);
	std::vector<int> vect(arr3, arr3 + n1);

	cout << "Vector is: ";
	for (int i = 0; i < n1; ++i)
		cout << vect[i] << " ";

	//Sorting the Vector in Ascending order
	sort(vect.begin(), vect.end());

	cout << "\nVector after sorting is: ";
	for (int i = 0; i < n1; ++i)
		cout << vect[i] << " ";

	//Sorting the Vector in Descending order
	sort(vect.begin(), vect.end(), std::greater<int>());

	cout << "\nVector after sorting in Descending order is: ";
	for (int i = 0; i < n1; ++i)
		cout << vect[i] << " ";

	//Reversing the Vector (descending to ascending, ascending to
	reverse(vect.begin(), vect.end());

	cout << "\nVector after reversing is: ";
	for (int i = 0; i < n1; ++i)
		cout << vect[i] << " ";

	cout << "\nMaxium element of vector is: " << *max_element(vect.begin(), vect.end());
	
	cout << "\nMinimum element of vector is: " << *min_element(vect.begin(), vect.end());

	//Starting the summation from 0
	cout << "\nThe summation of vector elements is: " << accumulate(vect.begin(), vect.end(), 0);

	//C++ program to demonstrate working of count() and find()
	//Initializing vector with array values
	int arr4[] = { 10,20,5,23,42,20,15 };
	n2 = sizeof(arr4) / sizeof(arr4[0]);
	std::vector<int>vect2(arr4, arr4 + n2);

	cout << "Occurrences of 20 in vector : ";

	//Counts the occurrences of 20 from 1st to last element
	cout << count(vect2.begin(), vect2.end(), 20);

	//find() returns iterator to last address if element not present
	find(vect2.begin(), vect2.end(), 5) != vect2.end() ? cout << "\nElement found" : cout << "\nElement not found";

	//C++ program to demonstrate working of lower_bound() and upper_bound(). Initializing vector with array values
	int arr5[] = { 5,10,15,20,20,23,42,45 };
	n3 = sizeof(arr5) / sizeof(arr5[0]);
	std::vector<int> vect3(arr5, arr5 + n3);

	//Sort the array to make sure that lower_bound() and upper_bound() work.
	sort(vect3.begin(), vect3.end());

	//Returns the first occurrence of 20
	auto q = lower_bound(vect3.begin(), vect3.end(), 20);

	//Returns the last occurence of 20
	auto p = upper_bound(vect3.begin(), vect3.end(), 20);

	cout << "The lower bound is at position: " << q-vect3.begin() << endl;
	cout << "The upper bound is at position: " << p - vect3.begin() << endl;

	//C++ program to demonstrate working of erase. Initializing vector with array values
	int arr6[] = { 5,10,15,20,20,23,42,45 };
	n4 = sizeof(arr6) / sizeof(arr6[0]);
	std::vector<int>vect4(arr6, arr6 + n4);

	cout << "Given Vector is:\n";
	for (int i = 0; i < n4; ++i)
		cout << vect4[i] << " ";

	vect4.erase(find(vect4.begin(), vect4.end(), 10));
	cout << "\nVector after erasing element:\n";
	for (int i = 0; i < vect4.size(); ++i)
		cout << vect4[i] << " ";

	vect4.erase(unique(vect4.begin(), vect4.end()), vect4.end());
	cout << "\nVector after removing duplicates:\n";
	for (int i = 0; i < vect4.size(); ++i)
		cout << vect4[i] << " ";

	//C++ program to demonstrate working of next_permutation() and prev_permutation().Initializing vector with array values
	int arr7[] = { 5,10,15,20,20,23,42,45 };
	n5 = sizeof(arr7) / sizeof(arr7[0]);
	std::vector<int>vect5(arr7, arr7 + n5);

	cout << "Given Vector is:\n";
	for (int i = 0; i < n5; ++i)
		cout << vect5[i] << " ";

	//modifies vector to its next permutation order
	next_permutation(vect5.begin(), vect5.end());
	cout << "\nVector after performing next permutation:\n";
	for (int i = 0; i < n5; ++i)
		cout << vect5[i] << " ";

	prev_permutation(vect5.begin(), vect5.end());
	cout << "\nVector after performing prev permutation:\n";
	for (int i = 0; i < n5; ++i)
		cout << vect5[i] << " ";

	//C++program to demonstrate working of distance(). Initializing vector with array values
	int arr8[] = { 5,10,15,20,20,23,42,45 };
	n6 = sizeof(arr8) / sizeof(arr8[0]);
	std::vector<int>vect6(arr8, arr8 + n6);

	//Return distance of firat to maximum element
	cout << "Distance between first to max element: " << distance(vect6.begin(), max_element(vect6.begin(), vect6.end()));

	//C++ program to demonstrate default behaviour of sort() in STL
	int arr9[] = { 1,5,8,9,6,7,3,4,2,0 };
	n7 = sizeof(arr9) / sizeof(arr9[0]);

	//Here we take two parameters, the beginning of the array and the length n upto which we want the array to be sorted
	sort(arr9, arr9 + n7);

	cout << "\nArray after sorting using default sorte is : \n";
	for (int i = 0; i < n7; ++i)
		cout << arr9[i] << " ";

	//C++ program to demonstrate descending order sort using greater<>()
	int arr10[] = { 1,5,8,9,6,7,3,4,2,0 };
	n8 = sizeof(arr10) / sizeof(arr10[0]);

	sort(arr10, arr10 + n8, std::greater<int>());

	cout << "Array after sorting : \n";
	for (int i = 0; i < n8; ++i)
		cout << arr10[i] << " ";

	//C++ program to demonstrate sort()
	int arr11[] = { 0,1,5,8,9,6,7,3,4,2 };
	n9 = sizeof(arr11) / sizeof(arr11[0]);

	//Sorte the elements which lies in the range of 2 to (n-1)
	sort(arr11 + 2, arr11 + n9);

	cout << "Array after sorting : \n";
	for (int i = 0; i < n9; ++i)
		cout << arr11[i] << " ";

	//A C++ program to demonstrate STL sort() using our own comparator
	Interval arr12[] = { {6,8},{1,9},{2,4},{4,7} };
	n10 = sizeof(arr12) / sizeof(arr12[0]);

	//sort the intervals in increasing order of start time
	//sort(arr12, arr12 + n10, compareInterval(arr12[0],arr12[1]));

	cout << "Intervals sorted by start time : \n";
	for (int i = 0; i < n10; i++)
		cout << "[" << arr12[i].start << "," << arr12[i].end << "] ";

	int a[] = { 1,5,8,9,6,7,3,4,2,9 };
	int asize = sizeof(a) / sizeof(int);
	cout << "The array before sorting is : ";
	show(a, asize);
	cout << endl << "The array after sorting is(asc) :";
	sort(a, a + asize);
	cout << endl << "The array after sorting is(desc) :";
	sort(a, a + asize, std::greater<int>());
	show(a, asize);
	cout << endl << "The array after sorting is(asc but our comparator class) : ";
	sort(a, a + asize, Comparator<int>());
	show(a, asize);
	cout << endl << "The array after sroting is(asc but our comparator function) : ";
	//sort(a, a + asize, funComparator<int> );
	show(a, asize);

	//C++ program to demonstrate working of auto and type inference
	//auto a; this line will give error because 'a' is not initialized at the time of declaration a=33;
	//see here x, y, ptr are initialized at the time of declaration hence there is no error in them
	auto x = 4;
	auto y = 3.37;
	auto ptr = &x;
	cout << typeid(x).name() << endl << typeid(y).name() << endl << typeid(ptr).name() << endl;

	//C++ program to demonstrate that we can use auto to save time when creating iterators
	st.insert({ "rodrigo","zaleski","pioner","1990" });

	//'it' evaluates to iterator to set of string type automatically
	for (auto it = st.begin(); it != st.end(); ++it)
		cout << *it << " ";

	//C++ program to demonstrate use of decltype
	//Data type of x is same as return type of fun1() and type of y is same as return type of fun2()
	decltype(fun1()) x2;
	decltype(fun2()) y2;

	cout << typeid(x2).name() << endl;
	cout << typeid(y2).name() << endl;

	//C++ program to demonstrate use of decltype
	//Driver Code
	//j will be of type int : data type of x
	decltype(x3)j = x3 + 5;

	cout << typeid(j).name();

	//C++ program to demonstrate use of decltype in functions
	
	//driver function to test various inference. This call returns 3.44 of double type
	cout << findMin(4, 3.44) << endl;
	//this call returns 3 of double type
	cout << findMin(5.4, 3) << endl;
	
	//C++ code to add two arrays
	int arr14[3] = { 1,2,3 };
	int arr13[3] = { 4,5,6 };
	n11 = sizeof(arr12) / sizeof(arr12[0]);
	int res2[3];

	//Code to add two arrays
	for (int i9 = 0; i9 < 3; ++i9)
		res2[i9] = arr14[i9] + arr13[i9];
	
	for (int i = 0; i < 3;++i)
		cout << res2[i] << " ";

	//Using transform() in STL to add two arrays
	int arr15[] = { 1,2,3 };
	int arr16[] = { 4,5,6 };
	n12 = sizeof(arr15) / sizeof(arr15[0]);
	int res3[3];

	//Single line code to add arr15[] and arr16[] and store result in res3[]
	transform(arr15, arr15 + n12, arr16, res3, plus<int>());

	for (int i = 0; i < n12; i++)
		cout << res3[i] << " ";
	/*
	//C++ program to demonstrate working of transform with unary operator.
	int arr17[] = { 1,2,3,4,5 };
	n13 = sizeof(arr17) / sizeof(arr17[0]);
	int res4[3];


	//Apply increment to all elements of arr17[] and atore the modified elements back in arr17[]
	transform(arr17, arr17 + n13, arr17, res4, increment);

	for (int i = 0; i < n13; i++)
		cout << arr17[i] << " ";*/

	//C++ program to demonstrate working of Variadic function Template
	//Driver code
	print(1, 2, 3.14, "Pass me any number of arguments", "I will print\n");

	//Eg: Let us recall the concept of function overloading
	show(2, 5);
	show(2.6, 7.6);
	
	int arr18[] = { 4,2,2,8,3,3,1 };
	n14 = sizeof(arr18) / sizeof(arr18[0]);

	sort2(arr18, n14);
	printArray(arr18, n14);

	show2(2, 5);
	show2(2.6, 7.6);

	getMax(2, 5);
	getMax(2.6, 7.6);
	getMax('A', 'D');

	a3 = getMax2(2, 5);
	d = getMax2(2.6, 7.6);
	cout << endl << a3;
	cout << endl << d;

	//create a function template that prints the swap of two numbers.
	a3 = 10;
	b3 = 20;
	x4 = 20.3;
	y4 = 55.3;

	cout << endl << "Before Swap" << endl;
	cout << endl << "A=" << a3 << "\t" << "B=" << b3;
	cout << endl << "X=" << x4 << "\t" << "Y=" << y4;

	swap(a3, b3);
	swap(x4, y4);

	cout << endl << endl << "After Swap" << endl;
	cout << endl << "A=" << a3 << "\t" << "B=" << b3;
	cout << endl << "X=" << x4 << "\t" << "Y=" << y4;

	fun<char>('a');
	fun<int>(10);
	fun<float>(10.4);

	Test2<int> a4;
	Test2<char> b4;
	Test2<float> c4;

	//C++ code to demonstrate the working of merge() and include()
	//Initializing 1st vector
	vector<int> vect7 = { 1,3,4,5,20,30 };

	//Initializing 2nd vector
	vector<int> vect8 = { 1,5,6,7,25,30 };

	//Declaring resultant vector for merging
	vector<int> vect9(12);

	//Using merge() to merge vectors v1 and v2 and storing result in v3
	merge(vect7.begin(), vect7.end(), vect8.begin(), vect8.end(), vect9.begin());

	//Displaying resultant container
	cout << "The new container after merging is :\n";
	for (int& x : vect9)
		cout << x << " ";
	cout << endl;

	//Initializing new vector
	vector<int> vect10 = { 1,3,4,5,6,20,25,30 };

	//Using include() to check if vect10 contains vect7
	includes(vect10.begin(), vect10.end(), vect7.begin(), vect7.end()) ? cout << "vect10 include vect7" : cout << "vect10 doesn't vect7";

	//using copy both vector into one container
	auto it2 = copy(vect7.begin(), vect7.end(), vect9.begin());
	copy(vect8.begin(), vect8.end(), it2);

	//Using inplace_merge() to sort the container
	inplace_merge(vect9.begin(), it2, vect9.end());

	//Displaying resultant container
	cout << "The new container after inplace_merging is :\n";
	for (int& x : vect9)
		cout << x << " ";
	cout << endl;

	//Declaring resultant vector for intersection
	vector<int> vect11(10);

	//Declaring resultant vector for intersection
	vector<int> vect12(10);

	//using set_unicon() to compute union of 2 containers vect7 and vect8 and store result in vect9
	auto it3 = set_union(vect7.begin(), vect7.end(), vect8.begin(), vect8.end(), vect12.begin());

	//using set_intersection() to compute intersection of 2 containers vect7 and vect8 store result in vect11
	auto it4 = set_intersection(vect7.begin(), vect7.end(), vect8.begin(), vect8.end(), vect11.begin());

	//resizing new container
	vect12.resize(it3 - vect12.begin());

	//resizing new container
	vect11.resize(it4 - vect11.begin());

	//Displaying set union
	cout << "Union of two containers is : ";
	for (int& x : vect12)
		cout << x << " ";
	cout << endl;

	//Displaying set intersection
	cout << "Intersection of two containers is : ";
	for (int& x : vect11)
		cout << x << " ";
	cout << endl;

	//Declaring resultant vector for difference
	vector<int> vect13(10);

	//Declaring resultant vector for difference
	vector<int> vect14(10);

	//Using set_difference() to compute difference of 2 containers vect 1 and vect 2.
	auto it5 = set_difference(vect7.begin(), vect7.end(), vect8.begin(), vect8.end(), vect13.begin());

	//Using set_symmetric_difference() to compute symmetric_difference/ of 2 containers
	auto it6 = set_symmetric_difference(vect7.begin(), vect7.end(), vect8.begin(), vect8.end(), vect14.begin());

	//resizing new container
	vect13.resize(it5 - vect13.begin());

	//resizing new container
	vect14.resize(it6 - vect14.begin());

	//Displaying set difference
	cout << "\n\n\tDifference of two containers is : ";
	for (int& x : vect13)
		cout << x << " ";
	cout << endl;

	//Displaying set symmetric_difference
	cout << "\n\n\tSymmetric_difference of two containers is : ";
	for (int& x : vect14)
		cout << x << " ";
	cout << endl;

	//C++ code to demonstrate the working of partition() and is_partitioned()
	//Initializing vector
	vector<int> vect15 = { 2,1,5,6,8,7 };

	//Checking if vector is partitioned using is_partioned()
	is_partitioned(vect15.begin(), vect15.end(), [](int x) {
		return x % 2 == 0;
		}) ?
		cout << "Vector is partioned" :
			cout << "Vector is not partioned";
		cout << endl;

	//partitioning vector using partition()
		partition(vect15.begin(), vect15.end(), [](int x)
			{
				return x % 2 == 0;
			});

	//Checking if vector is partitioned using is_partitioned()
		is_partitioned(vect15.begin(), vect15.end(), [](int x) {
			return x % 2 == 0;
			}) ?
			cout << "Now, vector is partitioned after partition operation" :
				cout << "Vector is still not partitioned after partition operation";
			cout << endl;

	//Displaying partitioned Vector
			cout << "The partitioned vector is : ";
			for (int& x : vect15)
				cout << x << " ";

	//C++ code to demonstrate the working of stable_partition() and partition_point()
			//partition vector using stable_partition() in sorted order
			stable_partition(vect15.begin(), vect15.end(), [](int x) {
				return x % 2 == 0;
				});
			//Displaying partioned Vector
			cout << "\nThe partioned vector is : ";
			for (int& x : vect15)
				cout << x << " ";
			cout << endl;

			//Declaring iterator
			vector<int>::iterator it7;

			//using partition_point() to get ending position of partition
			auto it8 = partition_point(vect15.begin(), vect15.end(), [](int x) {
				return x % 2 == 0;
				});

			//Displaying partitioned Vector
			cout << "The vector elements returning true for condiditon are : ";
			for (it7 = vect15.begin(); it7 != it8; it7++)
				cout << *it7 << " ";
			cout << endl;

			//C++ code to demonstrate the working of partition_copy()
			//Declaring vector 16
			vector<int> vect16;
			//Declaring vector 17
			vector<int> vect17;
			//Resizing vectors to suitable site using count_if() and resize()
			n15 = count_if(vect15.begin(), vect15.end(), [](int x) {
				return x % 2 == 0;
				});
			vect16.resize(n15);
			vect17.resize(vect15.size() - n15);
			//Using partition_copy(0 to copy partitions
			partition_copy(vect15.begin(), vect15.end(), vect16.begin(), vect17.begin(), [](int x) {
				return x % 2 == 0;
				});

			//Displaying partitioned Vector
			cout << "The elements that return true for condiditon are : ";
			for (int& x : vect16)
				cout << x << " ";
			cout << endl;

			//Displaying partitioned Vector
			cout << "The elements that return false for condiditon are : ";
			for (int& x : vect17)
				cout << x << " ";
			cout << endl;

			//C++ program to demonstrate working of accumulate()
			//Initialize sum = 1
			sum = 1;
			int a5[] = { 5,10,15 };

			//Simple default accumulate function
			cout << "\nResult using accumulate: ";
			cout << accumulate(a5, a5 + 3, sum);

			//Using accumulate function with defined function
			cout << "\nResult using accumulate with user-defined function: ";
			//cout << accumulate(a5, a5 + 3, sum, myfun);

			//Using accumulate function with pre-defined function
			cout << "\nResult using accumulate with pre-defined function: ";
			cout << accumulate(a5, a5 + 3, sum, std::minus<int>());

			//C++ program to demonstrate working of partial_sum()
			int a6[] = { 1,2,3,4,5 };
			int b6[5];

			//Default function
			partial_sum(a6, a6 + 5, b6);

			cout << "\nPartial Sum - Using Default function: ";
			for (int i = 0; i < 5; i++)
				cout << b6[i] << ' ';
			cout << '\n';

			//Using user defined function
			//partial_sum(a6, a6 + 5, b6, myfun2);

			cout << "\nPartial sum - Using user defined function: ";
			for (int i = 0; i < 5; i++)
				cout << b6[i] << ' ';
			cout << '\n';

			//Cpp program to demonstrate adjacent_difference()
			int a7[] = { 1,2,3,4,5,6 };
			int b7[6];

			//using adjacent_difference function
			adjacent_difference(a7, a7 + 6, b7);
			cout << "\nResult using adjacent_difference: ";
			for (int i = 0; i < 6; i++)
				std::cout << b6[i] << ' ';

			//using adjacent_difference function user defined function
			//adjacent_difference(a7, a7 + 6, b7, myfun3);
			cout << "\nResult using accumulate with user-defined function: ";
			for (int i = 0; i < 6; i++)
				std::cout << b7[i] << ' ';

			//using adjacent_difference with pre-defined function
			adjacent_difference(a7, a7 + 6, b7, multiplies<int>());

			cout << "\nResult using accumulate with pre-defined function: ";
			for (int i = 0; i < 6; i++)
				std::cout << b7[i] << ' ';

			//Cpp program to demonstrate inner_product()
			//Driver code
			var = 200;
			int a8[] = { 10,15,20 };
			int b8[] = { 1,3,5 };

			cout << "\nResult using inner_product ";

			//inner_product with default method
			cout << inner_product(a8, a8 + 3, b8, var);

			//inner_product with pre-defined function
			cout << "\nResult using inner_product with pre-defined function: ";
			cout << inner_product(a8, a8 + 3, b8, var, minus<int>(), divides<int>());

			//inner_product with user defined function
			cout << "\nResult using inner_product with user-defined function: ";
			//cout << inner_product(a8, a8 + 3, b8, var, myfun4, myfun3);

			//cpp program to demonstrate iota()
			int a9[7];
			//using iota function to store 100, 101, 102,...
			iota(a9, a9 + 7, 100);
			cout << " a : ";
			for (int& x : a9)
				cout << ' ' << x;

			//A c++ program to demonstrate that push_back() happens at the end of resized vector.
			vector<int> vect18;
			for (int i = 0; i < 5; i++)
				vect18.push_back(i);

			//Resizing vector to size 10
			vect18.resize(10);

			//Prints 0 1 2 3 4 0 0 0 0 0
			for (int i = 0; i < vect18.size(); i++)
				cout << vect18[i] << " ";
			cout << "\n";

			vect18.push_back(50);

			//Prints 0 1 2 3 4 0 0 0 0 0 50
			for (int i = 0; i < vect18.size(); i++)
				cout << vect18[i] << " ";

			//C++ program to demonstrate that when vectors are passed to function without &, a copy is created.
			vector<int> vect19;
			vect19.push_back(10);
			vect19.push_back(20);

			//myfun5(vect19);

			//vect19 remains unchanged after function call
			for (int i = 0; i < vect19.size(); i++)
				cout << vect19[i] << " ";

			//c++ program to demonstrate functionality of unordered_map
			//driver code
			//Declaring umap to be of <string, int> type key will be of STRING type and mapped VALUE will be of int type
			unordered_map<string, int> umap;

			//inseting values by using [] operator
			umap["Rodrigo"] = 10;
			umap["Zaleski"] = 20;
			umap["Pioner"] = 30;

			//Traversing an unordered map
			for (auto x : umap)
				cout << x.first << " " << x.second << endl;

			//c++ program to demonstrate initialization, indexing, and iteration
			//driver code
			//Declaring umap to be of <string, double> type key will be of string type and mapped value will be of double type
			unordered_map<string, double>umap2;

			//inserting values by using [] operator
			umap2["PI"] = 3.14;
			umap2["root2"] = 1.414;
			umap2["root3"] = 1.732;
			umap2["log10"] = 2.302;
			umap2["loge"] = 1.0;

			//inserting value by insert function
			umap2.insert(make_pair("e", 2.718));

			string key = "PI";

			//If key not found in map iterator to end is returned
			if (umap2.find(key) == umap2.end())
				cout << key << "not found \n\n";

			//If key found then iterator to that key is returned
			else
				cout << "Found " << key << "\n\n";

			key = "lambda";
			if (umap2.find(key) == umap2.end())
				cout << key << " not found\n";
			else
				cout << "Found " << key << endl;

			//iteratinf over all value of umap2
			unordered_map<string, double>::iterator it9;
			cout << "\nAll Elements : \n";
			for (it9 = umap2.begin(); it9 != umap2.end(); it9++)
			{
				//it8 works as a pointer to pair<string, double> type it8->first stores the key part and it8->second stores the value part
				cout << it9->first << " " << it9->second << endl;
			}

			//C++ program to find freq of every word using unordered_map
			string str = "hello";
			printFrequencies(str);

			//C++ program to demonstrate various function of unordered_set
			//declaring set for storing string data-type
			unordered_set<string> stringSet;

			//inseting various string, same string will be stored once in set
			stringSet.insert("code");
			stringSet.insert("in");
			stringSet.insert("c++");
			stringSet.insert("is");
			stringSet.insert("fast");

			string key2 = "slow";

			//find returns end iterator if key is not found, else it returns terator to that key

			if (stringSet.find(key) == stringSet.end())
				cout << key2 << " not found" << endl << endl;
			else
				cout << "Found " << key2 << endl << endl;

			key2 = "c++";
			if (stringSet.find(key2) == stringSet.end())
				cout << key2 << " not found\n";
			else
				cout << "Found " << key2 << endl;

			//now iterating over wohole set and printing its content
			cout << "\All elements : ";
			unordered_set<string>::iterator it10;
			for (it10 = stringSet.begin(); it10 != stringSet.end(); it10++)
				cout << (*it10) << endl;

			//C++ program to find duplicate from an array using unordered_set
			//Driver code
			int arr19[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
			n16 = sizeof(arr19) / sizeof(int);
			printDuplicates(arr19, n16);

			//C++ code to demonstrate working of all_of()
			//Initializing array
			int ar[6] = { 1,2,3,4,5,-6 };

			//Checink if all elements are positive
			all_of(ar, ar + 6, [](int x) {return x > 0; }) ? cout << "All are positive elements" : cout << "All are not positive elements";
			any_of(ar, ar + 6, [](int x) {return x < 0; }) ? cout << "There exists a negative element" : cout << "All are positive elements";
			//C++ code to demonstrate working of none_of()
			//Checking if no element is negative
			none_of(ar, ar + 6, [](int x) {return x < 0; }) ? cout << "No negative elements" : cout << "There are negative elements";
			//C++ code to demonstrate working of copy_n()
			//Declaring second array
			int ar1[6];
			//Using copy_n to copy contents
			copy_n(ar, 6, ar1);
			//Displaying the copied array
			cout << "The new array after copying is : ";
			for (int i = 0; i < 6; i++)
				cout << ar1[i] << " ";
			//C++ code to demonstrate working of iota()
			//Initializing array with 0 values
			int ar2[6] = { 0 };
			//Using iota() to assign values
			iota(ar2, ar2 + 6, 20);
			//Displaying the new array
			cout << "The new array after assigning value is : ";
			for (int i = 0; i < 6; i++)
				cout << ar2[i] << " ";

			
			//C++ program to demonstrate various function of unordered_multiset
			//Driver program to check all function
			//empty initialization
			unordered_multiset<int> ums1;
			//Initialization by initializer list
			unordered_multiset<int> ums2({ 1,3,1,7,2,3,4,1,6 });
			//Initialization by assigment
			ums1 = { 2,7,2,5,0,3,7,5 };
			// empty() function return true if set is empty otherwise false
			if (ums1.empty())
				cout << "unordered multiset 1 is empty\n";
			else
				cout << "unordered multiset 1 is not empty\n";

			//size() function returns total number of elements in data structure
			cout << "The size of unordered multiset 2 is : " << ums2.size() << endl;

			printUset(ums1);
			ums1.insert(7);
			printUset(ums1);
			val = 3;

			// find function returns iterator to first position of val, if exist otherwise it returns iterator to end
			if (ums1.find(val) != ums1.end())
				cout << "unordered multiset 1 contains " << val << endl;
			else
				cout << "unordered multiset 1 does not contains " << val << endl;
			//cout function returns total number of occurence in set
			val = 5;
			int cnt = ums1.count(val);
			cout << val << " appears " << cnt << " times in unordered multiset 1 \n";
			val = 9;
			//if count return >0 value then element exist otherwise no
			if (ums1.count(val))
				cout << "unordered multiset 1 contains " << val << endl;
			else
				cout << "unordered multiset 1 does not contains " << val << endl;

			val = 1;
			//equal_range returns a pair, where first is iterator to first position of val and second it iterator to last position to val
			pair<umit, umit>erange_it = ums2.equal_range(val);
			if (erange_it.first != erange_it.second)
				cout << val << " appeared atleast once in unoredered_multiset \n";

			printUset(ums2);

			//erase function deletes all instances of val
			ums2.erase(val);

			printUset(ums2);

			//cleaar function deletes all entries from set
			ums1.clear();
			ums2.clear();

			if (ums1.empty())
				cout << "unordered multiset 1 is empty\n";
			else
				cout << "unordered multiset 1 is not empty\n";

			//C++ program to delete one copy from unordered set
			
			val = 1;
			printUset(ums2);
			erase_one_entry(&ums2, val);
			printUset(ums2);

			// C++ program do demonstrate various function of unordered_multimap
			// Driver code
			//empty initialization
			unordered_multimap<string, int>umm1;

			// Initialization by initializar list
			unordered_multimap<string, int> umm2(
				{ {"apple",1},
				{"ball",2},
				{"apple",10},
				{"cat",7},
				{"dog",9},
				{"cat",6},
				{"apple",1} });

			// Initialization by assignment operation
			umm1 = umm2;
			printUmm(umm1);

			// empty returns true, if container is empty else it returns false
			if (umm2.empty())
				cout << "unordered multimap 2 is empty\n";
			else
				cout << "unordered multimap 2 is not empty\n";

			//size returns total number of elements in container
			cout << " Size of unordered multimap 1 is " << umm1.size() << endl;

			key2 = "apple";

			//find and return any pair, associated with key
			unit it11 = umm1.find(key);
			if (it11 != umm1.end())
				cout << "\nkey " << key2 << " is there in unordered " << " multimap 1\n" << "\none of the value associated with " << key << " is " << it11->second << endl;
			else
				cout << "\nkey " << key2 << " is not there in unordered" << " multimap 1\n";
			
			//count returns count of total number of pair associated with key
			cnt = umm1.count(key2);
			cout << "\ntotal values associated with " << key2 << " are " << cnt << "\n\n";

			printUmm(umm2);

			//one insertion by making pair explicitly
			umm2.insert(make_pair("dog", 11));

			// insertion by initializer list
			umm2.insert({ {"alpha",12},{"beta",33} });
			cout << "\nAfter insertion of <alpha, 12> and <beta,33>\n";

			// erase deletes all pairs corresponding to key
			umm2.erase("apple");
			cout << "\nAfter deletion of apple\n";
			printUmm(umm2);

			// clear deletes all pairs from container
			//umm1.clear();
			umm2.clear();

			if (umm2.empty())
				cout << "\nunordered multimap 2 is empty\n";
			else
				cout << "\nunordered multimap 2 is not empty\n";

			// C++ program to erase particular value.
			auto it12 = umm1.begin();

			// Search for an element with value 1
			while (it12 != umm1.end()) {
				if (it12->second == 1)
					break;
				it12++;
			}

			// Erase the element pointed by iterator it
			if (it12 != umm1.end())
				umm1.erase(it12);

			cout << "After deletion of value 1 from umm" << endl;
			printUmm(umm1);

			// C++ program to demonstrate default behaviour of sort(0 in STL.
			int arr20[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
			n17 = sizeof(arr20) / sizeof(arr20[0]);

			// Here we take two parameters, the beginning of the array and the length n upto which we want the array to be sorted
			sort(arr20, arr20 + n17);

			cout << "\nArray after sorting using default sort is : \n";
			for (int i = 0; i < n17; ++i)
				cout << arr20[i] << " ";

			sort(arr20, arr20 + n17, greater<int>());
			cout << "\nArray after sorting using default sort is : \n";
			for (int i = 0; i < n17; ++i)
				cout << arr20[i] << " ";

			sort(arr20 + 2, arr20 + n17);
			cout << "\nArray after sorting using default sort is : \n";
			for (int i = 0; i < n17; ++i)
				cout << arr20[i] << " ";

			// A C++ program to demonstrate STL sort() using our own comparator
			Interval arr21[] = { {6,8},{1,9},{2,4},{4,7} };
			n18 = sizeof(arr21) / sizeof(arr21[0]);

			//sort the intervals in increasing order of start time
			//sort(arr21, arr21 + n18, compareInterval2);
			cout << "\nIntervals sorted by start time : \n";
			for (int i = 0; i < n17; ++i)
				cout << arr21[i].start<<","<<arr21[i].end << " ";

			int a10[] = { 1,5,8,9,6,7,3,4,2,0 };
			asize = sizeof(a10) / sizeof(int);
			cout << "The array before sorting is : ";
			show3(a10, asize);
			cout << endl << "The array after sorting is(asc) :";
			sort(a10, a10 + asize);
			show3(a10, asize);
			cout << endl << "he array after sorting is(desc) :";
			sort(a10, a10 + asize, greater<int>());
			show3(a10, asize);
			cout << endl << "The array after sorting is(asc but our comparator class) :";
			sort(a10, a10 + asize, Comparator2<int>());
			show3(a10, asize);
			cout << endl << "The array after sorting is(asc but our comparator function) :";
			//sort(a10, a10 + asize, funComparator2<int>);
			show3(a10, asize);

			//quick sort code in C++

			int arr22[]= { 1,5,8,9,6,7,3,4,2,0 };
			n18 = 10;

			quickSort(arr22, 0, n18 - 1);
			cout << "array after using quick sort: " << endl;
			for (int i = 0; i < n18; i++)
				cout << arr22[i] << " ";

			//C++ program of heap sort - Driver program
			int arr23[]= { 1,5,8,9,6,7,3,4,2,0 };
			n18 = 10;

			heapSort(arr23, n18);
			cout << "array after using heap sort:" << endl;
			printArray(arr22, n18);

			//C++ program of insertion sort |||| Driver code
			int arr24[] = { 1,5,8,9,6,7,3,4,2,0 };
			n18 = 10;

			insertionSort(arr24, n18);
			cout << "array after using insertion sort:" << endl;
			printArray(arr24, n18);

			// CPP program to implement Binary Search in Standard Template Library (STL)
			int a11[] = { 1,5,8,9,6,7,3,4,2,0 };;
			asize = sizeof(a11) / sizeof(a11[0]);
			cout << "\nThe array is: \n";
			show3(a11, asize);

			cout << "\n\nLet's say we want to search for in the array so, we first sort the array";
			sort(a11,a11+ asize);
			cout << "\n\nThe array after sorting is : \n";
			show3(a11, asize);
			cout << "\n\nNow, we do the binary search";
			if (binary_search(a11, a11 + 10, 2))
				cout << "\nElement found in the array";
			else
				cout << "\nElement not found in the array";

			cout << "\n\nNow, say we want to search for 10";
			if (binary_search(a11, a11 + 10, 10))
				cout << "\nElement found in the array";
			else
				cout << "\nElement not found in the array";

			// C++ code to demonstrate working of all_of()
			// Initializing array
			int ar3[6] = { 1,2,3,4,5,-6 };

			// Checking if all elements are positive
			all_of(ar3, ar3 + 6, [](int x) {return x > 0; }) ? cout << "All are positive elements" : cout << "All are not positive elements";

			// C++ code to demonstrate working of any_of()
			//Initializing array
			int ar4[6] = { 1,2,3,4,5,-6 };

			// Checking if any element is negative
			any_of(ar4, ar4 + 6, [](int x){return x < 0; }) ? cout << "There exists a negative element" : cout << "All are positive elements";

			// C++ code to demonstrate working of none_of()
			//Initializing array
			int ar5[6] = { 1,2,3,4,5,-6 };

			// Checking if any element is negative
			any_of(ar5, ar5 + 6, [](int x) {return x < 0; }) ? cout << "No negative element" : cout << "There are negative elements";

			// C++ code to demonstrate working of copy_of()
			//Initializing array
			int ar7[6] = { 1,2,3,4,5,6 };

			//Declaring second array
			int ar6[6];

			//Using copy_n() to copy contents
			copy_n(ar7, 6, ar6);

			// Displaying the copied array
			cout << "The new array after copying is : ";
			for (int i = 0; i < 6; i++)
				cout << ar6[i] << " ";

			// C++ code to demonstrate working of iota()
			//Initializing array
			int ar8[6] = { 0 };

			// Using iota() to assign values
			iota(ar8, ar8 + 6, 20);


			// Displaying the copied array
			cout << "The new array after assigning values is : ";
			for (int i = 0; i < 6; i++)
				cout << ar8[i] << " ";

			// C++ code to demonstrate the working of apply() and sum()
			// Initializing valarray
			valarray<int> varr = { 10, 2, 20, 1, 30 };

			// Declaring new valarray
			valarray<int> varr1;

			// Using apply() to increment all elements by 5
			varr1 = varr.apply([](int x) {return x = x + 5; });

			// Displaying new elements value
			cout << "The new valarray with manipulated value is : ";
			for (int& x : varr1) cout << x << " ";
			cout << endl;

			// Displaying sum of both old and new valarray
			cout << "The sum of old valarray is : ";
			cout << varr.sum() << endl;
			cout << "The sum of new valarray is : ";
			cout << varr1.sum() << endl;

			// C++ code to demonstrate the working of max() and min()
			// Displaying largest element of valarray
			cout << "The largest element of valarray is : ";
			cout << varr.max() << endl;

			//Displaying smallest element of valarray
			cout << "The smallest element of valarray is : ";
			cout << varr.min() << endl;

			// C++ code to demonstrate the working of shift() and cshift()
			// using shift() to shift elements to left shifts valarray by 2 position
			varr1 = varr.shift(2);

			// Displaying new elements value
			cout << "The new valarray with shifting value is : ";
			for (int& x : varr1) cout << x << " ";
			cout << endl;

			// using shift() to shift elements to left shifts valarray by 2 position
			varr1 = varr.cshift(-3);

			// Displaying new elements value
			cout << "The new valarray with circular shifting value is : ";
			for (int& x : varr1) cout << x << " ";
			cout << endl;

			// C++ code to demonstrate the working of swap()
			// Initializing 1st valarray
			valarray<int> varr2 = { 1, 2, 3, 4 };

			// Initializing 2nd valarray
			valarray<int> varr3 = { 2, 4, 6, 8 };

			// Displaying elements value before swap
			cout << "The new 1st valarray before swap value is : ";
			for (int& x : varr2) cout << x << " ";
			cout << endl;
			cout << "The new 2st valarray before swap value is : ";
			for (int& x : varr3) cout << x << " ";
			cout << endl;

			// Use of swap() to swap the valarrays
			varr2.swap(varr3);

			// Displaying elements value after swap
			cout << "The new 1st valarray after swap value is : ";
			for (int& x : varr2) cout << x << " ";
			cout << endl;
			cout << "The new 2st valarray after swap value is : ";
			for (int& x : varr3) cout << x << " ";
			cout << endl;

			// INTEGER VECTOR EXAMPLE CPP program to illustrate Implementation of begin() function
			// declaration of vector container
			vector<int> myvector{ 1, 2, 3, 4, 5 };

			// using begin() to print vector
			for (auto it = myvector.begin(); it != myvector.end(); ++it)
				cout << ' ' << *it;

			// STRING VECTOR EXAMPLE CPP program to illustrate Implementation of begin() function
			// declaration of vector container
			vector<string> myvector_string{ "Rodrigo", "Zaleski", "Pioner"};

			// using begin() to print vector
			for (auto it = myvector_string.begin(); it != myvector_string.end(); ++it)
				cout << ' ' << *it;

			// CPP program to illustrate the vector::rbegin() function
			vector<int> myvector3;
			myvector3.push_back(11);
			myvector3.push_back(12);
			myvector3.push_back(13);
			myvector3.push_back(14);
			myvector3.push_back(15);

			// prints all the elements
			cout << "The vector elements in reverse order are:\n";
			for (auto it = myvector3.rbegin(); it != myvector3.rend(); it++)
				cout << *it << " ";

			// CPP program to illustrate use of cbegin()
			vector<string> vec2;

			// 5 strings are inserted
			vec2.push_back("first");
			vec2.push_back("second");
			vec2.push_back("third");
			vec2.push_back("fourth");
			vec2.push_back("fifth");

			// displaying the contents
			cout << "Currentes of the vector:" << endl;
			for (auto itr = vec2.cbegin(); itr != vec2.end(); ++itr)
				cout << *itr << endl;

			// CPP program to illustrate use of cend()

			// displaying the contents
			cout << "Currentes of the vector:" << endl;
			for (auto itr = vec2.cend() - 1; itr != vec2.begin(); --itr)
				cout << *itr << endl;

			// CPP program to illustrate working of crbegin() crend()
			// initializing vector with values
			vector<int> vect21= { 10, 20, 30, 40, 50 };

			// for loop with crbegin and crend
			for (auto i = vect21.crbegin(); i != vect21.crend(); i++)
				cout << ' ' << *i; // printing results
			
			cout << '\n';

			// CPP program to illustrate Implementation of empty() function
			vector<int> myvector4{};
			if (myvector4.empty())
				cout << "True";
			else
				cout << "False";

			// CPP program to illustrate Application of empty() function
			sum2 = 0;
			vector<int> myvector5{ 1, 5, 6, 3, 9, 2 };
			while (!myvector5.empty()) {
				sum2 += myvector5.back();
				myvector5.pop_back();
			}
			cout << sum2;
			sum2 = 0;
			cout << myvector5.size();
			while (myvector5.size() > 0) {
				sum2 += myvector5.back();
				myvector5.pop_back();
			}
			cout << sum2;

			// Initializing a vector of string type
			vector<string> vec3 = { "Rodrigo", "Zaleski", "Pioner " };

			for (int i = 0; i <= (int)vec3.size() - 1; i++)
				cout << vec3[i] << ' ';

			// C++ program to illustrate the vector::max_size() function
			// initialize a vector
			vector<int> vec4;

			// returns the max_size of vector
			cout << "max_size of vector 1 = " << vec4.max_size() << endl;

			vector<int> vec5;

			// returns the max_size of vector
			cout << "max_size of vector 2 = " << vec5.max_size() << endl;

			// C++ program to illustrate the vector::capacity() function
			vector<int> vec6;

			//inserts elements
			for (int i = 0; i < 10; i++)
				vec6.push_back(i * 10);

			cout << "The size of vector is " << vec6.size();
			cout << "\nThe maximum capacity is " << vec6.capacity();

			//inserts elements
			for (int i = 0; i < 100; i++)
				vec6.push_back(i * 10);

			cout << "The size of vector is " << vec6.size();
			cout << "\nThe maximum capacity is " << vec6.capacity();

			// resizing of the vector
			vector<int> vec7;

			// 5 elements are inserted in the vector
			vec7.push_back(1);
			vec7.push_back(2);
			vec7.push_back(3);
			vec7.push_back(4);
			vec7.push_back(5);

			cout << "Contents of vector before resizing:" << endl;

			// displaying the contents of the vector before resizing
			for (int i = 0; i < vec7.size(); i++)
				cout << vec7[i] << " ";

			cout << endl;

			// vector is resized
			vec7.resize(4);

			cout << "Contents of vector after resizing:" << endl;

			// displaing the contents of the vector after resizing
			for (int i = 0; i < vec7.size(); i++)
				cout << vec7[i] << " "; 


			// vector is resized
			vec7.resize(8);

			cout << "Contents of vector after resizing:" << endl;

			// displaing the contents of the vector after resizing
			for (int i = 0; i < vec7.size(); i++)
				cout << vec7[i] << " ";

			// vector is resized
			vec7.resize(12, 9);

			cout << "Contents of vector after resizing:" << endl;

			// displaing the contents of the vector after resizing
			for (int i = 0; i < vec7.size(); i++)
				cout << vec7[i] << " ";

			// C++ program to illustrate the vector::shrink_to_fit()
			// Initialized vector
			vector<int> vec8 = { 1,2,3,4,5,6,7,8,9,10 };

			/*for (int i = 0; i < 10; i++)
				vec8[i] = i;*/

			// Initial vector
			cout << "Vector size initially: " << vec8.size();

			cout << "\nVector elements are: ";
			for (int i = 0; i < 10; i++)
				cout << vec8[i] << " ";

			// changes the size of the Vector but does not destroys the elements
			vec8.resize(5);

			cout << "\n\nVector size after resize(5): " << vec8.size();

			cout << "\nVector elements after resize(5) are: ";
			for (int i = 0; i < 5; i++)
				cout << vec8[i] << " ";

			// Shrinks to the size till which elements are destroys the elements after 5
			vec8.shrink_to_fit();

			cout << "\n\nVector size after shrink_to_fit(): " << vec8.size();

			cout << "\nVector elements after shrink_to_fit are: ";
			for (int i = 0; i < 5; i++)
				cout << vec8[i] << " ";

			// CPP program to demonstrate use of std::vector::reserve
			// No of characters
			n18 = (int)1e6;

			vector<int> vec9, vec10;

			// Reserve space in vec10
			vec10.reserve(n18);

			// Start filling up elements in vec9 

			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < n18; ++i)
				vec9.push_back(i);
			auto stop = chrono::high_resolution_clock::now();
			auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

			cout << "Method I took " << duration.count() << " microseconds\n";

			// Start filling up elements in vec10
			start = chrono::high_resolution_clock::now();
			for (int i = 0; i < n18; ++i)
				vec10.push_back(i);
			stop = chrono::high_resolution_clock::now();
			duration = chrono::duration_cast<chrono::microseconds>(stop - start);

			cout << "Method II took " << duration.count() << " microseconds \n";

			// CPP program to illustrate Implementation of = operator
			vector<int> vec13={ 1, 2, 3, 4 };
			vector<int> vec12={ 3, 2, 1, 4 };
			//vec13 = vec12;
			cout << "vec11 = ";
			for (auto it = vec13.begin(); it != vec13.end(); ++it)
				cout << '  ' << *it << "teste";

			// CPP program to illustrate Implementation of [] operator
			vector<int> vec14;
			vec14.push_back(3);
			vec14.push_back(4);
			vec14.push_back(1);
			vec14.push_back(7);
			vec14.push_back(3);
			cout << vec14[3];

			for (int i = 0; i < vec14.size(); ++i)
				if (i % 2 != 0)
					cout << vec14[i] << " ";

			// CPP program to illustrate Implementation of at() function
			cout << vec14.at(3);

			for (int i = 0; i < vec14.size(); i += 2)
				cout << vec14.at(i) << " ";

			vec13.swap(vec12);
			cout << "vec13 = ";
			for (auto it = vec13.begin(); it != vec13.end(); ++it)
				cout << '  ' << *it << "teste";
			cout << "vec12 = ";
			for (auto it = vec12.begin(); it != vec12.end(); ++it)
				cout << '  ' << *it << "teste";

			vec12.push_back(2);
			vec12.push_back(20);
			vec12.push_back(200);


			vec13.swap(vec12);
			cout << "vec13 = ";
			for (auto it = vec13.begin(); it != vec13.end(); ++it)
				cout << '  ' << *it << "teste";
			cout << "vec12 = ";
			for (auto it = vec12.begin(); it != vec12.end(); ++it)
				cout << '  ' << *it << "teste";

			cout << endl << vec12.front() << endl;
			cout << endl << vec12.back() << endl;

			if (vec12.front() > vec12.back())
				cout << vec12.front() - vec12.back();
			else if (vec12.front() < vec12.back())
				cout << vec12.back() - vec12.front();
			else
				cout << "0" << endl;

			// memory pointer pointing to the first elemen
			pos = vec12.data();

			for (int i = 0; i < vec12.size(); i++)
				cout << *pos++ << " ";

			vec12.assign(7, 100);

			cout << endl << "Size of first: " << int(vec12.size()) << '\n';

			for (int i = 0; i < vec12.size(); i++)
				cout << vec12[i] << " ";

			int ar9[] = { 1, 2, 3 };
			vec12.assign(ar9, ar9 + 2);

			for (int i = 0; i < vec12.size(); i++)
				cout << vec12[i] << " ";

			vec13.assign(ar9, ar9 + 3);

			for (int i = 0; i < vec13.size(); i++)
				cout << vec13[i] << " ";

			cout << endl;

			vec14.assign(7, 100);

			cout << "Size of first: " << int(vec14.size()) << '\n';

			cout << "Elements are\n";
			for (int i = 0; i < vec14.size(); i++)
				cout << vec14[i] << " ";

			// modify the elements
			vec14.assign(vec14.begin(), vec14.begin() + 3);

			cout << "\nModified Elements are\n";
			for (int i = 0; i < vec14.size(); i++)
				cout << vec14[i] << " ";


			vec14.assign({ 1, 2, 3 });
			cout << "\nThe list is: " << endl;
			for (auto it = vec14.begin(); it != vec14.end(); ++it)
				cout << '  ' << *it << "teste";

			// CPP program to illustrate push_back() function
			vec14.push_back(6);
			cout << "\nThe list is: " << endl;
			for (auto it = vec14.begin(); it != vec14.end(); ++it)
				cout << '  ' << *it << "teste";

			// CPP program to illustrate pop_back() function
			vec14.pop_back();
			cout << "\nThe list is: " << endl;
			for (auto it = vec14.begin(); it != vec14.end(); ++it)
				cout << '  ' << *it << "teste";

			// CPP program to illustrate pop_back() and push_back() function
			count3 = 0;
			vec14.push_back(6);
			vec14.push_back(7);
			vec14.push_back(8);
			vec14.push_back(9);
			vec14.push_back(10);
			vec14.push_back(111);
			vec14.push_back(11);
			while (!vec14.empty()) {
				count3++;
				vec14.pop_back();
			}
			cout << endl << count3 << endl;

			// CPP program to illustrate vector_name.insert(position,val) function
			vec14.push_back(6);
			vec14.push_back(7);
			vec14.push_back(8);
			vec14.push_back(9);
			vec14.push_back(10);
			vec14.push_back(111);
			vec14.push_back(11);
			
			// Printing out the original vector
			cout << "\nOriginal vector :\n";
			for (auto x : vec14)
				cout << x << ' ';
			cout << "\n";

			// Inserting the value 100 at position 3(0-based indexing) in the vector
			vec14.insert(vec14.begin() + 3, 100);
			// Printing out the modified vector
			cout << "\ninserting 100 position 3 in vector :\n";
			for (auto x : vec14)
				cout << x << ' ';
			cout << "\n";

			// Inserting the value 500 at position 1(0-based indexing) in the vector
			vec14.insert(vec14.begin() + 1, 500);
			// Printing out the modified vector
			cout << "\ninserting 500 position 1 in vector :\n";
			for (auto x : vec14)
				cout << x << ' ';
			cout << "\n";

			// CPP program to illustrate clear() function
			// Vector have  6, 7, 8

			vec14.clear();
			// vector becomes empty

			// Printing the vector
			cout << endl;
			for (auto it = vec14.begin(); it != vec14.end(); ++it)
				cout << '  ' << *it << "teste";

			// CPP program to illustrate erase() function
			vec14.push_back(6);
			vec14.push_back(7);
			vec14.push_back(8);
			vec14.push_back(9);
			vec14.push_back(10);
			vec14.push_back(111);
			vec14.push_back(11);
			
			vector<int>::iterator it13;

			it13 = vec14.begin();
			vec14.erase(it13);

			// Printing the vector
			cout << endl;
			for (auto it = vec14.begin(); it != vec14.end(); ++it)
				cout << '  ' << *it << "teste";

			// CPP program to illustrate erase() function
			vector<int>::iterator it14;

			it13 = vec14.begin();
			it14 = vec14.end();
			it14--;
			it14--;

			vec14.erase(it13, it14);

			// Printing the vector
			cout << endl;
			for (auto it = vec14.begin(); it != vec14.end(); ++it)
				cout << '  ' << *it << "teste";

			// CPP program to illustrate erase() function
			vec14[0] = 1;
			vec14.push_back(1);
			vec14.push_back(7);
			vec14.push_back(8);
			vec14.push_back(9);
			vec14.push_back(10);
			vec14.push_back(111);
			vec14.push_back(11);
			it13 = vec14.begin();
			it14 = vec14.end();

			//for (int i = 0; i < vec14.size(); ++i) {
			//	if (vec14[i] % 2 == 0) {
			//		vec14.erase(it13);
			//		i--;
			//		it13--;
			//	}
			//	++it13;
			//}

			// Printing the vector
			cout << endl;
			for (auto it = vec14.begin(); it != vec14.end(); ++it)
				cout << '  ' << *it << "teste";

			// CPP program to illustrate emplace_front() function
			list<int> mylist;
			mylist.emplace_front(1);
			mylist.emplace_front(2);
			mylist.emplace_front(3);
			mylist.emplace_front(4);
			mylist.emplace_front(5);
			mylist.emplace_front(6);
			// list becomes 6, 5, 4, 3, 2, 1

			// printing the list
			cout << endl;
			for (auto it = mylist.begin(); it != mylist.end(); ++it)
				cout << ' ' << *it;

			// CPP program to illustrate emplace_back() function
			mylist.emplace_back(1);
			mylist.emplace_back(2);
			mylist.emplace_back(3);
			mylist.emplace_back(4);
			mylist.emplace_back(5);
			mylist.emplace_back(6);
			// list becomes 6, 5, 4, 3, 2, 1 , 1, 2, 3, 4, 5, 6

			// printing the list
			cout << endl;
			for (auto it = mylist.begin(); it != mylist.end(); ++it)
				cout << ' ' << *it;

			// CPP program to illustrate vector::emplace() function insertion at the front
			// insert element by emplace function at front
			
			auto it15 = vec14.emplace(vec14.begin(), 15);

			// Printing the vector
			cout << endl;
			for (auto it = vec14.begin(); it != vec14.end(); ++it)
				cout << '  ' << *it << "teste";

			// CPP program to illustrate vector::emplace() function insertion at the end
			// insert element by emplace function at end
			
			auto it16 = vec14.emplace(vec14.end(), 16);

			// Printing the vector
			cout << endl;
			for (auto it = vec14.begin(); it != vec14.end(); ++it)
				cout << '  ' << *it << "teste";

			// CPP program to illustrate vector::emplace() function insertion at the end
			// insert element by emplace function at middle
			
			auto it17 = vec14.emplace(vec14.begin()+3, 16);

			// Printing the vector
			cout << endl;
			for (auto it = vec14.begin(); it != vec14.end(); ++it)
				cout << '  ' << *it << "teste";

			
			array<int, 6> ar25 = { 1,2,4,5 };

			// Insert 3 in the arr at index 2

			for (int i = 3; i >= 0; i--)
				if (i != 1)
					ar25[i + 1] = ar25[i];
				else {
					ar25[i + 1] = 3;
					break;
				} // Time complexity is high

			cout << "\nContent of a: ";
			for (int i = 0; i < 5; i++)
				cout << ar25[i] << " ";

			vec14.emplace(vec14.begin() + 2, 3);

			cout << "\nContent of vec14: ";
			for (int i = 0; i < vec14.size(); i++)
				cout << vec14[i] << " ";

			// C++ code to demonstrate difference between emplace and insert
			//declaring map
			multiset<pair<char, int>> ms2;

			// using emplace() to insert pair in-place
			ms2.emplace('a', 24);

			// Below line would not compile
			// ms2.insert('b', 25);

			// using insert() to insert pair in-place
			ms2.insert(make_pair('b', 25));

			// printing the multiset
			for (auto it = ms2.begin(); it != ms2.end(); ++it)
				cout << " " << (*it).first << " " << (*it).second << endl;

			// C++ code to demonstrate the working of find()
			//declaring map of char and int
			map< char, int > mp;
			
			// declaring iterators
			map<char, int>::iterator it18;
			map<char, int>::iterator it19;

			// inserting values
			mp['a'] = 5;
			mp['b'] = 10;
			mp['c'] = 15;
			mp['d'] = 20;
			mp['e'] = 30;

			// using find() to search for 'b' key found "it18" has address of key value pair.
			it18 = mp.find('b');

			cout << endl;
			if (it18 == mp.end())
				cout << "Key-value pair not present in map";
			else
				cout << "Key-value pair present : " << it18->first << "->" << it18->second;
			cout << endl;

			// using find() to search for 'm' key not found "it19" has address of end of map
			it19 = mp.find('m');

			if (it19 == mp.end())
				cout << "Key-value pair not present in map";
			else
				cout << "Key-value pair present : " << it19->first << "->" << it19->second;

			// C++ code to demonstrate the working of lower_bound()
			// declaring iterators
			map<char, int>::iterator it20;

			// using lower_bound() to search for 'b' key found "it18" has address of key value pair.
			it18 = mp.lower_bound('b');

			cout << endl;
			if (it18 == mp.end())
				cout << "Key-value pair not present in map";
			else
				cout << "Key-value pair present : " << it18->first << "->" << it18->second;
			cout << endl;

			// using lower_bound() to search for 'd' key found "it19" has address of key value pair.
			it19 = mp.lower_bound('d');

			cout << endl;
			if (it19 == mp.end())
				cout << "Key-value pair not present in map";
			else
				cout << "Key-value pair present : " << it19->first << "->" << it19->second;
			cout << endl;

			// using lower_bound() to search for 'p' key found "it20" has address of key value pair.
			it20 = mp.lower_bound('p');

			cout << endl;
			if (it20 == mp.end())
				cout << "Key-value pair not present in map";
			else
				cout << "Key-value pair present : " << it20->first << "->" << it20->second;
			cout << endl;

			// C++ code to demonstrate the working of upper_bound()

			// using upper_bound() to search for 'b' key found "it18" has address of key value pair.
			it18 = mp.upper_bound('b');

			cout << endl;
			if (it18 == mp.end())
				cout << "Key-value pair not present in map";
			else
				cout << "Key-value pair present : " << it18->first << "->" << it18->second;
			cout << endl;

			// using upper_bound() to search for 'd' key found "it19" has address of key value pair.
			it19 = mp.upper_bound('d');

			cout << endl;
			if (it19 == mp.end())
				cout << "Key-value pair not present in map";
			else
				cout << "Key-value pair present : " << it19->first << "->" << it19->second;
			cout << endl;

			// using upper_bound() to search for 'p' key found "it20" has address of key value pair.
			it20 = mp.upper_bound('p');

			cout << endl;
			if (it20 == mp.end())
				cout << "Key-value pair not present in map";
			else
				cout << "Key-value pair present : " << it20->first << "->" << it20->second;
			cout << endl;

			// C++ code to demonstrate the working of equal_range()
			pair<map<char, int>::iterator, map<char, int>::iterator> it21;

			// using equal_range() to search for 'b' key found 1st element of "it21" has the address to lower_bound (b) 2nd element of "it" has the address to upper_bound (c)
			it21 = mp.equal_range('b');

			cout << "\nThe lower_bound of key is : " << it21.first->first << "->" << it21.first->second << endl << "The upper_bound of key is : " << it21.second->first << "->" << it21.second->second << endl;

			// using equal_range() to search for 'd' key found 1st element of "it21" has the address to lower_bound (b) 2nd element of "it" has the address to upper_bound (c)

			it21 = mp.equal_range('d');
			cout << "\nThe lower_bound of key is : " << it21.first->first << "->" << it21.first->second << endl << "The upper_bound of key is : " << it21.second->first << "->" << it21.second->second << endl;

			cout << endl;

			// C++ code to demonstrate the working of insert()
			// declaring map of char and int
			map< char, int > mp2;
			
			// declaring pair for return value of map containing map iterator and bool
			pair <map<char, int>::iterator, bool> ptr2;

			// using insert() to insert single pair inserting 'a' with 20
			ptr2 = mp2.insert(pair<char, int>('a', 20));

			// checking if the key was already present or newly inserted
			if (ptr2.second)
				cout << "\nThe key was newly inserted";
			else
				cout << "The key was already present";
			
			cout << endl;

			// printing map pairs after insertion
			cout << "The map pairs after 1st insertion are : \n";

			for (it20 = mp2.begin(); it20 != mp2.end(); ++it20)
				cout << it20->first << "->" << it20->second << endl;

			it19 = mp2.begin();

			// inserting map pair using hint
			mp2.insert(it19, pair<char, int>('b', 24));

			cout << endl;

			// printing map pairs after insertion
			cout << "The map pairs after 2nd insertion are : \n";

			for (it20 = mp2.begin(); it20 != mp2.end(); it20++)
				cout << it20->first << "->" << it20->second << endl;

			// initializing another map
			map<char, int> mp3;

			//using insert(beg_iter, end_iter) to copy all elements
			mp3.insert(mp2.begin(), mp2.end());

			// printing new map pairs after insertion
			cout << "\nThe new map pairs after insertion are : \n";

			for (it20 = mp3.begin(); it20 != mp3.end();++it20)
				cout << it20->first << "->" << it20->second << endl;

			// C++ code to demonstrate the working of emplace()
			// declaring iterators
			map<char, int>::iterator it22;

			// using emplace() to insert single pair inserting 'a' with 24
			ptr2 = mp2.emplace('z', 24);

			// checking if the key was already present or newly emplace
			if (ptr2.second)
				cout << "\nThe key was newly emplace";
			else
				cout << "The key was already present";

			// using emplace() to insert single pair inserting 'a' with 24
			ptr2 = mp2.emplace('y', 24);

			// checking if the key was already present or newly emplace
			if (ptr2.second)
				cout << "\nThe key was newly emplace";
			else
				cout << "The key was already present";
			
			cout << endl;

			// printing map pairs after emplace
			cout << "The map pairs after 1st emplace are : \n";

			for (it20 = mp2.begin(); it20 != mp2.end(); ++it20)
				cout << it20->first << "->" << it20->second << endl;

			it22 = mp2.begin();

			// emplace map pair using hint
			mp2.emplace_hint(it22, 'b', 20);

			cout << endl;

			// printing map pairs after emplace
			cout << "The map pairs after 2nd emplace are : \n";

			for (it20 = mp2.begin(); it20 != mp2.end(); it20++)
				cout << it20->first << "->" << it20->second << endl;

			// C++ code to demonstrate the working of operator[]
			// printing values
			cout << "The element keys to a is : ";
			cout << mp['a'] << endl;
			cout << "The element keys to b is : ";
			cout << mp['b'] << endl;
			cout << "The element keys to c is : ";
			cout << mp['c'] << endl;

			// default constructor is called prints 0

			cout << "The element keys to g is : ";
			cout << mp['g'] << endl;
			
			// INTEGER VECTOR EXAMPLE CPP program to illustrate Implementation of emplace() function
			vector<int> myvector6;
			myvector6.emplace_back(1);
			myvector6.emplace_back(2);
			myvector6.emplace_back(3);
			myvector6.emplace_back(4);
			myvector6.emplace_back(5);
			myvector6.emplace_back(6);
			// vector becomes 1, 2, 3, 4, 5, 6

			// printing the vector
			cout << endl;
			for (auto it = myvector6.begin(); it != myvector6.end(); ++it)
				cout << ' ' << *it;
			
			// STRING VECTOR EXAMPLE CPP program to illustrate Implementation of emplace() function
			vector<string> myvector7;
			myvector7.emplace_back("Rodrigo");
			myvector7.emplace_back("Zaleski");
			myvector7.emplace_back("Pioner");

			// vector becomes Rodrigo, Zaleski, Pioner

			// printing the vector
			cout << endl;
			for (auto it = myvector7.begin(); it != myvector7.end(); ++it)
				cout << ' ' << *it;
			
			// CHARACTER VECTOR EXAMPLE CPP program to illustrate Implementation of emplace() function
			vector<char> myvector8;
			myvector8.emplace_back('R');
			myvector8.emplace_back('Z');
			myvector8.emplace_back('P');

			// vector becomes R, Z, P

			// printing the vector
			cout << endl;
			for (auto it = myvector8.begin(); it != myvector8.end(); ++it)
				cout << ' ' << *it;

			// CPP program to illustrate Application of emplace_back function
			count3 = 0;
			while (!myvector6.empty()) {
				count3++;
				myvector6.pop_back();
			}
			cout << endl << count3 << endl;

			// C++ code to demonstrate difference between emplace_back and insert_back
			// declaring priority queue
			vector<pair<char, int>> vect22;

			// using emplace() to insert pair in-place
			vect22.emplace_back('a', 24);

			// Below line would not compila 
			//vect.push_back('b',25);

			// using push_back() to insert
			vect22.push_back(make_pair('b', 25));

			// printing the vector
			for (int i = 0; i < vect22.size(); i++)
				cout << vect22[i].first << " " << vect22[i].second << endl;

			// CPP program to illustrate the list::front() function
			// Creating a list
			list<int> demoList;

			// Add elements to the list
			demoList.push_back(10);
			demoList.push_back(20);
			demoList.push_back(30);
			demoList.push_back(40);

			// get the first element using front()
			count3 = demoList.front();

			// print the first element
			cout << count3;

			// get the last element using back()
			count3 = demoList.back();

			// print the last element
			cout << count3;

			//Initial List:
			cout << "\nInitial list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// Adding elements to the front of List using push_front
			demoList.push_front(5);

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// CPP program to illustrate the list::push_back() function 

			// Adding elements to the back of List using push_back
			demoList.push_back(5);

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// Size of list after adding some elements
			cout << "\nSize of list after adding three elements: " << demoList.size();

			// CPP program to illustrate the list::pop_front() function 

			//Initial List:
			cout << "\nInitial list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// removing an element from the front of List using pop_front
			demoList.pop_front();

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
			cout << *itr << " ";

			// CPP program to illustrate the list::pop_back() function 

			//Initial List:
			cout << "\nInitial list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// removing an element from the front of List using pop_back
			demoList.pop_back();

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// CPP program to illustrate the begin() end() function 
			// using begin() to print list
			cout << endl;
			for (auto it = demoList.begin(); it != demoList.end(); ++it)
				cout << ' ' << *it;

			// CPP program to illustrate the rbegin() rend() function 
			cout << endl;
			for (auto it = demoList.rbegin(); it != demoList.rend(); ++it)
				cout << ' ' << *it;

			// CPP program to illustrate the cbegin() cend() function 
			cout << endl;
			cout << "The first element is: " << *demoList.cbegin();
			for (auto it = demoList.cbegin(); it != demoList.cend(); ++it)
				cout << ' ' << *it;

			// CPP program to illustrate the crbegin() crend() function 
			cout << endl;
			cout << "The first element is: " << *demoList.crbegin();
			for (auto it = demoList.crbegin(); it != demoList.crend(); ++it)
				cout << ' ' << *it;
			
			// CPP program to illustrate the empty() function 
			// Creating a list
			list<int> demoList2;

			// check if list is empty
			cout << endl;
			if (demoList2.empty())
				cout << "Empty List\n";
			else
				cout << "Not empty\n";
			// check again if list is empty
			cout << endl;
			if (demoList.empty())
				cout << "Empty List\n";
			else
				cout << "Not empty\n";

			// CPP program to illustrate the insert() function 
			// using assign() to insert multiple numbers creates 3 occurrences of "2"
			demoList2.assign(3, 2);

			// initializing list iterator to beginning
			list<int>::iterator it23 = demoList2.begin();

			// iterator to point to 3rd position
			advance(it23, 2);

			// using insert to insert 1 element at the 3rd position inserts 5 at 3rd position
			demoList2.insert(it23, 5);

			// Printing the new list
			cout << "The list after inserting" << " 1 element using insert() is : ";
			for (list<int>::iterator i = demoList2.begin(); i != demoList2.end(); i++)
				cout << *i << " ";

			// using insert to insert 2 element at the 4rd position inserts 2 of 7 at 4rd position
			demoList2.insert(it23, 2, 7);

			// Printing the new list
			cout << "The list after inserting" << " multiple element using insert() is : ";
			for (list<int>::iterator i = demoList2.begin(); i != demoList2.end(); i++)
				cout << *i << " ";

			// CPP program to illustrate the erase() function 

			//Initial List:
			cout << "\nInitial list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";
			
			// list iterator to beginning
			it23 = demoList.begin();

			// deleting the first element
			demoList.erase(it23);

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			demoList.push_back(30);
			demoList.push_back(30);
			demoList.push_back(40);

			// initializing list iterator to beginning
			list<int>::iterator it24 = demoList.begin();

			// Incrementing it24 by 3 positions
			//advance(it24, 3);
			it24++;

			// deleting range of elements from indx [0,3)
			//demoList.erase(it23, it24);

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// CPP program to illustrate the assign() function 
			// Assigning the value 100, 5 times to the list demoList
			demoList.assign(5, 100);

			// Displaying the list
			cout << endl;
			for (int itr : demoList)
				cout << itr << " ";

			// Copying demoList2 to demoList
			demoList.assign(demoList2.begin(), demoList2.end());

			// Displaying the list
			cout << endl;
			for (int itr : demoList)
				cout << itr << " ";

			// CPP program to illustrate the remove() function 

			//Initial List:
			cout << "\nInitial list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// delete all elements with value 2
			demoList.remove(2);

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// CPP program to illustrate the remove_if() function 

			//demoList.remove_if(even);

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			//demoList.remove_if( prime);

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// CPP program to illustrate the reverse() function 

			//Initial List:
			cout << "\nInitial list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// reversing the list
			demoList.reverse();

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// CPP program to illustrate the size() function 

			// getting size the list
			count3 = demoList.size();

			cout << "\nThe list contains " << count3 << " elements";

			// CPP program to illustrate the resize() function 

			//Initial List:
			cout << "\nInitial list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// Resize list to contains less elements
			demoList.resize(1);

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";
			// Resize list to contains more elements with specified value
			demoList.resize(4, 40);

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";

			// SORTING INTEGERS CPP program to illustrate Implementation of sort() function
			// sort function
			demoList2.sort();

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList2.begin(); itr != demoList2.end(); itr++)
				cout << *itr << " ";

			// SORTING INTEGERS CPP program to illustrate Implementation of sort() function
			// list declaration of string type
			list<string> demoList3{ "Rodrigo", "Zaleski", "Pioner" };
			// sort function
			demoList3.sort();

			//Final List:
			cout << "\Final list: ";
			for (auto itr = demoList3.begin(); itr != demoList3.end(); itr++)
				cout << *itr << " ";

			//CPP program to illustrate Implementation of max_size() function
			//checking the max size of the list
			cout << endl << demoList3.max_size();

			//CPP program to illustrate Implementation of max_size() function
			// Driver code
			list<double> demoList4 = { 2.55, 3.14, 4.16, 4.16, 12.65, 12.65, 13.59 };

			cout << endl << "List is: ";

			//sort the list
			demoList4.sort();

			// unique operation on list with parameters
			demoList4.unique();

			// starts from the first element of the list to the last
			for (auto itr = demoList4.begin(); itr != demoList4.end(); itr++)
				cout << *itr << " ";

			// unique operation on list with parameter
			//demoList4.unique(compare);

			// starts from the first element of the list to the last
			for (auto itr = demoList4.begin(); itr != demoList4.end(); itr++)
				cout << *itr << " ";

			//CPP program to illustrate Implementation of clear() function
			demoList4.clear();
			// List becomes emptyt

			// Printing the list
			cout << endl;
			for (auto itr = demoList4.begin(); itr != demoList4.end(); itr++)
				cout << *itr << " ";

			//CPP program to illustrate Implementation of = operation
			list<int> demoList5{ 1,2,3 };
			list<int> demoList6{ 3,2,1,4 };
			demoList5 = demoList6;

			// Printing the list
			cout << endl;
			for (auto itr = demoList5.begin(); itr != demoList5.end(); itr++)
				cout << *itr << " ";

			//CPP program to illustrate Implementation of swap() function
			demoList5.push_back(100);
			demoList6.push_back(202);

			// using swap() function to swap elements of lists
			demoList5.swap(demoList6);

			// Printing the list 5
			cout << endl;
			for (auto itr = demoList5.begin(); itr != demoList5.end(); itr++)
				cout << *itr << " ";

			// Printing the list 6
			cout << endl;
			for (auto itr = demoList6.begin(); itr != demoList6.end(); itr++)
				cout << *itr << " ";

			//CPP program to illustrate Implementation of splice() function
			// transfer all the elements of demoList6
			demoList5.splice(demoList5.begin(), demoList6);

			// Printing the list 5
			cout << endl;
			for (auto itr = demoList5.begin(); itr != demoList5.end(); itr++)
				cout << *itr << " ";

			// transfer all the elements of demoList
			demoList.splice(demoList.end(), demoList5);

			// Printing the list 
			cout << endl;
			for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
				cout << *itr << " ";
			
			// initializing lists and iterator
			list<int> l1 = { 1, 2, 3 };
			list<int> l2 = {4, 5};
			list<int>::iterator it25;

			// Iterator pointing to 4
			it25 = l2.begin();

			// transfer 4 at the end of demoList5
			l1.splice(l1.end(), l2, it25);

			// Printing the list 5
			cout << endl;
			for (auto itr = l1.begin(); itr != l1.end(); itr++)
				cout << *itr << " ";

			//CPP program to illustrate Implementation of merge() function

			// merge operation
			l2.merge(l1);

			// Printing the list 
			cout << endl;
			for (auto itr = l2.begin(); itr != l2.end(); itr++)
				cout << *itr << " ";

			//CPP program to illustrate Implementation of emplace() function
			auto it26 = l2.emplace(l2.begin(), 2);

			// inserts at the beginning of the list
			l2.emplace(it26, 1);

			// Printing the list 
			cout << endl;
			for (auto itr = l2.begin(); itr != l2.end(); itr++)
				cout << *itr << " ";

			// CPP program to illustrate the deque::insert() function insert elements by iterator
			deque<int> dq = { 1, 2, 3, 4, 5 };
			deque<int> dq3 = { 1, 2, 3, 4, 5 };

			deque<int>::iterator it27 = dq.begin();
			++it27;

			it27 = dq.insert(it27, 10); // 1 10 2 3 4 5

			cout << "\nDeque contains:";
			for (it27 = dq.begin(); it27 != dq.end(); it27++)
				cout << ' ' << *it27;
			cout << '\n';

			it27 = dq.begin();

			// 0 0 1 2 3 4 5
			dq.insert(it27, 2, 0);
			
			cout << "\nDeque contains:";
			for (it27 = dq.begin(); it27 != dq.end(); it27++)
				cout << ' ' << *it27;
			cout << '\n';
			
			it27 = dq.begin();

			vector<int> vec15(2, 10);

			// 1 10 10 2 3 4 5
			dq.insert(it27, vec15.begin(), vec15.end());

			cout << "\nDeque contains:";
			for (it27 = dq.begin(); it27 != dq.end(); it27++)
				cout << ' ' << *it27;
			cout << '\n';

			// CPP program to illustrate the deque::rbegin() function 
			
			cout << "\nDeque contains:";
			for (auto it = dq.rbegin(); it != dq.rend(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			deque<char> dq2 = { 'r', 'z', 'p'};

			cout << "\nDeque contains:";
			for (auto it = dq2.rbegin(); it != dq2.rend(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			// Print the first element of deque using cbegin() method. Get the iterator pointing to the first element and dereference it
			cout << "\nFirst element of the deque is: " << *dq.cbegin();

			// Insert an eleemnt at the front and back
			dq.push_back(45);
			dq.push_front(5);

			// Print the first element of deque using cbegin() method. Get the iterator pointing to the first element and dereference it
			cout << "\nFirst element of the deque is: " << *dq.cbegin();

			// CPP program to illustrate the deque::max_size() function 
			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			cout << "\nThe max-size of deque: " << dq.max_size();

			// CPP program to illustrate the deque::assign() function 

			// assign 5 values of 10 each
			dq.assign(5, 10);

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			// re-assigns 10 values of 15 each
			dq.assign(10, 15);

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			// assign all elements from the second position to deque 2
			dq3.assign(dq.begin() + 1, dq.end());

			cout << "\nDeque contains:";
			for (auto it = dq3.begin(); it != dq3.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			// CPP program to illustrate the deque::resize() function 
			cout << "\nSize before resize " << dq.size() << "\n";

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			// resize to 7
			dq.resize(7);

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			// CPP program to illustrate the deque::push_front() function 
			dq.push_front(6);

			// deque becomes 6, 15, 15

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';
			
			count3 = 0;
			dq.push_front(6);
			dq.push_front(61);
			dq.push_front(62);
			dq.push_front(63);
			dq.push_front(64);
			dq.push_front(65);
			while (!dq.empty()) {
				count3++;
				dq.pop_front();
			}
			cout << endl << count3 << endl;

			// CPP program to illustrate the deque::push_back() function 
			dq.push_back(6);

			// deque becomes 6, 15, 15

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';
			
			count3 = 0;
			dq.push_back(6);
			dq.push_back(61);
			dq.push_back(62);
			dq.push_back(63);
			dq.push_back(64);
			dq.push_back(65);
			while (!dq.empty()) {
				count3++;
				dq.pop_front();
			}
			cout << endl << count3 << endl;

			// CPP program to illustrate the deque::pop_front() function 
			dq.push_front(3);
			dq.push_front(2);
			dq.push_front(1);
			//dq becomes 1, 2, 3

			dq.pop_front();
			//dq becomes 2, 3

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';
			// CPP program to illustrate the deque::pop_front() function 

			dq.pop_back();
			//dq becomes 2, 3

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			count3 = 0;
			while (!dq.empty()) {
				count3++;
				dq.pop_back();
			}
			cout << endl << count3 << endl;
			deque<int> dq5{};
			deque<int> dq4{};
			dq.push_front(8);
			dq.push_front(7);
			dq.push_front(6);

			//Deque becomes 6, 7, 8

			while (!dq.empty()) {
				dq5.push_front(dq.front());
				dq.pop_front();
			}

			cout << "\nDeque contains:";
			for (auto it = dq5.begin(); it != dq5.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';
			
			while (!dq.empty()) {
				dq4.push_front(dq.front());
				dq.pop_front();
			}

			cout << "\nDeque contains:";
			for (auto it = dq4.begin(); it != dq4.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			// CPP program to illustrate the deque::front() function 
			dq.push_back(3);
			dq.push_back(2);
			dq.push_back(1);
			// Queue becomes 3, 2 , 1

			cout << endl<< dq.front();

			cout << endl << dq.back();

			cout << endl;
			if (dq.front() > dq.back())
				cout << dq.front() - dq.back();
			else if (dq.front() < dq.back())
				cout << dq.back() - dq.front();
			else
				cout << "0" << endl;

			// CPP program to illustrate the deque::clear() function 
			dq.clear();
			// Deque becomes empty

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			// CPP program to illustrate the deque::erase() function 

			dq.push_front(8);
			dq.push_front(7);
			dq.push_front(6);
			it27 = dq.begin();
			dq.erase(it27);

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			dq.push_front(8);
			dq.push_front(7);
			dq.push_front(6);
			deque<int>::iterator it28;

			it28 = dq.end();
			it28--;

			dq.erase(it27, it28);

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			dq.push_front(8);
			dq.push_front(7);
			dq.push_front(6);
			//while (it27 != dq.end()) {
			//	if (*it27 % 2 == 0)
			//		//dq.erase(it27);
			//	it27++;
			//}

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			// CPP program to illustrate the deque::empty() function 

			dq.push_front(8);
			dq.push_front(7);
			dq.push_front(6);

			// deque becomes 1
			if (dq.empty())
				cout << "True";
			else
				cout << "False";

			cout << endl << dq.size() << endl;

			count3 = 0;
			while (!dq.empty()) {
				count3 = count3 + dq.front();
				dq.pop_front();
			}
			cout << endl << count3 << endl;

			dq.push_front(8);
			dq.push_front(7);
			dq.push_front(6);

			count3 = 0;
			while (dq.size()>0) {
				count3 = count3 + dq.front();
				dq.pop_front();
			}
			cout << endl << count3 << endl;

			// CPP program to illustrate the = operator 
			dq3.push_front(81);
			dq3.push_front(75);
			dq3.push_front(6);
			dq = dq3;

			cout << "\nDeque contains:";
			for (auto it = dq.begin(); it != dq.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';

			cout << dq[3];

			for (int i = 0; i < dq.size(); ++i)
				if (i % 2 == 0)
					cout << dq[i] << " ";

			// CPP program to illustrate Implementation of at() function
			mydeque.push_back(3);
			mydeque.push_back(4);
			mydeque.push_back(1);
			mydeque.push_back(7);
			mydeque.push_back(3);
			cout << mydeque.at(3);

			mydeque.push_back(6);
			mydeque.push_back(9);
			mydeque.push_back(2);
			mydeque.push_back(2);
			// Deque becomes 3, 4, 1, 7, 3, 3, 6, 9, 2, 2

			for (int i = 0; i < mydeque.size(); ++i)
				if (i % 2 == 0)
					cout << mydeque.at(i) << " ";

			// CPP program to illustrate Implementation of swap() function
			mydeque2.push_back(5);
			mydeque2.push_back(6);
			mydeque2.push_back(3);
			mydeque2.push_back(9);
			mydeque2.push_back(5);
			mydeque2.push_back(8);
			mydeque2.push_back(11);
			mydeque2.push_back(4);
			mydeque2.push_back(4);

			// using swap() function to swap elements of deque
			mydeque.swap(mydeque2);

			// printing the first deque
			cout << endl << "mydeque = ";
			for (auto it = mydeque.begin(); it < mydeque.end(); ++it)
				cout << *it << " ";

			// printing the first deque
			cout << endl << "mydeque2 = ";
			for (auto it = mydeque2.begin(); it < mydeque2.end(); ++it)
				cout << *it << " ";

			// INTEGER DEQUE EXAMPLE CPP program to illustrate Implementation of emplace_front() and emplace_back() function
			mydeque.emplace_front(1);
			mydeque.emplace_front(2);
			mydeque.emplace_front(3);
			mydeque.emplace_front(4);
			mydeque.emplace_front(5);
			mydeque.emplace_back(1);
			mydeque.emplace_back(2);
			mydeque.emplace_back(3);
			mydeque.emplace_back(4);
			mydeque.emplace_back(5);

			// printing the first deque
			cout << endl << "mydeque = ";
			for (auto it = mydeque.begin(); it < mydeque.end(); ++it)
				cout << *it << " ";

			mydeque3.emplace_front("Rodrigo");
			mydeque3.emplace_front("Zaleski");
			mydeque3.emplace_front("Pioner");
			mydeque3.emplace_back("dez");
			mydeque3.emplace_back("e");
			mydeque3.emplace_back("sete");

			// printing the first deque
			cout << endl << "mydeque = ";
			for (auto it = mydeque3.begin(); it < mydeque3.end(); ++it)
				cout << *it << " ";

			count3 = 0;

			// counting elements in deque
			while (!mydeque.empty()) {
				count3++;
				mydeque.pop_back();
			}
			cout << count3;

			sum = 0;

			cout << endl;

			// counting sum of elements in deque
			while (!mydeque2.empty()) {
				sum += mydeque2.back();
				mydeque2.pop_back();
			}
			cout << sum << endl;

			// C++ code to demonstrate array decay

			int a12[7] = { 1, 2, 3, 4, 5, 6, 7, };

			// Printing original size of array
			cout << "Actual size of array is: " << sizeof(a12) << endl;

			// Passing a pointer to array
			aDecay(a12);

			// Calling function by pointer
			pDecay(&a12);

			// C++ code to demonstrate prevention of decay of array

			int a13[7] = { 1, 2, 3, 4, 5, 6, 7, };
			
			// Printing original size of array
			cout << "Actual size of array is: " << sizeof(a13) << endl;

			// Calling function by reference
			fun3(a13);
			
			// C++ code to demonstrate working of array, at() and get()
			// Initializing the array elements
			array<int, 6> ar10 = { 1, 2, 3, 4, 5, 6 };

			// Printing array elements using at()
			cout << endl<< "The array elements are (using at()) : ";
			for (int i = 0; i < 6; i++)
				cout << ar10.at(i) << " " << endl;

			// Printing array elements using get()
			cout << endl<< "The array elements are (using get()) : ";
			cout << get<0>(ar10) << " " << get<1>(ar10) << " " << get<2>(ar10) << " " << get<3>(ar10) << " " << get<4>(ar10) << " " << get<5>(ar10)<< endl;

			// Printing array elements using operator[]
			cout << endl << "The array elements are (using operator[]) : ";
			for (int i = 0; i < 6; i++)
				cout << ar10[i] << " " << endl;

			// C++ code to demonstrate working of front() and back()
			// Printing the firts element of array
			cout << endl << "First element of array is : " << ar10.front() << endl;

			// Printing the last element of array
			cout << endl << "Last element of array is : " << ar10.back() << endl;

			// C++ code to demonstrate working of size() and max_size()
			// Printing the number of elements of array
			cout << endl << "The number of array elements is : " << ar10.size() << endl;

			// Printing maximum elements array can hold
			cout << endl << "Maximum elements array can hold is : " << ar10.max_size() << endl;

			// C++ code to demonstrate working of swap()
			//Initializing 2nd array
			array<int, 6> ar11 = { 7,8,9,10,11,12 };

			// Printing 1st and 2nd array before swapping
			cout << endl << "The first array elements before swapping are : ";
			for (int i = 0; i < 6; i++)
				cout << ar10[i] << " " << endl;
			cout << endl << "The second array elements before swapping are : ";
			for (int i = 0; i < 6; i++)
				cout << ar11[i] << " " << endl;

			// Swapping ar11 values with ar10
			ar10.swap(ar11);

			// Printing 1st and 2nd array after swapping
			cout << endl << "The first array elements after swapping are : ";
			for (int i = 0; i < 6; i++)
				cout << ar10[i] << " " << endl;
			cout << endl << "The second array elements after swapping are : ";
			for (int i = 0; i < 6; i++)
				cout << ar11[i] << " " << endl;

			// C++ code to demonstrate working of empty() and fill()
			// Checking size of array if it is empty
			ar13.empty() ? cout << "Array empty" : cout << "Array not empty";
			cout << endl;
			
			// Filling array with 0
			ar12.fill(0);

			// Displaying array after filling
			cout << endl << "Array after filling operation is : ";
			for (int i = 0; i < 6; i++)
				cout << ar12[i] << " ";

			// CPP code to illustrate the forward_list::assign() function
			// Create n elements in sample1 and initialize all of them with 3
			sample1.assign(5, 3);

			//Initialize sample2 with elements in the range [sample1.begin(), sample1.end()]
			sample2.assign(sample1.begin(), sample1.end());

			// Display sample 1
			cout << endl << "sample1: ";
			for (int& x : sample1)
				cout << x << " ";

			cout << endl;

			// Display sample 2
			cout << endl << "sample2: ";
			for (int& x : sample2)
				cout << x << " ";

			// CPP code to illustrate the forward_list::assign() function
			sample3.assign({ 4, 5, 7, 8, 9, 45 });

			// Display sample3
			cout << endl << "sample3: ";
			for (int& x : sample3)
				cout << x << " ";

			// CPP program to illustrate push_front() function

			sample3.push_front(6);

			// Display sample 3
			cout << endl << "sample3: ";
			for (int& x : sample3)
				cout << x << " ";

			sample3.push_front(46);
			sample3.push_front(43);
			sample3.push_front(58);
			sample3.push_front(24);
			sample3.push_front(45);
			sample3.push_front(89);
			sample3.push_front(3);

			// Sorting function

			sample3.sort();

			// Display sample3
			cout << endl << "sample3: ";
			for (auto it = sample3.begin(); it != sample3.end(); ++it)
				cout << ' ' << *it;

			// CPP program to illustrate pop_front() function
			sample3.pop_front();

			// Display sample3
			cout << endl << "sample3: ";
			for (auto it = sample3.begin(); it != sample3.end(); ++it)
				cout << ' ' << *it;

			while (!sample3.empty()) {
				sample4.push_front(sample3.front());
				sample3.pop_front();
			}

			for (auto it = sample4.begin(); it != sample4.end(); ++it)
				cout << ' ' << *it;

			// INTEGER FORWARD LIST EXAMPLE CPP program to illustrate Implementation of emplace() function
			sample4.emplace_front(10);
			sample4.emplace_front(11);
			sample4.emplace_front(12);
			sample4.emplace_front(13);
			sample4.emplace_front(14);
			sample4.emplace_front(15);

			// printing the forward list
			for (auto it = sample4.begin(); it != sample4.end(); ++it)
				cout << ' ' << *it;

			// STRING FORWARD LIST EXAMPLE CPP program to illustrate Implementation of emplace() function

			sample5.emplace_front("Pioner");
			sample5.emplace_front("Zaleski");
			sample5.emplace_front("Rodrigo");

			// forward list becomes Rodrigo, Zaleski, Pioner

			// printing the forward list
			for (auto it = sample5.begin(); it != sample5.end(); ++it)
				cout << ' ' << *it;

			// CHARACTER FORWARD LIST EXAMPLE CPP program to illustrate Implementation of emplace() function
			sample6.emplace_front('z');
			sample6.emplace_front('y');
			sample6.emplace_front('x');
			sample6.emplace_front('b');
			sample6.emplace_front('a');

			// printing the forward list
			for (auto it = sample6.begin(); it != sample6.end(); ++it)
				cout << ' ' << *it;

			sample4.emplace_front(99);
			sample4.emplace_front(101);
			sample4.emplace_front(103);
			sample4.emplace_front(100);
			sample4.emplace_front(90);
			sample4.emplace_front(109);
			sample4.emplace_front(99);

			// Sorting function
			sample4.sort();

			// printing the forward list
			cout << endl;
			for (auto it = sample4.begin(); it != sample4.end(); ++it)
				cout << ' ' << *it;

			// C++ program to illustrate the forward_list::insert_after() function

			list<int> sampleList = { 8, 9, 10 };

			// This iterator points to the first element
			auto it_new = sample4.begin();

			// element to be inserted
			element = 20;

			// Implementing syntax 1
			it_new = sample4.insert_after(it_new, element);

			cout << endl << "After Syntax 1: ";
			for (auto it = sample4.cbegin(); it != sample4.cend(); it++)
				cout << *it << " ";

			// it_new points to new element inserted which is 20 make it to point to next element

			it_new++;

			// Implementing syntax 2

			it_new = sample4.insert_after(it_new, 3, element);

			cout << endl << "After Syntax 2: ";
			for (auto it = sample4.cbegin(); it != sample4.cend(); it++)
				cout << *it << " ";

			// Implementing syntax 3

			it_new = sample4.insert_after(it_new, sampleList.begin(), sampleList.end());

			cout << endl << "After Syntax 3: ";
			for (auto it = sample4.cbegin(); it != sample4.cend(); it++)
				cout << *it << " ";

			// Implementing syntax 4

			it_new = sample4.insert_after(it_new, { 50, 60 });

			cout << endl << "After Syntax 4: ";
			for (auto it = sample4.cbegin(); it != sample4.cend(); it++)
				cout << *it << " ";

			// C++ program to illustrate the forward_list::emplace_after() function

			it_new = sample4.before_begin();

			// use of emplace_after function insert elements at positions
			it_new = sample4.emplace_after(it_new, 8);
			it_new = sample4.emplace_after(it_new, 10);

			cout << endl << "The elements are: ";
			for (auto it = sample4.cbegin(); it != sample4.cend(); it++)
				cout << *it << " ";

			// use of emplace_front function inserts elements at front
			sample4.emplace_front(88);
			sample4.emplace_front(77);

			cout << endl << "The elements are: ";
			for (auto it = sample4.cbegin(); it != sample4.cend(); it++)
				cout << *it << " ";

			// CPP program to illustrate Implementation of clear() function
			sample4.clear();
			// Forward List becomes empty

			cout << endl << "The elements are: ";
			for (auto it = sample4.cbegin(); it != sample4.cend(); it++)
				cout << *it << " ";

			sample7.push_front(1);
			sample7.push_front(2);
			sample7.push_front(3);
			sample7.push_front(4);
			sample7.push_front(5);

			it29 = sample7.begin();
			sample7.erase_after(it29);

			cout << endl << "The elements are: ";
			for (auto it = sample7.begin(); it != sample7.end(); it++)
				cout << *it << " ";

			// CPP program to illustrate Implementation of erase_after() function
			sample7.push_front(6);

			it29 = sample7.begin();
			it30 = sample7.end();

			sample7.erase_after(it29, it30);

			cout << endl << "The elements are: ";
			for (auto it = sample7.begin(); it != sample7.end(); it++)
				cout << *it << " ";

			// CPP program to illustrate Implementation of remove() function
			sample7.push_front(1);
			sample7.push_front(2);
			sample7.push_front(3);
			sample7.push_front(4);
			sample7.push_front(5);
			sample7.remove(5);

			cout << endl << "The elements are: ";
			for (auto it = sample7.begin(); it != sample7.end(); it++)
				cout << *it << " ";

			// CPP program to illustrate implementation of remove_if() function

			// Driver code
			//for (auto it = sample7.begin(); it != sample7.end(); it++)
				//sample7.remove_if((*it) % 2 == 0);

			sample7.remove_if([](int i) {return i % 2 == 0; });

			cout << endl << "The elements are: ";
			for (auto it = sample7.begin(); it != sample7.end(); it++)
				cout << *it << " ";

			sample7.push_front(13);
			sample7.push_front(23);
			sample7.push_front(31);
			sample7.push_front(43);
			sample7.push_front(56);
			/*
			count3 = 1;
			for (int& x : sample7) {

				sample7.remove_if([](int i) { return (count3 % i != 0); });
				count3++;
			}*/

			//sample7.remove_if(prime);

			cout << endl << "The elements are: ";
			for (auto it = sample7.begin(); it != sample7.end(); it++)
				cout << *it << " ";

			// C++ program to illustrate splice_after() function
			// initializing the forward lists
			sample8.push_front(113);
			sample8.push_front(123);
			sample8.push_front(131);
			sample8.push_front(143);
			sample8.push_front(156);

			// splice_after operation performed all elements except the first element in list inserted in list 2 between 

			sample8.splice_after(sample8.begin(), sample7, sample7.begin(), sample7.end());

			cout << endl << "The elements are: ";
			for (auto it = sample8.begin(); it != sample8.end(); it++)
				cout << *it << " ";

			// splice_after operation performed all elements of sample are inserted in sample between
			sample8.splice_after(sample8.begin(), sample7, sample7.before_begin(), sample7.end());

			cout << endl << "The elements are: ";
			for (auto it = sample8.begin(); it != sample8.end(); it++)
				cout << *it << " ";

			// CPP program to illustrate Implementation of front() function
			cout << endl << sample8.front();

			// CPP program to illustrate Implementation of empty() function
			if (sample8.empty())
				cout << endl << "True";
			else
				cout << endl << "False";

			// CPP program to illustrate Application of empty() function
			sum2 = 0;
			while (!sample8.empty()) {
				sum2 += sample8.front();
				sample8.pop_front();
			}
			cout << endl << sum2;

			// CPP program to illustrate forward_list::cbegin()
			// initializing the forward lists
			sample8.push_front(113);
			sample8.push_front(123);
			sample8.push_front(131);
			sample8.push_front(143);
			sample8.push_front(156);
			// Get the first element by dereferencing the iterator returned by sample8.cbegin()
			cout << endl << "\n1st element of sample: ";
			cout << *sample8.cbegin();

			// Display the elements

			cout << "sample: ";
			for (auto it = sample8.cbegin(); it != sample8.cend(); it++)
				cout << *it << " ";

			// C++ program to illustrate the before_begin() function

			// performing before_begin function
			auto it31 = sample8.before_begin();

			// inserting element before the first element
			sample8.insert_after(it31, 10);

			cout << endl << "Element of the list are: " << endl;

			// loop to print the elements of the list
			for (auto it = sample8.begin(); it != sample8.end(); ++it)
				cout << *it << " ";

			// C++ program to illustrate the cbefore_begin() function

			// performing cbefore_begin function
			auto it32 = sample8.cbefore_begin();

			// inserting element before the first element
			sample8.insert_after(it32, 10);

			cout << endl << "Element of the list are: " << endl;

			// loop to print the elements of the list
			for (auto it = sample8.begin(); it != sample8.end(); ++it)
				cout << *it << " ";

			// C++ program to illustrate the max_size() function
			// print max number of values that can be held by forward_list

			cout << "Max_size of the list is " << sample8.max_size() << endl;
			
			// C++ program to illustrate the forward_list::resize() function

			// loop to print the elements of the list
			for (auto it = sample8.begin(); it != sample8.end(); ++it)
				cout << *it << " ";

			// resize to 7
			sample8.resize(3);

			cout << endl;

			// loop to print the elements of the list
			for (auto it = sample8.begin(); it != sample8.end(); ++it)
				cout << *it << " ";

			// C++ program to illustrate the unique() function

			// function for binary_predicate
			/*bool compare(int a, int b)
			* {
			* return (abs(a) == abs(b));
			* }
			* 
			*/
			// this function can also be used and passed inside unique(), to get same result

			// loop to print the elements of the list
			for (auto it = sample8.begin(); it != sample8.end(); ++it)
				cout << *it << " ";

			// resize to 7
			sample8.unique();

			cout << endl;

			// loop to print the elements of the list
			for (auto it = sample8.begin(); it != sample8.end(); ++it)
				cout << *it << " ";

			// C++ program to illustrate the reverse() function

			// loop to print the elements of the list
			for (auto it = sample8.begin(); it != sample8.end(); ++it)
				cout << *it << " ";

			// resize to 7
			sample8.reverse();

			cout << endl;

			// loop to print the elements of the list
			for (auto it = sample8.begin(); it != sample8.end(); ++it)
				cout << *it << " ";

			Point t1(10, 15);
			cout << endl << "x = " << t1.getX() << ", " << "y = " << t1.getY();

			Test t2(10);
			cout << endl << t2.getT();
			
			int x6;

			x6 = 20;
			
			TestA2 t3(x6);
			cout << endl << t3.getTt() << endl;
			x6 = 30;
			cout << endl << t3.getTt() << endl;

			//TestA4 obj(10);

			// CPP program to illustrate Implementation of empty() function
			myqueue.push(1);

			// Queue becomes 1

			if (myqueue.empty())
				cout << "True";
			else
				cout << "False";

			// CPP program to illustrate Application of empty() function
			myqueue.push(8);
			myqueue.push(3);
			myqueue.push(6);
			myqueue.push(2);
			sum2 = 0;
			while (!myqueue.empty()) {
				sum2 += myqueue.front();
				myqueue.pop();
			}
			cout << endl << sum2;

			// CPP program to illustrate Implementation of size() function
			myqueue.push(1);
			myqueue.push(8);
			myqueue.push(3);
			myqueue.push(6);
			myqueue.push(2);

			cout << endl << myqueue.size();

			// CPP program to illustrate Application of size() function
			myqueue.push(8);
			myqueue.push(3);
			myqueue.push(6);
			myqueue.push(2);
			sum2 = 0;
			while (myqueue.size()>0) {
				sum2 += myqueue.front();
				myqueue.pop();
			}
			cout << endl << sum2;

			// CPP program to illustrate Implementation of swap() function
			x6 = 96;
			for (int i = 0; i < 5; i++) {
				queue1.push(x6 + 1);
				x6++;
			}
			for (int i = 0; i < 4; i++) {
				queue2.push(x6 + 1);
				x6++;
			}

			// Swap elements of queues
			queue1.swap(queue2);

			// Print the first queue
			cout << endl << "queue1 = ";
			while (!queue1.empty()) {
				cout << queue1.front() << " ";
				queue1.pop();
			}

			// Print the second set
			cout << endl << "queue2 = ";
			while (!queue2.empty()) {
				cout << queue2.front() << " ";
				queue2.pop();
			}
			// INTEGER queue EXAMPLE CPP program to illustrate Implementation of emplace() function
			myqueue.emplace(1);
			myqueue.emplace(2);
			myqueue.emplace(3);
			myqueue.emplace(4);
			myqueue.emplace(5);
			myqueue.emplace(6);

			while (!myqueue.empty()) {
				cout << ' ' << myqueue.front();
				myqueue.pop();
			}

			// CHARACTER QUEUE EXAMPLE CPP program to illustrate Implementation of emplace() function
			queue1.emplace('k');
			queue1.emplace('j');
			queue1.emplace('y');
			queue1.emplace('r');
			queue1.emplace('y');
			queue1.emplace('u');

			while (!queue1.empty()) {
				cout << ' ' << queue1.front();
				queue1.pop();
			}

			// STRING QUEUE EXAMPLE CPP program to illustrate Implementation of emplace() function
			queueA.emplace("Rodrigo");
			queueA.emplace("Zaleski");
			queueA.emplace("Pioner");

			while (!queueA.empty()) {
				cout << ' ' << queueA.front();
				queueA.pop();
			}

			// CPP program to illustrate application of emplace() function
			// adding elements to the queue
			myqueue.emplace(1);
			myqueue.emplace(2);
			myqueue.emplace(3);
			myqueue.emplace(4);
			myqueue.emplace(5);
			myqueue.emplace(6);

			sum2 = 0;
			// calculating the sum
			while (!myqueue.empty()) {
				sum2 += myqueue.front();
				myqueue.pop();
			}
			cout << endl << sum2 << endl;

			// CPP program to illustrate Implementation of front() bakc() function
			myqueue.push(3);
			myqueue.push(4);
			myqueue.push(1);
			myqueue.push(7);

			cout << endl << myqueue.front();
			cout << endl << myqueue.back();

			if (myqueue.front() > myqueue.back())
				cout << myqueue.front() - myqueue.back();
			else if (myqueue.front() < myqueue.back())
				cout << myqueue.back() - myqueue.front();
			else
				cout << "0";

			// CPP program to illustrate Application of push() and pop() function

			sum2 = 0;
			//Counting number of elements in queue
			while (!myqueue.empty()) {
				myqueue.pop();
				sum2++;
			}
			cout << endl << sum2;
				
			// CPP program to illustrate Implementation of empty() function
			pqueue.push(1);

			// Priority Queue becomes 1

			if (pqueue.empty())
				cout << "True";
			else
				cout << "False";

			pqueue.push(8);
			pqueue.push(6);
			pqueue.push(3);
			pqueue.push(2);
			pqueue.push(1);
			sum2 = 0;
			while (!pqueue.empty()) {
				sum2 += pqueue.top();
				pqueue.pop();
			}
			cout << endl << sum2;

			pqueue.push(8);
			pqueue.push(6);
			pqueue.push(3);
			pqueue.push(2);
			pqueue.push(1);

			cout << endl << pqueue.size();

			sum2 = 0;
			while (pqueue.size()>0) {
				sum2 += pqueue.top();
				pqueue.pop();
			}
			cout << endl << sum2;

			// CPP program to illustrate Application of top() function
			
			prime2 = 0;
			nonprime = 0;
			
			pqueue.push(8);
			pqueue.push(6);
			pqueue.push(3);
			pqueue.push(2);
			pqueue.push(1);
			size2 = pqueue.size();

			while (!pqueue.empty()) {
				for(int i=2;i<=pqueue.top()/2;++i)
					if (pqueue.top() % i == 0) {
						prime2++;
						break;
					}
				pqueue.pop();
			}
			cout << endl << "Prime - " << prime2 << endl;
			cout << endl << "Non prime - " << size2 - prime2;

			// CPP program to illustrate Implementation of push() function

			pqueue.push(8);
			pqueue.push(6);
			pqueue.push(3);
			pqueue.push(2);
			pqueue.push(1);
			// Printing content of queue
			while (!pqueue.empty()) {
				cout << ' ' << pqueue.top();
				pqueue.pop();
			}
			// CPP program to illustrate Application of push() and pop() function
			pqueue.push(1);
			pqueue.push(8);
			pqueue.push(6);
			pqueue.push(3);
			pqueue.push(2);
			pqueue.push(1);

			pqueue.pop();
			pqueue.pop();
			while (!pqueue.empty()) {
				cout << ' ' << pqueue.top();
				pqueue.pop();
			}
			// CPP program to illustrate Application of push() and pop() function
			sum2 = 0;
			pqueue.push(1);
			pqueue.push(8);
			pqueue.push(6);
			pqueue.push(3);
			pqueue.push(2);
			pqueue.push(1);
			// Counting number of elements in queue
			while (!pqueue.empty()) {
				pqueue.pop();
				sum2++;
			}
			cout << endl << sum2;

			// CPP program to illustrate Implementation of swap() function
			pqueue.push(1);
			pqueue.push(8);
			pqueue.push(6);
			pqueue.push(3);
			pqueue.push(2);
			pqueue.push(1);
			pqueue2.push(11);
			pqueue2.push(81);
			pqueue2.push(61);
			pqueue2.push(31);
			pqueue2.push(21);
			pqueue2.push(11);

			//using swap() function to swap elements
			pqueue.swap(pqueue2);
			//printing the first priority queue
			cout << " pqueue 1 = ";
			while (!pqueue.empty()) {
				cout << ' ' << pqueue.top();
				pqueue.pop();
			}
			//printing the second priority queue
			cout << " pqueue 2 = ";
			while (!pqueue2.empty()) {
				cout << ' ' << pqueue2.top();
				pqueue2.pop();
			}

			// INTEGER PRIORITY QUEUE CPP program to illustrate Implementation of emplace() function
			pqueue.emplace(1);
			pqueue.emplace(2);
			pqueue.emplace(3);
			pqueue.emplace(4);
			pqueue.emplace(5);
			pqueue.emplace(6);
			// printing the priority queue
			cout << " pqueue 1 = ";
			while (!pqueue.empty()) {
				cout << ' ' << pqueue.top();
				pqueue.pop();
			}

			// CHARACTER PRIORITY QUEUE CPP program to illustrate Implementation of emplace() function
			pqueue3.emplace('A');
			pqueue3.emplace('b');
			pqueue3.emplace('c');
			pqueue3.emplace('d');
			pqueue3.emplace('E');
			pqueue3.emplace('f');
			// printing the priority queue
			cout << " pqueue char = ";
			while (!pqueue3.empty()) {
				cout << ' ' << pqueue3.top();
				pqueue3.pop();
			}

			// STRING PRIORITY QUEUE CPP program to illustrate Implementation of emplace() function
			pqueue4.emplace("Rodrigo");
			pqueue4.emplace("Zaleski");
			pqueue4.emplace("´Pioner");
			// printing the priority queue
			cout << " pqueue char = ";
			while (!pqueue4.empty()) {
				cout << ' ' << pqueue4.top();
				pqueue4.pop();
			}

			// C++ code to demonstrate difference between emplace and insert
			//using emplace() to insert pair in-place
			pqueue5.emplace('a', 24);

			//Below line would not compile
			//pqueue.push('b',25);

			// using push(0 to insert pair
			pqueue5.push(make_pair('b', 25));
			// printing the priority queue
			cout << " pqueue char = ";
			while (!pqueue5.empty()) {
				pair<char, int> p = pqueue5.top();
				cout << p.first << " " << p.second << endl;
				pqueue5.pop();
			}

			// C++ program to illustrate the priority_queue::value_type function
			// Driver code
			//here AnInt as a variable of int data type
			AnInt = 20;
			cout << "The value_type is AnInt = " << AnInt << endl;

			pqueue.push(AnInt);
			AnInt = 30;
			pqueue.push(AnInt);

			cout << "The element at the top of priorityqueu is: " << pqueue.top() << "." << endl;

			AString = "code";
			cout << "the value_type is AString = " << AString;

			AString = "abc";
			pqueue4.push(AString);
			AString = "def";
			pqueue4.push(AString);
			AString = "ghi";
			pqueue4.push(AString);

			cout << "Value stored in priority queue are :" << endl;
			while (!pqueue4.empty()) {
				cout << "\t" << pqueue4.top();
				pqueue4.pop();
			}

			// CPP program to illustrate Implementation of empty() function
			mystack.push(1);

			// Stack becomes 1

			if (mystack.empty())
				cout << "True";
			else
				cout << "False";

			// CPP program to illustrate Application of empty() function
			mystack.push(8);
			mystack.push(3);
			mystack.push(6);
			mystack.push(2);
			sum2 = 0;
			while (!mystack.empty()) {
				sum2 += mystack.top();
				mystack.pop();
			}
			cout << endl << sum2;

			// CPP program to illustrate Application of size() function
			mystack.push(8);
			mystack.push(3);
			cout << endl << mystack.size();

			// CPP program to illustrate Application of size() function
			mystack.push(8);
			mystack.push(3);
			mystack.push(6);
			mystack.push(2);
			sum2 = 0;
			while (mystack.size()>0) {
				sum2 += mystack.top();
				mystack.pop();
			}
			cout << endl << sum2;

			// CPP program to illustrate Application of top() function
			mystack.push(8);
			mystack.push(3);
			mystack.push(6);
			// Stack top
			cout << endl << mystack.top();

			// CPP program to illustrate Application of push() and pop() function
			mystack.push(8);
			mystack.push(3);
			mystack.push(6);
			mystack.push(2);
			sum2 = 0;
			// Counting number of elements in stack
			while (!mystack.empty()) {
				mystack.pop();
				sum2++;
			}
			cout << endl << sum2;

			// CPP program to illustrate Implementation of swap() function
			mystack.push(8);
			mystack.push(3);
			mystack.push(6);
			mystack.push(2);
			mystack2.push(58);
			mystack2.push(53);
			mystack2.push(56);
			mystack2.push(52);
			// using swap() function to swap elements of stack
			mystack.swap(mystack2);

			// printing the first stack
			cout << endl << "after mystack1 = ";
			while (!mystack.empty()) {
				cout << mystack.top() << " ";
				mystack.pop();
			}

			// printing the second stack
			cout << endl << "after mystack1 = ";
			while (!mystack2.empty()) {
				cout << mystack2.top() << " ";
				mystack2.pop();
			}

			// CPP program to illustrate Implementation of emplace() function
			mystack2.emplace(58);
			mystack2.emplace(53);
			mystack2.emplace(56);
			mystack2.emplace(52);

			// printing the first stack
			cout << endl << "after mystack1 = ";
			while (!mystack2.empty()) {
				cout << mystack2.top() << " ";
				mystack2.pop();
			}
			// CPP program to illustrate Implementation of emplace() function
			mystack2.emplace(58);
			mystack2.emplace(53);
			mystack2.emplace(56);
			mystack2.emplace(52);

			// printing the first stack
			sum2 = 0;
			cout << endl << "after mystack1 = ";
			while (!mystack2.empty()) {
				cout << mystack2.top() << " ";
				mystack2.pop();
				sum2++;
			}
			cout << endl << sum2;

			// INTEGER SET EXAMPLE CPP program to illustrate Implementation of begin() function
			myset.emplace(1);
			myset.emplace(2);
			myset.emplace(3);
			myset.emplace(4);
			myset.emplace(5);
			//using begin() to print set
			for (auto it = myset.begin(); it != myset.end(); ++it)
				cout << ' ' << *it;

			// CHARACTER SET EXAMPLE CPP program to illustrate Implementation of begin() function
			myset2.emplace('a');
			myset2.emplace('b');
			myset2.emplace('c');
			myset2.emplace('d');
			myset2.emplace('e');
			myset2.emplace('f');
			//using begin() to print set
			for (auto it = myset2.begin(); it != myset2.end(); ++it)
				cout << ' ' << *it;

			// STRING SET EXAMPLE CPP program to illustrate Implementation of begin() function
			myset3.emplace("Rodrigo");
			myset3.emplace("Zaleski");
			myset3.emplace("Pioner");
			//using begin() to print set
			for (auto it = myset3.begin(); it != myset3.end(); ++it)
				cout << ' ' << *it;

			// C++ program to illustrate size() function on set
			for (int i = 0; i < 4; i++)
				myset2.insert('a' + i);
			//Printing the size of sets
			cout << endl << "set1 size: " << myset.size();
			cout << endl << "set2 size: " << myset2.size();
			cout << endl << "set1 maxsize: " << myset.max_size();
			cout << endl << "set2 maxsize: " << myset2.max_size();

			if (myset.empty())
				cout << endl << "True";
			else
				cout << endl << "False";

			if(myset2.empty())
				cout << endl << "True";
			else
				cout << endl << "False";

			sum2 = 0;
			//finding sum of elements
			while (!myset.empty()) {
				sum2 += *myset.begin();
				myset.erase(myset.begin());
			}
			//print sum
			cout << endl << sum2;

			// CPP program to demonstrate the set::rbegin() function

			int arr17[]={19,14,12,15,11};

			set<int> myset4(arr17, arr17 + 5);

			// prints all elements in reverse order
			for (rit = myset4.rbegin(); rit != myset4.rend(); rit++)
				cout << *rit << " ";

			cout << endl << "\nThe last element in set is " << *(myset4.rbegin());

			// CPP program to demonstrate the set::crbegin() function
			
			int arr25[] = { 19,14,12,15,11 };

			set<int> myset5(arr25, arr25 + 5);

			// prints all elements in reverse order
			for (rit2 = myset5.crbegin(); rit2 != myset5.crend(); rit2++)
				cout << *rit2 << " ";

			cout << endl << "\nThe last element in set is " << *(myset5.crbegin());

			// CPP program to demonstrate the set::crbegin() function

			int arr26[] = { 19,14,12,15,11 };

			set<int> myset6(arr26, arr26 + 5);

			// prints all elements in reverse order
			for (auto it = myset6.cbegin(); it != myset6.cend(); it++)
				cout << *it << " ";

			cout << endl << "\nThe last element in set is " << *(myset6.cbegin());

			// CPP program to demonstrate the set::insert(element) function
			myset.insert(1);
			myset.insert(4);
			myset.insert(2);
			myset.insert(5);
			myset.insert(3);

			// prints all elements in reverse order
			for (auto it = myset.begin(); it != myset.end(); it++)
				cout << *it << " ";

			// CPP program to demonstrate the set::insert(iterator1, iterator2) function
			myset6.insert(myset.find(3), myset.end());

			// prints all elements in reverse order
			for (auto it = myset6.begin(); it != myset6.end(); it++)
				cout << *it << " ";

			// INTEGER SET EXAMPLE CPP program to illustrate Implementation of erase() function
			// defining sit1 pointing to the first elements and sit2 to the last element
			sit1=myset6.begin();
			sit2 = myset6.end();

			// decrementing the sit2 two times
			sit2--;
			sit2--;

			//erasing elements within the range of sit1 and sit2
			myset6.erase(sit1, sit2);
			// prints all elements in reverse order
			for (auto it = myset6.begin(); it != myset6.end(); it++)
				cout << *it << " ";
			 
			sit3 = myset2.begin();
			sit4 = myset2.end();
			
			sit4--;
			sit4--;

			myset2.erase(sit3, sit4);


			// prints all elements in reverse order
			for (auto it = myset2.begin(); it != myset2.end(); it++)
				cout << *it << " ";

			sit1 = myset5.begin();

			myset5.erase(sit1);

			// prints all elements in reverse order
			for (auto it = myset5.begin(); it != myset5.end(); it++)
				cout << *it << " ";

			sit3 = myset2.begin();

			myset2.erase(sit3);

			// prints all elements in reverse order
			for (auto it = myset2.begin(); it != myset2.end(); it++)
				cout << *it << " ";

			// CPP program to illustrate Application of erase() function

			//checking for even elements and removing them
			for (auto i = myset4.begin(); i != myset4.end();)
				if (*i % 2 == 0)
					i = myset4.erase(i);
				else
					i++;

			// prints all elements in reverse order
			for (auto it = myset4.begin(); it != myset4.end(); it++)
				cout << *it << " ";

			myset4.clear();

			// prints all elements in reverse order
			for (auto it = myset4.begin(); it != myset4.end(); it++)
				cout << *it << " ";

			// C++ program to illustrate the set::key_comp() function
			myset6.emplace(1);
			myset6.emplace(12);
			myset6.emplace(123);
			myset6.emplace(1234);
			comp = myset6.key_comp();
			// Inserting elements into set
			for (int i = 0; i <= 10; i++)
				myset6.insert(i);

			cout << "Set a has the numbers: ";

			// stores the last value of the set
			sum2 = *myset6.rbegin();

			// initializing the iterator
			sit1 = myset6.begin();

			// printing elements of all set
			do {
				cout << *sit1 << " ";
			} while (comp(*(++sit1), sum2));

			// CPP program to demonstrate the set::value_comp()
			comp2 = myset6.value_comp();

			// inserting elements to myset6
			for (int i = 0; i <= 10; i++)
				myset6.insert(i);
			
			start2 = *myset6.rbegin();

			sit1 = myset6.begin();

			// printing elements of all set
			do {
				cout << *sit1 << " ";
			} while (comp(*(++sit1), start2));

			// CPP program to demonstrate the set::find() function
			
			//iterator pointing to position where 3 is
			auto pos2 = myset6.find(3);

			// prints the set elements
			cout << endl << "The set elements after 3 are: ";
			for (auto it = pos2; it != myset6.end(); it++)
				cout << *it << " ";

			auto pos3 = myset6.find(200);

			// print element if it is present in set
			if (pos3 != myset6.end())
				cout << "Element found at position : " << *pos3;
			else
				cout << "Element not present";

			// CPP program to demonstrate the set::count() function

			myset5.emplace(11);

			if (myset5.count(11))
				cout << "11 is present in the set\n";
			else
				cout << "11 is not present in the set\n";

			if (myset5.count(18))
				cout << "18 is present in the set\n";
			else
				cout << "18 is not present in the set\n";

			// CPP program to demonstrate the set::lower_bound() function

			myset5.emplace(13);
			myset5.emplace(14);
			myset5.emplace(15);
			myset5.emplace(16);

			cout << "\nthe set elements are: ";
			for (auto it = myset5.begin(); it != myset5.end(); it++)
				cout << *it << " ";

			//when 13 is present
			auto it33 = myset5.lower_bound(13);
			if (it33 != myset5.end())
				cout << "\nThe lower bound of key 2 is " << (*it33) << endl;
			else
				cout << "\nThe element entered is larger than greatest element in the set" << endl;
			//when 12 is not present points to next grafter after 12
			it33 = myset5.lower_bound(12);
			if (it33 != myset5.end())
				cout << "\nThe lower bound of key 2 is " << (*it33) << endl;
			else
				cout << "\nThe element entered is larger than greatest element in the set" << endl;
			// when 500 excedds the max element in set
			it33 = myset5.lower_bound(500);
			if (it33 != myset5.end())
				cout << "\nThe lower bound of key 2 is " << (*it33) << endl;
			else
				cout << "\nThe element entered is larger than greatest element in the set" << endl;

			// CPP program to demonstrate the set::upper_bound() function
			// when 13 is present point to next element after 2
			auto it34 = myset5.upper_bound(13);
			cout << "\nThe upper bound of key 13 is ";
			cout << (*it34) << endl;

			//when 12 is not present points to next greater after 3
			it34 = myset5.upper_bound(12);
			cout << "\nThe upper bound of key 12 is " << (*it34) << endl;

			key3 = 13;
			it34 = myset5.upper_bound(key3);
			if (it34 == myset5.end())
				cout << "The given key is greater than or equal to the largest element";
			else
				cout << "\nthe immediate greater element " << *it34 << endl;

			key3 = 12;
			it34 = myset5.upper_bound(key3);
			if (it34 == myset5.end())
				cout << "The given key is greater than or equal to the largest element";
			else
				cout << "\nthe immediate greater element " << *it34 << endl;
			
			// CPP program to demonstrate the set::equal_range() function
			// prints the set elements
			cout << endl << "The set elements after 3 are: ";
			for (auto it = myset5.begin(); it != myset5.end(); it++)
				cout << *it << " ";

			// Function returns lower bound and upper bound
			auto it35 = myset5.equal_range(13);
			cout << "\nThe lower bound of 13 is " << *it35.first;
			cout << "\nThe upper bound of 13 is " << *it35.second;

			// Function returns the last element
			it35 = myset5.equal_range(16);
			cout << "\nThe lower bound of 16 is " << *it35.first;
			cout << "\nThe upper bound of 16 is " << *it35.second;

			// Function returns range where the element greater than 0
			it35 = myset5.equal_range(0);
			cout << "\nThe lower bound of 16 is " << *it35.first;
			cout << "\nThe upper bound of 16 is " << *it35.second;

			// INTEGER SET EXAMPLE CPP program to illustrate Implementation of emplace() function
			myset.emplace(1);
			myset.emplace(2);
			myset.emplace(3);
			myset.emplace(4);
			myset.emplace(5);
			//finding sum2 of elemnts
			sum2 = 0;
			while (!myset.empty()) {
				sit1 = myset.begin();
				sum2 += *sit1;
				myset.erase(sit1);
			}
			// printing the sum
			cout << endl << sum2;

			// CPP program to demonstrate the set::emplace_hint() function

			auto it36 = myset.emplace_hint(myset.begin(), 1);

			// stores the position of 2's insertion
			it36 = myset.emplace_hint(it36, 2);

			// fast step as it directly starts the search step from postion where 3 was last inserted
			myset.emplace_hint(it36, 3);

			// this is a slower step as it36 starts checking from the position where 3 was inserted but 0 is to be inserted before1
			myset.emplace_hint(it36, 0);

			cout << "\nthe set elements are: ";
			for (auto it = myset.begin(); it != myset.end(); it++)
				cout << *it << " ";

			// CPP program to illustrate Implementation of swap() function
			myset4.emplace(10);
			myset4.emplace(11);
			myset4.emplace(12);
			myset4.emplace(13);

			cout << "\nthe 1 set elements before swap are: ";
			for (auto it = myset.begin(); it != myset.end(); it++)
				cout << *it << " ";

			cout << "\nthe 2 set elements before swap are: ";
			for (auto it = myset4.begin(); it != myset4.end(); it++)
				cout << *it << " ";

			// Swap elements of sets
			myset.swap(myset4);

			cout << "\nthe 1 set elements after swap are: ";
			for (auto it = myset.begin(); it != myset.end(); it++)
				cout << *it << " ";

			cout << "\nthe 2 set elements after swap are: ";
			for (auto it = myset4.begin(); it != myset4.end(); it++)
				cout << *it << " ";

			// C++ code to illustrate the method set::operator=()
			myset9 = { 22,23,24,25,26 };

			// Merge both sets and move the result to myset9
			myset9 = merge2(myset, myset4);

			// copy assigment
			myset = myset9;

			cout << "\nthe 1 set elements after swap are: ";
			for (auto it = myset.begin(); it != myset.end(); it++)
				cout << *it << " ";

			cout << "\nthe 2 set elements after swap are: ";
			for (auto it = myset4.begin(); it != myset4.end(); it++)
				cout << *it << " ";

			cout << "\nthe 2 set elements after swap are: ";
			for (auto it = myset9.begin(); it != myset9.end(); it++)
				cout << *it << " ";
			
			// C++ program to demonstrate std::set::get_allocator


			//cout << "\nsize of int pointes is: " << sizeof(arr26) << endl;

			// use allocator of set to allocate array arr
			 //myset10.get_allocator().allocate(7);

			// insert elements(numbers from 0-6) in the array
			//input2(arr27);
			
			// produce output from the array
			//output2(arr27);

			//myset10.get_allocator().deallocate(arr,7);

			// Program to print elements of set
			
			unorderedset.insert(5);
			unorderedset.insert(1);
			unorderedset.insert(6);
			unorderedset.insert(3);
			unorderedset.insert(7);
			unorderedset.insert(2);

			cout << "\nElements of unordered_set: \n";
			for (auto it : unorderedset)
				cout << it << " ";

			// Program to print inorder predecessor and inorder
			myset.clear();
			myset.insert(1);
			myset.insert(5);
			myset.insert(2);
			myset.insert(9);
			myset.insert(8);

			key3 = 5;

			if (myset.find(key3) == myset.end())
				cout << "Key doesnt exist\n";
			else {
				sit1 = myset.find(key3);

				if (sit1 == myset.begin())
					cout << "\nNo predecessor\n";
				else {
					--sit1;
					cout << "\npredecessor of " << key3 << " is=" << *sit1 << "\n";
				}

			}

			key3 = 1;

			if (myset.find(key3) == myset.end())
				cout << "Key doesnt exist\n";
			else {
				sit1 = myset.find(key3);

				if (sit1 == myset.begin())
					cout << "\nNo predecessor\n";
				else {
					--sit1;
					cout << "\npredecessor of " << key3 << " is=" << *sit1 << "\n";
				}

			}
			key3 = 8;

			if (myset.find(key3) == myset.end())
				cout << "Key doesnt exist\n";
			else {
				sit1 = myset.find(key3);

				if (sit1 == myset.begin())
					cout << "\nNo predecessor\n";
				else {
					--sit1;
					cout << "\npredecessor of " << key3 << " is=" << *sit1 << "\n";
				}

			}
			key3 = 5;
			if (myset.find(key3) == myset.end())
				cout << "Key doesn't exist\n";
			else {
				sit1 = myset.find(key3); // get iterator of key3
				++key3;
				if (sit1 == myset.end())
					cout << "No sucessor\n";
				else 
					cout << "sucessor of " << key3 << " is=" << *(sit1) << "\n";
			}
			key3 = 2;
			if (myset.find(key3) == myset.end())
				cout << "Key doesn't exist\n";
			else {
				sit1 = myset.find(key3); // get iterator of key3
				++key3;
				if (sit1 == myset.end())
					cout << "No sucessor\n";
				else 
					cout << "sucessor of " << key3 << " is=" << *(sit1) << "\n";
			}
			key3 = 9;
			if (myset.find(key3) == myset.end())
				cout << "Key doesn't exist\n";
			else {
				sit1 = myset.find(key3); // get iterator of key3
				++key3;
				if (sit1 == myset.end())
					cout << "No sucessor\n";
				else 
					cout << "sucessor of " << key3 << " is=" << *(sit1) << "\n";
			}

			// CPP program to demonstrate working of map
			map_set[1] = 2;//Insertion of indexing

			// Direct pair insertion
			map_set.insert({ 4,5 });

			// Insertion of pair by make_pair
			map_set.insert(make_pair(8, 5));

			cout << "\nElements in map:\n";
			for (auto it : map_set)
				cout << "[ " << it.first << ", " << it.second << "]\n";// Sorted

			// CPP program to demonstrate working of Multimap
			multimap_set.insert({ 1,2 });
			multimap_set.insert({ 2,3 });
			multimap_set.insert({ 4,5 });
			multimap_set.insert({ 2,3 });
			multimap_set.insert({ 1,2 });

			cout << "\nElements in Multimap:\n";
			for (auto it : multimap_set)
				cout << "[ " << it.first << ", " << it.second << "]\n";// Sorted

			// CPP program to demonstrate working of Multiset

			ms1.insert(1);
			ms1.insert(3);
			ms1.insert(4);
			ms1.insert(2);
			ms1.insert(2);

			cout << "Elements in Multiset:\n";
			for (auto it : ms1)
				cout << it << " ";

			// CPP program to demonstrate working of Unordered_set
			us1.insert(1);
			us1.insert(3);
			us1.insert(4);
			us1.insert(2);
			us1.insert(2);

			cout << "\nElements in unordered_set:\n";
			for (auto it : us1)
				cout << it << " "; // Sorted

			// CPP program to demonstrate working of Unordered_map
			um1[1] = 2;
			um1[4] = 5;
			um1[2] = 3;
			um1[8] = 5;
			um1[3] = 6;

			cout << "\nElements in unordered_map:\n";
			for (auto it : um1)
				cout << "[ " << it.first << ", " << it.second << "]\n";

			// CPP program to demonstrate the multiset::begin() function
			int arr28[] = { 14,10,15,11,10 };

			// initializes the set from an array
			multiset<int>ms3(arr28, arr28 + 5);

			// Print the first element
			cout << "\nFirst element is: " << *(ms3.begin()) << endl;
			
			// prints all elements in set
			for (auto it = ms3.begin(); it != ms3.end(); it++)
				cout << *it << " ";

			// CPP program to demonstrate the multiset.size() function
			multiset<int>ms4;
			ms4.insert(10);
			ms4.insert(13);

			cout << "The size of multiset: " << ms4.size();

			ms4.insert(13);
			ms4.insert(25);
		
			cout << "\nThe size of multiset: " << ms4.size();
			ms4.insert(24);

			cout << "\nhe size of multiset: " << ms4.size();

			// C++  program to demonstrate the use of multiset max_size()
			// calculating the max size of multiset gfg
			max_elements = gfg.max_size();

			cout << "Number of elements the multiset can hold is: " << max_elements << endl;

			// C++ program to demonstrate the multiset::empty() function
			if (!ms3.empty())
				cout << "\nThe multiset is not empty";
			else
				cout << "\nThe multiset is empty";

			// C++ program to demonstrate multset::erase() method
			// Add values to the multiset
			for (int i = 1; i < 10; i++)
				ms3.insert(i);

			cout << endl << "Original multiset: ";

			for (ms_iterator = ms3.begin(); ms_iterator != ms3.end(); ++ms_iterator)
				cout << ' ' << *ms_iterator;

			cout << '\n';

			ms_iterator = ms3.begin();
			ms_iterator++;

			// Passing the iterator for the position at which the value is to be erased
			ms3.erase(ms_iterator);

			cout << "\nModified multiset: ";

			for (ms_iterator = ms3.begin(); ms_iterator != ms3.end(); ++ms_iterator)
				cout << ' ' << *ms_iterator;

			cout << '\n';

			//Passing constatn value to be erased
			sum2 = ms3.erase(10);

			cout << "Modified multiset: " << "(" << sum2 << ")" << "removed";

			cout << "\nModified multiset: ";

			for (ms_iterator = ms3.begin(); ms_iterator != ms3.end(); ++ms_iterator)
				cout << ' ' << *ms_iterator;

			auto ir2 = ms3.erase(ms_iterator, ms3.end());

			for (ms_iterator = ms3.begin(); ms_iterator != ms3.end(); ++ms_iterator)
				cout << ' ' << *ms_iterator;

			cout << '\n';

			(ir2 == ms3.end()) ? cout << "Return value is: ms3.end()\n" : cout << "Return value is not ms3.end()\n";

			// C++ program to demonstrate multiset::clear() function
			int arr29[] = { 15,10,15,11,10 };
			//initializes the set from an array
			multiset<int> ms5(arr29, arr29 + 5);
			// prints all elements in set
			cout << "\nThe elements in multiset are: ";
			for (auto it = ms5.begin(); it != ms5.end(); it++)
				cout << *it << " ";

			cout << "\nThe size after clear() is: ";

			//erases all elements
			ms5.clear();
			cout << ms5.size();

			// C++ program to illustrate the multiset::value_comp() function
			comp3 = ms5.value_comp();

			// Inserting elements into multiset
			ms5.insert(10);
			ms5.insert(20);
			ms5.insert(30);
			ms5.insert(40);

			cout << "\nMultiset has the elements\n";
			// Store key value of last element
			sum2 = *ms5.rbegin();

			// initializing the iterator
			ms_iterator = ms5.begin();

			//printing elements of all multiset
			do {
				cout << " " << *ms_iterator;
			} while (comp3(*ms_iterator++, sum2));

			// CPP program to demonstrate the multiset::find() function
			cout << "The set elements are: ";
			for (auto it = ms5.begin(); it != ms5.end(); it++)
				cout << *it << " ";
			// iterator pointing to position where 20 is
			auto pos4 = ms5.find(20);
			
			//prints the set elements
			cout << "\nThe set elements after 20 are: ";
			for (auto it = pos4; it != ms5.end(); it++)
				cout << *it << " ";

			// CPP program to demonstrate the multiset::find() function

			ms6.insert('a');
			ms6.insert('a');
			ms6.insert('b');
			ms6.insert('c');
			ms6.insert('a');
			ms6.insert('a');
			ms6.insert('c');

			cout << "\nThe set elements are: ";
			for (auto it = ms6.begin(); it != ms6.end(); it++)
				cout << *it << " ";

			//iterator pointing to position where 2 is
			auto pos5 = ms6.find('b');

			// prints the set elements
			cout << "\nThe set elements after b are: ";
			for (auto it = pos5; it != ms6.end(); it++)
				cout << *it << " ";
			cout << "a occurs" << ms6.count('a') << " times in container";

			// CPP program to demonstrate the multiset::lower_bound() function
			cout << "\nThe multiset elements are: ";
			for (auto it = ms5.begin(); it != ms5.end(); it++)
				cout << *it << " ";
			
			//when 20 is present
			auto it37 = ms5.lower_bound(20);
			cout << "\nThe lower bound of key 20 is " << *it37;

			// when 10 is not present points to next greater after 10
			it37 = ms5.lower_bound(10);
			cout << "\nThe lower bound of key 10 is " << (*it37) << endl;

			// when 100 exceeds the max element in multiset
			//it37 = ms5.lower_bound(100);
			//cout << "The lower bound of key is " << (*it37);

			// C++ program to demonstrate the multiset::upper_bound() function
			cout << "\nThe multiset elements are: ";
			for (auto it = ms5.begin(); it != ms5.end(); it++)
				cout << *it << " ";

			//when 20 is present
			it37 = ms5.upper_bound(20);
			cout << "\nThe upper bound of key 20 is " << *it37;

			// when 10 is not present points to next greater after 10
			it37 = ms5.upper_bound(10);
			cout << "\nThe upper bound of key 10 is " << (*it37) << endl;

			// INTEGER MULTISET EXAMPLE CPP program to illustrate Implementation of swap() function
			ms5.swap(ms3);

			cout << "\nThe multiset elements are: ";
			for (auto it = ms5.begin(); it != ms5.end(); it++)
				cout << *it << " ";

			cout << "\nThe multiset elements are: ";
			for (auto it = ms3.begin(); it != ms3.end(); it++)
				cout << *it << " ";

			// STRING MULTISET EXAMPLE CPP program to illustrate Implementation of swap() function
			ms7.insert("Rodrigo");
			ms8.insert("Pioner");
			// Swap elements of multisets
			ms7.swap(ms8);

			// CHARACTER MULTISET EXAMPLE CPP program to illustrate Implementation of swap() function
			ms9.insert('A');
			ms9.insert('b');
			ms9.insert('C');
			ms10.insert('D');
			ms10.insert('E');
			ms10.insert('F');

			ms9.swap(ms10);

			cout << "multiset 9 = ";
			for (auto it = ms9.begin(); it != ms9.end(); ++it)
				cout << ' ' << *it;
			
			cout << "multiset 10 = ";
			for (auto it = ms10.begin(); it != ms10.end(); ++it)
				cout << ' ' << *it;

			//INTEGER MULTISET EXAMPLE CPP program to illustrate implementation of = operator
			ms11.insert(1);
			ms11.insert(11);
			ms11.insert(111);
			ms11.insert(1111);
			ms12.insert(2);
			ms12.insert(22);
			ms11 = ms12;
			for (auto it = ms11.begin(); it != ms11.end(); ++it)
				cout << ' ' << *it;

			ms10 = ms9;
			cout << "multiset 10 = ";
			for (auto it = ms10.begin(); it != ms10.end(); ++it)
				cout << ' ' << *it;

			ms8 = ms7;
			for (auto it = ms8.begin(); it != ms8.end(); ++it)
				cout << ' ' << *it;

			// CPP program to illustrate Implementation of = operator
			ms13.insert("rodrigo");
			ms13.insert("zaleski");
			ms14.insert("pioner");
			ms13 = ms14;
			for (auto it = ms13.begin(); it != ms13.end(); ++it)
				cout << ' ' << *it;

			//CPP program to demonstrate the multiset equalrange() function
			ms11.insert(1);
			ms11.insert(11);
			ms11.insert(111);
			ms11.insert(1111);
			cout << " multiset 11 = ";
			for (auto it = ms11.begin(); it != ms11.end(); ++it)
				cout << ' ' << *it;
			//function returns lower bound and upper bound
			
			auto it38 = ms11.equal_range(1);
			cout << "\nThe lower bound of 1 is " << *it38.first;
			cout << "\nThe upper bound of 1 is " << *it38.second;
			it38 = ms11.equal_range(111);
			cout << "\nThe lower bound of 111 is " << *it38.first;
			cout << "\nThe upper bound of 111 is " << *it38.second;
			it38 = ms11.equal_range(0);
			cout << "\nThe lower bound of 0 is " << *it38.first;
			cout << "\nThe upper bound of 0 is " << *it38.second;

			ms11.erase(it38.first, it38.second);
			cout << " multiset 11 = ";
			for (auto it = ms11.begin(); it != ms11.end(); ++it)
				cout << ' ' << *it;

			// CPP program to demonstrate the multiset::emplace_hint() function
			auto it39 = ms11.emplace_hint(ms11.begin(), 1);

			// stores the postion of 2's insertion
			it39 = ms11.emplace_hint(it39, 2);

			// fast step as it directly starts the search step from position where 2 was last inserted
			ms11.emplace_hint(it39, 4);

			// this is a slower step as it starts checking from the position where 4 was inserted but 3 is to be inserted before 4
			ms11.emplace_hint(it39, 3);
			cout << " multiset 11 = ";
			for (auto it = ms11.begin(); it != ms11.end(); ++it)
				cout << ' ' << *it;

			ms11.emplace_hint(ms11.begin(), 6);
			ms11.emplace_hint(ms11.begin(), 6);
			ms11.emplace_hint(ms11.begin(), 6);
			ms11.emplace_hint(ms11.begin(), 6);
			ms11.emplace_hint(ms11.begin(), 6);
			ms11.emplace_hint(ms11.begin(), 6);
			cout << " multiset 11 = ";
			for (auto it = ms11.begin(); it != ms11.end(); ++it)
				cout << ' ' << *it;
			
			int arr30[] = { 15,12,15,11,10,10 };
			multiset<int>ms13(arr30, arr30 + 6);
			for (rit4 = ms13.rbegin(); rit4 != ms13.rend(); rit4++)
				cout << *rit4 << " ";

			cout << "\nThe last element in multiset is " << *ms13.rbegin();
			
			cout << "\nThe first element in multiset is " << *ms13.cbegin();

			for (auto it = ms13.cbegin(); it != ms13.cend(); it++)
				cout << *it << " ";

			cout << "\nThe last element in multiset is " << *ms13.crbegin();

			for (auto it = ms13.crbegin(); it != ms13.crend(); it++)
				cout << *it << " ";

			pointer = ms15.get_allocator().allocate(5);

			pointer[0] = 10;
			pointer[1] = 10;
			pointer[2] = 20;
			pointer[3] = 30;
			pointer[4] = 20;

			for (w1 = 0; w1 < 5; w1++)
				cout << pointer[w1] << " ";
			cout << endl;
			ms15.get_allocator().deallocate(pointer, 5);

			mymap['a'] = 1;
			mymap['b'] = 2;
			mymap['c'] = 3;
			for (auto it = mymap.begin(); it != mymap.end(); ++it)
				cout << it->first << " = " << it->second << '\n';

			cout << "map size: " << mymap.size();
			cout << "map max size: " << mymap.max_size();
			if (mymap.empty()) 
				cout << "True";
			else
				cout << "False";
			if (mymap2.empty()) 
				cout << "True";
			else
				cout << "False";

			mymap.insert({ 'd',2 });
			mymap.insert({ 'e',20 });
			mymap.insert({ 'f',30 });
			mymap.insert({ 'f',31 });
			for (auto it = mymap.begin(); it != mymap.end(); ++it)
				cout << it->first << " = " << it->second << '\n';

			auto it40 = mymap.find('d');
			mymap.insert(it40, { 'w',60 });
			for (auto it = mymap.begin(); it != mymap.end(); ++it)
				cout << it->first << " = " << it->second << '\n';

			mymap.erase('c');
			for (auto it = mymap.begin(); it != mymap.end(); ++it)
				cout << it->first << " = " << it->second << '\n';

			mymap.erase(it40);
			for (auto it = mymap.begin(); it != mymap.end(); ++it)
				cout << it->first << " = " << it->second << '\n';
			it40 = mymap.find('a');
			auto it41 = mymap.find('f');
			mymap.erase(it40, it41);
			for (auto it = mymap.begin(); it != mymap.end(); ++it)
				cout << it->first << " = " << it->second << '\n';

			mymap.clear();
			for (auto it = mymap.begin(); it != mymap.end(); ++it)
				cout << it->first << " = " << it->second << '\n';


			mymap.insert({ 'd',2 });
			mymap.insert({ 'e',20 });
			mymap.insert({ 'f',30 });
			mymap.insert({ 'f',31 });
			if (mymap.count('a'))
				cout << "the key a is present";
			else
				cout << "the key a is not present";
			if (mymap.count('d'))
				cout << "the key d is present";
			else
				cout << "the key d is not present";

			it42 = mymap.equal_range('d');
			cout << "the lower bound is " << it42.first->first << " " << it42.first->second;
			cout << "the lower bound is " << it42.second->first << " " << it42.second->second;

			mymap.insert(make_pair('a', 1));

			for (auto it = mymap.rbegin(); it != mymap.rend(); it++)
				cout << it->first << " = " << it->second << endl;

			for (auto it = mymap.crbegin(); it != mymap.crend(); it++)
				cout << it->first << " = " << it->second << endl;

			for (auto it = mymap.cbegin(); it != mymap.cend(); it++)
				cout << it->first << " = " << it->second << endl;

			mymap.emplace('d', 7);


			for (auto it = mymap.cbegin(); it != mymap.cend(); it++)
				cout << it->first << " = " << it->second << endl;

			auto it43 = mymap.upper_bound('d');
			cout << (*it43).first << " = " << (*it43).second << '\n';

			mymap2 = mymap;

			for (auto it = mymap2.cbegin(); it != mymap2.cend(); it++)
				cout << it->first << " = " << it->second << endl;

			it43 = mymap.lower_bound('d');
			cout << (*it43).first << " = " << (*it43).second << '\n';

			mymap.emplace_hint(mymap.begin(),'d', 7);


			for (auto it = mymap.cbegin(); it != mymap.cend(); it++)
				cout << it->first << " = " << it->second << endl;

			auto last = *mymap.rbegin();
			auto i44 = mymap.begin();

			do {
				cout << i44->first << " = " << i44->second << endl;
			} while (mymap.value_comp()(*i44++, last));

			cout << mymap['d'] << " = " << "d" << endl;

			map1[1] = 'a';
			map1[2] = 'b';
			map1[3] = 'c';
			map1[4] = 'd';

			map2['w'] = 1;
			map2['y'] = 2;
			map2['z'] = 3;

			// Print the associated element
			cout << "Element at map1[2] = " << map1.at(2) << endl;

			cout << "Element at map2['w'] = " << map2.at('w') << endl;

			map3[5] = 'w';
			map3[6] = 'x';
			map3[7] = 'y';

			swap(map1, map3);

			cout<<"map1:\n"<<"\tKEY\tELEMENT\n";
			for (auto it = map1.begin(); it != map1.end(); it++)
				cout << "\t" << it->first << "\t" << it->second;
			cout<<"map3:\n"<<"\tKEY\tELEMENT\n";
			for (auto it = map3.begin(); it != map3.end(); it++)
				cout << "\t" << it->first << "\t" << it->second;

			// C++ program to demonstrate map::key_com()
			//Compare the key
			mycomp = mymap.key_comp();

			//Populate the map

			mymap['j'] = 50;
			mymap['k'] = 150;
			mymap['l'] = 1150;

			//Print the map
			cout << "mymap contain:\n";

			highest = mymap.rbegin()->first;

			//key value of last element
			it43 = mymap.begin();

			do {
				cout << it43->first << " => " << it43->second << "\n";
			} while (mycomp((*it43++).first, highest));

			cout << "\n";

			// C++ program to demonstrate map::key_comp()
			mymap3['a'] = 100;
			mymap3['b'] = 200;
			mymap3['c'] = 300;

			cout << "mymap contain:\n";
			highest = mymap3.rbegin()->first;

			// key value of last element

			it43 = mymap3.begin();

			do {
				cout << it43->first << "=> " << it43->second << '\n';
			} while (mycomp2((*it43++).first, highest));

			cout << '\n';

			map4.insert({1,"one"});
			map4.insert({2,"two"});
			map4.insert({3,"three"});
			map4.insert({3,"three again"});

			//Print the first and last elements of the multimap
			cout << "First: " << map4.begin()->second;
			cout << "Last: " << (--map4.end())->second;

			//C++ functiom to illustrate the multimap::begin() function
			map5.insert({ 2,30 });
			map5.insert({ 1,40 });
			map5.insert({ 3,60 });
			map5.insert({ 4,20 });
			map5.insert({ 5,50 });

			auto ite = map5.begin();

			cout << "the first element is: " << ite->first << " the second elements is: " << ite->second<<"\n";

			// C++ function to illustrate the multimap::end() function
			// insert elements in random order
			map6.insert({ 2,30 });
			map6.insert({ 1,40 });
			map6.insert({ 3,60 });
			map6.insert({ 4,20 });
			map6.insert({ 5,50 });

			// prints the elements
			cout << "\nThe multimap is : \n";
			cout << "KEY\tELEMENT\n";
			for (auto itr = map6.begin(); itr != map6.end(); ++itr) {
				cout << itr->first<<'\t'<<itr->second<<'\n';

			}

			// C++ function for illustration multimap::size() function
			// insert elements in random order
			map7.insert({ 2,30 });
			map7.insert({ 1,40 });
			map7.insert({ 2,60 });
			map7.insert({ 2,20 });
			map7.insert({ 1,50 });
			map7.insert({ 4,50 });

			cout << "multimap map7 has " << map7.size() << " number of elements";


			// C++ program to illustrate multimap::max_size()
			cout << endl;
			cout << "The max size of map8 is " << map8.max_size();
			cout << "The max size of map9 is " << map9.max_size();



			// C++ program to demonstrate std::multimap::empty
			// checking if mmap is empty or not
			if (mmap.empty())
				cout << endl << "multimap is empty\n";

			// inserting values to map thus making i not empty
			mmap.insert(pair<char, int>('a', 26));
			mmap.insert(pair<char, int>('b', 30));
			mmap.insert(pair<char, int>('c', 44));

			// checking that map is now not empty
			if (mmap.empty())
				cout << endl << "multimap is empty\n";
			else
				cout << "multimap is not empty\n";



			// C++ program to illustrate multimap::insert({key,element})
			// insert elements in random order
			mp4.insert({ 2,30 });
			mp4.insert({ 1,40 });
			mp4.insert({ 3,60 });
			mp4.insert({ 2,20 });
			mp4.insert({ 5,50 });

			// prints the elements
			cout << "KEY\tELEMENT\n";
			for (auto itr = mp4.begin(); itr != mp4.end(); itr++)
				cout << itr->first << '\t' << itr->second << '\n';

			// C++ program to illustrate multimap::insert({key,element})
			// insert elements in random order
			mp5.insert({ 2,30 });
			mp5.insert({ 1,40 });

			auto it44 = mp5.find(2);

			// inserts {3,6} starting the search from position where 2 is present
			mp5.insert(it44, { 3,60 });

			// prints the elements
			cout << endl;
			cout << "KEY\nELEMENT\n";
			for (auto itr = mp5.begin(); itr != mp5.end(); itr++)
				cout << itr->first << '\t' << itr->second << '\n';

			// CPP Program to illustrate working of multimap::operator=
			//multimap1 data
			m1.insert(make_pair('a', 1));
			m1.insert(make_pair('b', 2));
			m1.insert(make_pair('c', 3));
			//multimap2 data
			m2.insert(make_pair('d', 4));
			m2.insert(make_pair('e', 5));
			m2.insert(make_pair('f', 6));

			//operator=
			m1 = m2;

			// multimap1 data
			cout << "Multimap 1 data" << "\n";
			for (iter = m1.begin(); iter != m1.end(); iter++)
				cout << (*iter).first << " " << (*iter).second<<"\n";

			vec16.push_back(1);
			vec16.push_back(2);
			vec16.push_back(3);
			vec16.push_back(4);
			vec16.push_back(5);

			cout << endl;

			// Iterate through the elements of vec in reverse order
			for (auto it = vec16.crbegin(); it != vec16.crend(); it++)
				cout << *it << ' ';

			cout << endl;

			// C++ program to illustrate multimap::crbegin() function
			// insert elements in random order
			mp6.insert({ 2,30 });
			mp6.insert({ 1,40 });
			mp6.insert({ 3,60 });
			mp6.insert({ 4,20 });
			mp6.insert({ 5,50 });

			auto ite2 = mp6.crbegin();
			cout << endl << "The last element is {" << ite2->first << ", " << ite2->second << "}\n";

			// prints the elements
			cout << "\nThe multimap in reverse order is: ";
			cout << "KEY\tELEMENT\n";
			for (auto itr = mp6.crbegin(); itr != mp6.crend(); itr++)
				cout << itr->first << '\t' << itr->second << '\n';



			// C++ program to illustrate the multimap::emplace_hint() function
			//insert elements in random order
			mp7.emplace_hint(mp7.begin(), 2, 30);//faster
			mp7.emplace_hint(mp7.begin(), 1, 40);//faster
			mp7.emplace_hint(mp7.begin(), 2, 60);//faster
			mp7.emplace_hint(mp7.begin(), 2, 20);//faster
			mp7.emplace_hint(mp7.begin(), 1, 50);//faster
			mp7.emplace_hint(mp7.begin(), 1, 50);//faster

			// prints the elements
			cout << "\tThe multimap is : \n";
			cout << "KEY\tELEMENT\n";
			for (auto itr = mp7.begin(); itr != mp7.end(); itr++)
				cout << itr->first << "\t" << itr->second;

			// CPP program to illustrate the multimap::clear() function
			// Inserting 2 Items with their value using insert function
			mymultimap.insert(pair<string, int>("Item1", 10));
			mymultimap.insert(pair<string, int>("Item2", 20));
			mymultimap.insert(pair<string, int>("Item3", 30));

			cout << "Size of the multimap before using clear function : " << mymultimap.size() << '\n';

			//Removing all the elements present in the multimap
			mymultimap.clear();

			cout << "Size of the multimap after using clear function: " << mymultimap.size() << '\n';

			// C++ program to show the use of multimap::value_comp
			// making of pair
			m.insert(make_pair('a', 10));
			m.insert(make_pair('b', 20));
			m.insert(make_pair('c', 30));
			m.insert(make_pair('d', 40));
			
			pair<char, int>p2 = *m.rbegin();
			// last element

			i2 = m.begin();

			do {
				cout << (*i2).first << " = " << (*i2).second << '\n';
			} while (m.value_comp()(*i2++, p2));

			// CPP program to illustrate multimap::rend()
			// Insert pairs in the multimap
			sample9.insert(make_pair('a', 10));
			sample9.insert(make_pair('b', 20));
			sample9.insert(make_pair('c', 30));
			sample9.insert(make_pair('c', 40));

			// Show content
			cout << endl;
			for (auto it = sample9.rbegin(); it != sample9.rend(); ++it)
				cout << it->first << " = " << it->second<<endl;

			// CPP program to illustrate multimap::rend()
			// Insert pairs in the multimap
			sample10.insert(make_pair('a', 10));
			sample10.insert(make_pair('b', 20));
			sample10.insert(make_pair('c', 30));
			sample10.insert(make_pair('c', 40));

			// Get the iterator pointing to the preceding position of 1st element of the multimap
			auto it45 = sample10.rend();

			//Get the iterator pointing to the 1st element of the multimap
			it45--;
			cout << it45->first << " = " << it45->second;

			// C++ program to illustrate the multimap::cbegin() function
			// insert elements in random order
			mp8.insert({ 2,30 });
			mp8.insert({ 1,40 });
			mp8.insert({ 3,60 });
			mp8.insert({ 4,20 });
			mp8.insert({ 5,50 });

			auto ite3 = mp8.cbegin();

			cout << endl << "The first element is: {" << ite3->first << ", " << ite3->second << "}\n";

			// prints the elements
			cout << "\nThe multimap is : \n";
			cout << "KEY\tELEMENT\n";
			for (auto itr = mp8.cbegin(); itr != mp8.cend(); itr++)
				cout << itr->first << '\t' << itr->second << '\n';
			// CPP Program to illustrate...
			// multimap1 data
			m3.insert(make_pair('a', 1));
			m3.insert(make_pair('b', 2));
			m3.insert(make_pair('c', 3));

			//multimap2 data
			m4.insert(make_pair('d', 4));
			m4.insert(make_pair('e', 5));

			// swap multimap1 data with multimap2 data
			m3.swap(m4);

			// multimap1 data
			cout << endl << "Multimap 1 data" << "\n";
			for (iter2 = m3.begin(); iter2 != m3.end(); iter2++)
				cout << (*iter2).first << " " << (*iter2).second << "\n";

			// multimap2 data
			cout << " Multimap 2 data" << "\n";
			for (iter2 = m4.begin(); iter2 != m4.end(); iter2++)
				cout << (*iter2).first << " " << (*iter2).second << "\n";


			// CPP program to illustrate multimap::rbegin()
			// Insert pair in the multimap
			sample11.insert(make_pair('a', 10));
			sample11.insert(make_pair('b', 20));
			sample11.insert(make_pair('b', 30));
			sample11.insert(make_pair('c', 40));
			sample11.insert(make_pair('c', 50));

			// Get the last element by multimap::rbegin()
			cout << sample11.rbegin()->first << " = " << sample11.rbegin()->second;


			// CPP program to illustrate multimap::rbegin()
			// Insert pairs in the multimap
			sample12.insert(make_pair('a', 10));
			sample12.insert(make_pair('b', 20));
			sample12.insert(make_pair('b', 30));
			sample12.insert(make_pair('c', 40));
			sample12.insert(make_pair('c', 50));

			// Show content of the multimap
			for (auto it = sample12.rbegin(); it != sample12.rend(); it++)
				cout << it->first << " = " << it->second << endl;

			// C++ program for the illustration of multimap::emplace() function
			// insert elements in random order
			mp9.emplace( 2,30 );
			mp9.emplace( 1,40 );
			mp9.emplace( 2,60 );
			mp9.emplace( 2,20 );
			mp9.emplace( 1,50 );
			mp9.emplace( 4,50 );

			// prints the elements
			cout << "\nThe multimap is : \n" << "KEY\tELEMENT\n";
			for (auto itr = mp9.begin(); itr != mp9.end(); itr++)
				cout << itr->first << "\t" << itr->second<<endl;


			// C++ function for illustration multimap::upper_bound() function
			//insert elements in random order
			mp10.insert({ 2,30 });
			mp10.insert({ 1,40 });
			mp10.insert({ 2,60 });
			mp10.insert({ 2,20 });
			mp10.insert({ 1,50 });
			mp10.insert({ 4,50 });

			// when 2 is present
			auto it46 = mp10.upper_bound(2);
			cout << endl << "The upper bound of key 2 is " << (*it46).first << " " << (*it46).second;

			// when 3 is not present
			it46 = mp10.upper_bound(3);
			cout << endl << "The upper bound of key 3 is " << (*it46).first << " " << (*it46).second;

			// when 5 is exceeds the maximum key
			//it46 = mp10.upper_bound(5);
			//cout << endl << "The upper bound of key 5 is " << (*it46).first << " " << (*it46).second;

			// C++ function for illustration multimap::count() function
			//insert elements in random order
			mp11.insert({ 2,30 });
			mp11.insert({ 1,40 });
			mp11.insert({ 2,60 });
			mp11.insert({ 2,20 });
			mp11.insert({ 1,50 });
			mp11.insert({ 4,50 });

			// count the number of times 1 is there in the multimap
			cout << "1 exists " << mp11.count(1) << " times in the multimap\n";
			// count the number of times 2 is there in the multimap
			cout << "2 exists " << mp11.count(2) << " times in the multimap\n";

			// C++ program to illustrate multimap::erase(key)
			//insert elements in random order
			mp12.insert({ 2,30 });
			mp12.insert({ 1,40 });
			mp12.insert({ 3,60 });
			mp12.insert({ 2,20 });
			mp12.insert({ 2,20 });
			mp12.insert({ 5,50 });

			// prints the elements
			cout << endl << "The multimap before using erae() " << "KEY\tELEMENT\n";
			for (auto itr = mp12.begin(); itr != mp12.end(); itr++)
				cout << itr->first << '\t' << itr->second << '\n';

			// function to erase giver keys
			mp12.erase(1);
			mp12.erase(2);

			// prints the elements
			cout << "\nThe multimap after applying erase method" << "\nKEY\tELEMENT\n";
			for (auto itr = mp12.crbegin(); itr != mp12.crend(); itr++)
				cout << itr->first << '\t' << itr->second << '\n';
			// C++ program to illustrate multimap::erase(position)
			//insert elements in random order
			mp13.insert({ 2,30 });
			mp13.insert({ 1,40 });
			mp13.insert({ 3,60 });
			mp13.insert({ 2,20 });
			mp13.insert({ 5,50 });

			// prints the elements
			cout << "\nThe multimap before using erase(): " << "\nKEY\tELEMENT\n";
			for (auto itr = mp13.begin(); itr != mp13.end(); itr++)
				cout << itr->first << '\t' << itr->second << '\n';

			// function to erase given position
			auto it47 = mp13.find(2);
			mp13.erase(it47);

			auto it48 = mp13.find(5);
			mp13.erase(it48);

			// prints the elements
			cout << "\nThe multimap after applying erase(): " << "\nKEY\tELEMENT\n";
			for (auto itr = mp13.crbegin(); itr != mp13.crend(); itr++)
				cout << itr->first << '\t' << itr->second << '\n';

			// C++ program to illustrate multimap::erase()
			//insert elements in random order
			mp14.insert({ 2,30 });
			mp14.insert({ 1,40 });
			mp14.insert({ 3,60 });
			mp14.insert({ 2,20 });
			mp14.insert({ 5,50 });

			// prints the elements
			cout << "\nThe multimap before using erase(): " << "\nKEY\tELEMENT\n";
			for (auto itr = mp14.begin(); itr != mp14.end(); itr++)
				cout << itr->first << '\t' << itr->second << '\n';

			// function to erase in a given range find() returns the iterator reference to the position where the element is
			auto it49 = mp14.find(2);
			auto it50 = mp14.find(5);
			mp14.erase(it49, it50);

			// prints the elements
			cout << "\nThe multimap after applying erase(): " << "\nKEY\tELEMENT\n";
			for (auto itr = mp14.crbegin(); itr != mp14.crend(); itr++)
				cout << itr->first << '\t' << itr->second << '\n';

			// C++ program for illustration of multimap::find() function
			// insert elements in random order
			mp15.insert({ 2,30 });
			mp15.insert({ 1,40 });
			mp15.insert({ 2,60 });
			mp15.insert({ 3,20 });
			mp15.insert({ 1,50 });
			mp15.insert({ 4,50 });

			cout << endl << "The elements from position 3 in multimap is: " << "KEY\tELEMENT\n";
			// find() function finds the position at which 3 is
			for (auto itr = mp15.find(3); itr != mp15.end(); itr++)
				cout << itr->first << '\t' << itr->second << '\n';


			// C++ program to illustrate the multimap>>equal_range() function
			// insert elements in random order
			mp16.insert({ 2,30 });
			mp16.insert({ 1,40 });
			mp16.insert({ 2,60 });
			mp16.insert({ 1,20 });
			mp16.insert({ 5,50 });

			// Stores the range of key 1
			auto it51 = mp16.equal_range(1);

			cout << "The multimap elements of key 1 is: " << "\nKEY\tELEMENT\n";

			// Prints all the elements of key 1
			for (auto itr = it51.first; itr != it51.second; itr++)
				cout << itr->first << '\t' << itr->second << '\n';


			// C++ function for illustration multimap::lower_bound() function

			// insert elements in random order
			mp17.insert({ 2,30 });
			mp17.insert({ 1,40 });
			mp17.insert({ 2,60 });
			mp17.insert({ 2,20 });
			mp17.insert({ 1,50 });
			mp17.insert({ 4,50 });

			// when 2 is present
			auto it52 = mp17.lower_bound(2);
			cout << "\nThe lower bound of key 2 is ";
			cout << (*it52).first << " " << (*it52).second << endl;

			// when 3 is not present
			it52 = mp17.lower_bound(3);
			cout << "\nThe lower bound of key 3 is ";
			cout << (*it52).first << " " << (*it52).second << endl;

			// when 5 exceeds
			it52 = mp17.lower_bound(5);
			if (it52 == mp17.end()) {
				cout << "\nThe key 5 was not found in the multimap.\n";
			}
			else {
				cout << "\nThe lower bound of key 5 is ";
				cout << (*it52).first << " " << (*it52).second << endl;
			}

			// C++ program to illustrate the multimap::key_comp() function
			comp4 = m5.key_comp();

			// Inserting elements into multimap
			m5.insert(make_pair('a', 10));
			m5.insert(make_pair('b', 20));
			m5.insert(make_pair('c', 30));
			m5.insert(make_pair('d', 40));

			cout << "Multimap has the elements\n";

			// Store key value of last element
			l3 = m5.rbegin()->first;
			it53 = m5.begin();

			// printing elements of all multimap
			do
				cout << it53->first << " => " << it53->second << '\n';
			while (comp4((*it53++).first, 1));


			mySet11 = { "first","third" };
			myString = "tenth";

			// inserts key in set
			mySet11.insert(myString);

			cout << "\nMy set contains:" << endl;
			for (const string& x : mySet11)
				cout << x << " ";
			// C++ program to illustrate unordered_set::insert()
			mySet12 = { "first","third","second" };
			myArray = { "tenth","seventh" };
			myString2 = "ninth";
			mySet12.insert(myString2);
			// array elements range insertion in set
			mySet12.insert(myArray.begin(), myArray.end());

			// initializer list insertion
			mySet12.insert({ "fourth","sixth" });

			cout << "\nmyset contains:" << endl;
			for (const string& x : mySet12)
				cout << x << " ";
			cout << endl;
			// C++ program to illustrate unordered_set::insert() return values
			cout << "u_set.insert(1).second: " << u_set2.insert(1).second << endl;//on success insertion it's true ele false
			cout << "*(u_set.insert(1).first): " << *(u_set2.insert(1).first) << endl;
			//first is the iterator to the inserted element, if the element not present in the u_set, if the element already in the u_set, then it points to that element
			cout << "u_set.insert(1).second: " << u_set2.insert(1).second << endl;
			cout << "*(u_set.insert(1).first): " << *(u_set2.insert(1).first) << endl;
			cout << "u_set.insert(2).second: " << u_set2.insert(2).second << endl;//on successful insertion it's true else false
			cout << "*(u_set.insert(2).first): " << *(u_set2.insert(2).first) << endl;
			display_elements(u_set2);
			// CPP program to illustrate the unordered_set::begin() function
			
			// Inserting elements in the std
			sampleSet.insert(5);
			sampleSet.insert(10);
			sampleSet.insert(15);
			sampleSet.insert(20);
			sampleSet.insert(25);

			auto itr6 = sampleSet.begin();
			auto itr7 = sampleSet.begin(4);

			cout << "First element in the container is: " << *itr6;
			cout << "\nFirst element in the bucket 4 is: " << *itr7;

			// CPP program to illustrate the unordered_set::end() function

			sampleSet2 = { 5,10,15,4,2,7,8,6 };

			// Continue the loop until it points to the past-the-end position returned by sampleSet.end()
			for (auto it = sampleSet2.begin(); it != sampleSet2.end(); it++)
				cout << *it << " ";


			// CPP program to illustrate the unordered_set::end() function

			sampleSet3 = { 5,10,15,4,2,7,8,6 };

			//displaying all the buckets of the set. Continue the loop until it points to the pas-the-end position returned by sampleSet.end(i)
			for (unsigned i = 0; i < sampleSet3.bucket_count(); ++i)
			{
				cout << "Bucket " << i << " Contains: ";
				for (auto it1 = sampleSet3.begin(i); it1 != sampleSet3.end(i); it1++)
					cout << " " << *it1;
				cout << endl;
			}

			// CPP program to illustrate the unordered_set::count() function

			// Inserting elements in the std
			sampleSet4.insert(5);
			sampleSet4.insert(10);
			sampleSet4.insert(15);
			sampleSet4.insert(20);
			sampleSet4.insert(25);

			// displaying all elements of sampleSet
			cout << "sampleSet contains: ";
			for (auto itr = sampleSet4.begin(); itr != sampleSet4.end(); itr++)
				cout << *itr << " ";

			// checking if element 20 is present in the set
			if (sampleSet4.count(20) == 1)
				cout << "\nElement 20 is present in the set";
			else
				cout << "\nElement 20 is not present in the set";


			// C++ program to illustrate the unordered_set::count function

			// Inserting elements 
			sampleSet5.insert("Rodrigo");
			sampleSet5.insert("Zaleski");
			sampleSet5.insert("Pioner");
			sampleSet5.insert("17rzpio");
			sampleSet5.insert("zalejinzuningen");

			// displaying all elements of sampleSet
			cout << endl << "sampleSet contains: ";
			for (auto itr = sampleSet5.begin(); itr != sampleSet5.end(); itr++)
				cout << *itr << " ";

			// checking if element Rodrigo is present in the set
			if (sampleSet5.count("Rodrigo") == 1)
				cout << "\nRodrigo is present in the sampleset";
			else
				cout << "\nRodrigo is not present in sampleSet";


			// C++ program to illustrate the unordered_set::find() function

			sampleSet6 = { "Rodrigo","Zaleski","Pioner" };

			//use of find() function
			if (sampleSet6.find("Rodrigo") != sampleSet6.end())
				cout << "element found." << endl;
			else
				cout << "element not found" << endl;


			// CPP program to illustrate the unordered_set::find() function

			//use of find() function
			if (sampleSet6.find("Rodrigo Zaleski Pioner") != sampleSet6.end())
				cout << "element found." << endl;
			else
				cout << "element not found" << endl;


			// C++ program to illustrate the unordered_set::clear() function

			// Inserting elements in the std
			sampleSet7.insert(5);
			sampleSet7.insert(10);
			sampleSet7.insert(15);
			sampleSet7.insert(20);
			sampleSet7.insert(25);

			// displaying all elements of sampleSet
			cout << "sampleSet contains: ";
			for (auto itr = sampleSet7.begin(); itr != sampleSet7.end(); itr++)
				cout << *itr << " ";

			// clear the set
			sampleSet7.clear();

			// size after clearing
			cout << "\nSize of set after clearing elements: " << sampleSet7.size();


			// C++ program to illustrate the unordered_set::clear function

			// displaying all elements of sampleSet
			cout << endl << "sampleSet contains: ";
			for (auto itr = sampleSet5.begin(); itr != sampleSet5.end(); itr++)
				cout << *itr << " ";

			// clear the set
			sampleSet5.clear();

			// size after clearing
			cout << "\nSize of set after clearing elements: " << sampleSet5.size();

			// C++ program to illustrate the unordered_set::cbegin() function

			// Inserting elements in the std
			sampleSet8.insert(5);
			sampleSet8.insert(10);
			sampleSet8.insert(15);
			sampleSet8.insert(20);
			sampleSet8.insert(25);

			auto itr8 = sampleSet8.cbegin();
			auto itr9 = sampleSet8.cbegin(4);

			cout << "First element in the container is: " << *itr8;
			cout << "\nFirst element in the bucket 4 is: " << *itr9;
			// C++ program to illustrate the unordered_set::cbegin() function

			// Inserting elements 
			sampleSet9.insert("Rodrigo");
			sampleSet9.insert("Zaleski");
			sampleSet9.insert("Pioner");
			sampleSet9.insert("17rzpio");
			sampleSet9.insert("zalejinzuningen");

			auto itr10 = sampleSet9.cbegin();
			auto itr11 = sampleSet9.cbegin(0);

			cout << "First element in the container is: " << *itr10;
			cout << "\nFirst element in the bucket 0 is: " << *itr11;

			// C++ program to illustrate the unordered_set::cend() function

			// Inserting elements in the std
			sampleSet10.insert(5);
			sampleSet10.insert(10);
			sampleSet10.insert(15);
			sampleSet10.insert(20);
			sampleSet10.insert(25);

			// Here, the cend() method is used to iterate in the range of elements prsent in the unordered_set container
			cout << "Elements present in sampleSet are: \n";
			for (auto itr = sampleSet10.cbegin(); itr != sampleSet10.cend(); itr++)
				cout << *itr << endl;

			// C++ program to illustrate the unordered_set::cend() function

			// Inserting elements 
			sampleSet11.insert("Rodrigo");
			sampleSet11.insert("Zaleski");
			sampleSet11.insert("Pioner");
			sampleSet11.insert("17rzpio");
			sampleSet11.insert("zalejinzuningen");

			// Here, the cend() method is used to iterate in the range of elements prsent in the unordered_set container
			cout << "Elements present in sampleSet are: \n";
			for (auto itr = sampleSet11.cbegin(); itr != sampleSet11.cend(); itr++)
				cout << *itr << endl;



			// CPP program to illustrate the unordered_set::bucket_size() function

			// Inserting elements
			sampleSet12.insert(5);
			sampleSet12.insert(10);
			sampleSet12.insert(15);
			sampleSet12.insert(20);
			sampleSet12.insert(25);

			bucketCount = sampleSet12.bucket_count();
			// displaying number of buckets
			cout << "sampleSet has " << bucketCount << " buckets\n";

			// displaying number of elements in bucket numbered 1
			cout << "Bucket number 3 contains " << sampleSet.bucket_size(3) << " element";

			// CPP program to illustrate the unordered_set::bucket_size() function

			// Inserting elements 
			sampleSet13.insert("Rodrigo");
			sampleSet13.insert("Zaleski");
			sampleSet13.insert("Pioner");
			sampleSet13.insert("17rzpio");
			sampleSet13.insert("zalejinzuningen");

			bucketCount2 = sampleSet13.bucket_count();
			// displaying number of buckets
			cout << "sampleSet has " << bucketCount2 << " buckets\n";

			// displaying number of elements in bucket numbered 1
			cout << "Bucket number 3 contains " << sampleSet13.bucket_size(0) << " element";
			// CPP program to illustrate the unordered_set::erase() function

			// Inserting elements
			sampleSet14.insert(5);
			sampleSet14.insert(10);
			sampleSet14.insert(15);
			sampleSet14.insert(20);
			sampleSet14.insert(25);

			// erases a particular element by its position
			sampleSet14.erase(sampleSet14.find(10));

			// displaying the set after removal
			for (auto it = sampleSet14.begin(); it != sampleSet14.end(); it++)
				cout << *it << " ";

			// erases a range of elements
			sampleSet14.erase(sampleSet14.begin(), sampleSet14.end());

			cout << "\nSet size: " << sampleSet14.size();

			// CPP program to illustrate the unordered_set::erase() function

			sampleSet15 = {"Rodrigo","Zaleski","Pioner"};

			//erases a particular element
			sampleSet15.erase("Rodrigo");

			//displaying the set after removal
			cout << "Elements: ";
			for (auto it = sampleSet15.begin(); it != sampleSet15.end(); it++)
				cout << *it << " ";

			sampleSet15.insert("Rodrigo");
			// erases from where for is
			sampleSet15.erase(sampleSet15.find("Zaleski"), sampleSet15.end());

			// displaying the set after removal
			cout << "\nAfter second removal set : ";
			for (auto it = sampleSet15.begin(); it != sampleSet15.end(); it++)
				cout << *it << " ";
			// C++ program to illustrate the unordered_set.size() function

			arr31 = { 1,2,3,4,5 };

			// prints the size of arr31
			cout << "size of arr31:" << arr31.size();

			// prints the element
			cout << "\nThe elemens are: ";
			for (auto it = arr31.begin(); it != arr31.end(); it++)
				cout << *it << " ";

			// C++ program to illustrate the unordered_set::size() function when container is empty
			// prints the size
			cout << "Size of arr32 : " << arr32.size();

			// C++ program to illustrate the unordered_set_swap() function

			arr33 = { 1,2,3,4,5 };
			arr34 = { 5,6,7,8,9 };

			cout << "The elements of arr33 before swap():";

			for (auto it = arr33.begin(); it != arr33.end(); it++)
				cout << *it << " ";

			cout << "The elements of arr34 before swap():";

			for (auto it = arr34.begin(); it != arr34.end(); it++)
				cout << *it << " ";
			
			// inbuilt swap function to swap elements of two unordered_set
			swap(arr33, arr34);

			cout << "The elements of arr33 after swap():";

			for (auto it = arr33.begin(); it != arr33.end(); it++)
				cout << *it << " ";

			cout << "The elements of arr34 after swap():";

			for (auto it = arr34.begin(); it != arr34.end(); it++)
				cout << *it << " ";


			// C++ program to illustrate the unordered_set::emplace() function

			// Inserting elements
			sampleSet16.emplace(5);
			sampleSet16.emplace(10);
			sampleSet16.emplace(15);
			sampleSet16.emplace(20);
			sampleSet16.emplace(25);

			// displaying all elements of sampleSet
			cout << "sampleSet contains: ";
			for (auto itr = sampleSet16.begin(); itr != sampleSet16.end(); itr++)
				cout << *itr << " ";

			// C++ program to illustrate the unordered_set::emplace() function

			// Inserting elements using emplace() function
			sampleSet17.emplace("5");
			sampleSet17.emplace("10");
			sampleSet17.emplace("15");
			sampleSet17.emplace("20");
			sampleSet17.emplace("25");

			// displaying all elements of sampleSet
			cout << "sampleSet contains: ";
			for (auto itr = sampleSet17.begin(); itr != sampleSet17.end(); itr++)
				cout << *itr << " ";

			// C++ program to illustrate the unordered_set::max_size function
			// Get the maximum size of the unordered_set
			cout << sample13.max_size();

			// C++ program to illustrate the unordered_set::empty function

			// Check wheter the unordered_set is empty
			if (sample14.empty() == true)
				cout << "true" << endl;
			else
				cout << "false" << endl;

			// Insert a value
			sample14.insert(5);

			// Check wheter the unordered_set is empty
			if (sample14.empty() == true)
				cout << "true" << endl;
			else
				cout << "false" << endl;
			
			// C++ program to illustrate unordered_set::empty function
			
			//Insert a value
			uset.insert({ 5,6,7,8 });

			// Check wheter the unordered_set is empty
			if (uset.empty() == true)
				cout << "true" << endl;
			else
				cout << "false" << endl;

			// C++ program to illustrate the unordered_set::equal_range function
			//Insert some values
			sample15.insert({ 20,30,40 });

			// Test the equal_range function for a given key if it does exists
			auto range1 = sample15.equal_range(20);
			if (range1.first != sample15.end())
				for (; range1.first != range1.second; ++range1.first)
					cout << *range1.first << endl;
			else
				cout << "Element does not exist!";

			// Test the equal_range function for a given key if it does exists
			range1 = sample15.equal_range(60);
			if (range1.first != sample15.end())
				for (; range1.first != range1.second; ++range1.first)
					cout << *range1.first << endl;
			else
				cout << "Element does not exist!";

			// C++ code to illustrate the method unordered_set::operator=()

			// List intialization
			sample16 = { 7,8,9 };
			sample17 = { 9,10,11,12 };

			// Merge both lists
			sample18 = merge(sample16, sample17);

			// copy assigment
			sample16 = sample18;

			// Print the unordered_set list
			for (auto it = sample16.begin(); it != sample16.end(); it++)
				cout << *it << " " << endl;
			for (auto it = sample17.begin(); it != sample17.end(); it++)
				cout << *it << " " << endl;
			for (auto it = sample18.begin(); it != sample18.end(); it++)
				cout << *it << " " << endl;

			// CPP program to illustrate the unordered_set::hash() function
			sampleSet18 = { "Rodrigo","Zaleski" };

			// use of hash_function
			fn = sampleSet18.hash_function();

			cout << fn("Rodrigo") << endl;

			for (auto it = sampleSet18.begin(); it != sampleSet18.end(); it++)
				cout << *it << " ";

			cout << endl;

			// CPP program to illustrate the unordered_set::hash() function

			sampleSet19 = { "Zaleski","Pioner" };

			// use of find() to search for an element
			auto it54 = sampleSet19.find("Rodrigo");
			if (it54 != sampleSet19.end()) {
				fn2 = sampleSet19.hash_function();
				cout << fn2("Rodrigo");
			}
			else {
				cout << "Element not found!" << endl;
			}

			// C++ program to illustrate the unorderd_set.reserve()
			
			us2.reserve(3);

			us2.insert("Rodrigo");
			us2.insert("Zaleski");
			us2.insert("Pioner");

			for (auto it = us2.begin(); it != us2.end(); it++)
				cout << *it << " " << endl;

			// C++ program to illustrate the unorderd_set.reserve()

			us3.reserve(0);

			us3.insert("Rodrigo");
			us3.insert("Zaleski");
			us3.insert("Pioner");

			for (auto it = us3.begin(); it != us3.end(); it++)
				cout << *it << " ";

			// C++ program to illustrate the unordered_set::bucket() function
			//Inserting elements
			sampleSet20.insert(5);
			sampleSet20.insert(10);
			sampleSet20.insert(15);
			sampleSet20.insert(20);
			sampleSet20.insert(25);

			for (auto itr = sampleSet20.begin(); itr != sampleSet20.end(); itr++)
				cout << "The Element " << (*itr) << " is present in the bucket: " << sampleSet20.bucket(*itr)<<endl;

			// CPP program to illustrate the unordered_set::bucket_count() function
			// Inserting elements
			sampleSet21.insert(5);
			sampleSet21.insert(10);
			sampleSet21.insert(15);
			sampleSet21.insert(20);
			sampleSet21.insert(25);

			cout << "The sampleSet container has " << sampleSet21.bucket_count() << " number of buckets\n\n";

			for (auto itr = sampleSet21.begin(); itr != sampleSet21.end(); itr++)
				cout << "The Element " << (*itr) << " is present in the bucket: " << sampleSet21.bucket(*itr) << endl;

			// C++ program to illustrate the unordered_set::load_factor() function
			// inserts element
			sampleSet22.insert(1);
			sampleSet22.insert(11);
			sampleSet22.insert(111);
			sampleSet22.insert(12);
			sampleSet22.insert(13);

			cout << "The size is: " << sampleSet22.size();
			cout << "\nThe bucket_count is: " << sampleSet22.bucket_count();

			cout << "\nThe load_factor is: " << sampleSet22.load_factor();

			sampleSet22.insert(2);
			sampleSet22.insert(22);

			cout << "\n\nThe size is: " << sampleSet22.size();

			cout << "\nThe bucket_count is: " << sampleSet22.bucket_count();

			cout << "\nThe load_factor is: " << sampleSet22.load_factor();

			sampleSet22.insert(33);

			cout << "\n\nThe size is: " << sampleSet22.size();

			cout << "\nThe bucket_count is: " << sampleSet22.bucket_count();

			cout << "\nThe load_factor is: " << sampleSet22.load_factor();

			// C++ program to illustrate the unordered_set::load_factor() function
			//insert element
			sampleSet23.insert('a');
			sampleSet23.insert('b');
			sampleSet23.insert('c');
			sampleSet23.insert('r');
			sampleSet23.insert('d');

			cout << "The size is: " << sampleSet23.size();
			cout << "\nThe bucket_count is: " << sampleSet23.bucket_count();

			cout << "\nThe load_factor is: " << sampleSet23.load_factor();

			sampleSet23.insert('f');
			sampleSet23.insert('k');

			cout << "\n\nThe size is: " << sampleSet23.size();

			cout << "\nThe bucket_count is: " << sampleSet23.bucket_count();

			cout << "\nThe load_factor is: " << sampleSet23.load_factor();

			sampleSet23.insert('z');

			cout << "\n\nThe size is: " << sampleSet23.size();

			cout << "\nThe bucket_count is: " << sampleSet23.bucket_count();

			cout << "\nThe load_factor is: " << sampleSet23.load_factor();

			// C++ program to illustrate the unordere_set::rehash()
			//rehashed
			us4.rehash(9);
			//insert elements
			us4.insert("rodrigo");
			us4.insert("zaleski");
			us4.insert("pioner");
			us4.insert("17rzpio");

			for (auto it = us4.begin(); it != us4.end(); it++)
				cout << *it << " ";
			
			cout << "\nThe bucket count is " << us4.bucket_count();

			// C++ program to illustrate the unordered_set::rehash()
			//rehash the unordered_set
			us5.rehash(20);
			//insert strings
			us5.insert("rodrigo");
			us5.insert("zaleski");
			us5.insert("pioner");
			us5.insert("17rzpio");
			// prints the elements

			for (auto it = us5.begin(); it != us5.end(); it++)
				cout << *it << " ";

			cout << "\nThe bucket count is " << us5.bucket_count();

			// c++ program to illustrate the unordered_set::max_load_factor() function
			uset2 = { 1,5,4,7 };
			// Get the max_load_factor of uset
			cout << "Maximum load factor of uset: " << uset2.max_load_factor() << endl;
			//Now check the current load factor
			cout << "Current load factor of uset: " << uset2.load_factor();

			// c++ program to illustrate the unordered_set::max_load_factor() function
			uset3 = { 1,5,4,7 };
			// Now set the max_load_factor as 0.5
			uset3.max_load_factor(0.5);
			//Now get the new max_load_factor of uset
			cout << "New maximum load factor of uset: " << uset3.max_load_factor() << endl;
			// check the new load factor
			cout << "Current load factor of uset3: " << uset3.load_factor() << endl;

			// cpp program to illustrate unordered_set::emplace_hint() function

			// Initialize an unordered_set
			uset4 = { 20,40,50,60 };

			//Insert an element that is not present
			uset4.emplace_hint(uset4.begin(), 80);

			// Display uset4
			cout << "uset: ";
			for (auto it = uset4.begin(); it != uset4.end(); it++)
				cout << *it << " ";

			// cpp program to illustrate unordered_set::emplace_hint() function

			// Initialize an unordered_set
			uset5 = { 20,40,50,60 };

			//Insert an element that is not present
			uset5.emplace_hint(uset5.begin(), 50);

			// Display uset5
			cout << "uset: ";
			for (auto it = uset5.begin(); it != uset5.end(); it++)
				cout << *it << " ";

			// C++ program of use of operator ==
			//Initialize three unordered sets
			sample18b = {10,20,30,40,50};
			sample19b = {10,30,50,40,20};
			sample20 = {10,20,30,50,60};

			// Compare sample18 and sample19
			if (sample18b == sample19b)
				cout << "sample18 and " << "sample19 are equal." << endl;
			else
				cout << "sample18 and sample19 are not equal." << endl;

			// Compare sample19 and sample20
			if (sample19b == sample20)
				cout << "sample19 and sample20 are equal" << endl;
			else
				cout << "sample19 and sample20 are not equal" << endl;

			// Cpp program to illustrate equal of unordered_set
			res4 = ms16.key_eq()("a", "A");

			cout << "ms16.key_eq() is";

			if (res4 == 1)
				cout << "case insensitive";
			else//res4 is 0 as arguments are no equivalent
				cout << "case sensitive";
			cout << "\n";

			// cpp program to illustrate equal of unordered_set
			r = mp18.key_eq()("1000 is a huge number", "2000 is a huge number");
			cout << "\n\nstrings are";
			if (r == 1)
				cout << "same";
			else// the strings are not same so r=0
				cout << "not same";
			cout << "\n";

			// C++ program to illustrate unordered_set operator!=
			//Initialize values
			a14 = {"C++","Java","Python"};
			b9 = {"Java","Python","C++"};
			c = {"C#","Python","Java"};

			//Displaying results
			if (a14 != b9)
				cout << "a and b are not equal\n";
			else
				cout << "a and b are equal\n";

			if (a14 != c)
				cout << "a and c are not equal\n";
			else
				cout << "a and c are equal\n";

			// CPP program to illustrate unordered_set::max_bucket_count() function
			//Initialize values
			myset13.insert(10);
			myset13.insert(20);

			// printing the contents
			cout << "\nElements : ";
			for (auto it = myset13.begin(); it != myset13.end(); it++)
				cout << "[" << *it << "]";
			cout << endl;

			// inspect current parameters
			cout << "max_size : " << myset13.max_size() << endl;
			cout << "max_bucket_count() : " << myset13.max_bucket_count() << endl;
			cout << "max_load_factor() : " << myset13.max_load_factor() << endl;

			// CPP Program to demonstrate use of insert unordered_multiset
			//Initialize values
			ums3 = {"apple","orange","banana"};
			arr35 = {"cherry","mango","apple"};
			str2 = "grapes";

			ums3.insert(str2);//copy insertion
			ums3.insert(arr35.begin(), arr35.end());//range insertion
			ums3.insert({ "pineapple","papaya" });// initializer list insertion

			//display values
			cout << "ums3 contains:";
			for (const string& x : ums3)
				cout << " " << x;
			cout << endl;

			// CPP Program to demonstrate use of insert unordered_multiset
			//Initialize values
			x5.push_back(3);
			x5.push_back(9);
			x5.push_back(4);
			val2 = 5;

			ums4.insert(val2);//copy insertion
			ums4.insert(x5.begin(), x5.end());//range insertion
			ums4.insert({ 7,8 });//initializer list insertion

			//display values
			cout << "ums4 contains:";
			for (const int& x : ums4)
				cout << " " << x;
			cout << endl;

			// C++ program to illustrate the unordered_multiset::begin() function
			
			// inserts element
			sample21.insert(10);
			sample21.insert(11);
			sample21.insert(15);
			sample21.insert(13);
			sample21.insert(14);

			// print the first element
			cout << "The first element: " << *sample21.begin();

			cout << "\nElements: ";
			//prints all element
			for (auto it = sample21.begin(); it != sample21.end(); it++)
				cout << *it << " ";

			// C++ program to illustrate the unordered_multiset::begin() function
			//inserts element
			sample22.insert('a');
			sample22.insert('b');
			sample22.insert('c');
			sample22.insert('x');
			sample22.insert('z');

			//print the first element
			auto it55 = sample22.begin();
			cout << "The first element: " << *it55;

			it55++;
			cout << "\nThe second element: " << *it55;
			cout << "\nElements: ";
			// prints all element
			for (auto it = sample22.begin(); it != sample22.end(); it++)
				cout << *it << " ";

			//print the first eleemnt
			cout << "The first element in first bucket: " << *sample22.begin();

			for (auto it = sample22.begin(); it != sample22.end(); it++)
				cout << *it << " ";
				
			// C++ program to illustrate the unordered_multiset::empty() function
			//insert element
			sample23.insert(11);
			sample23.insert(11);
			sample23.insert(11);
			sample23.insert(12);
			sample23.insert(13);
			sample23.insert(13);
			sample23.insert(14);

			//if not empty then print the elements
			if (sample23.empty() == false) {
				cout << "Elements: ";
				for (auto it = sample23.begin(); it != sample23.end(); it++)
					cout << *it << " ";
			}
			//container is erased completely
			sample23.clear();
			if (sample23.empty() == true)
				cout << "\nContainer is empty";

			// C++ program to illustrate the unordered_multiset::empty() function
			//inserts element
			sample24.insert('a');
			sample24.insert('a');
			sample24.insert('b');
			sample24.insert('c');
			sample24.insert('d');
			sample24.insert('d');
			sample24.insert('d');

			//if not empty the print the elements
			if (sample24.empty() == false)
			{
				cout << "Elements: ";
				for (auto it = sample24.begin(); it != sample24.end(); it++)
					cout << *it << " ";
			}
			//container is erased completely
			sample24.clear();
			if (sample24.empty() == true)
				cout << "\nContainer is empty";

			// C++ program to illustrate the unordered_multiset::find() function
			//inserts element
			sample25.insert(100);
			sample25.insert(100);
			sample25.insert(100);
			sample25.insert(200);
			sample25.insert(500);
			sample25.insert(500);
			sample25.insert(600);

			//find the position of 500 and print
			auto it56 = sample25.find(500);
			if (it56 != sample25.end())
				cout << *it56 << endl;
			else
				cout << "500 not found\n";

			//find the position of 300 and print
			it56 = sample25.find(300);
			if (it56 != sample25.end())
				cout << *it56 << endl;
			else
				cout << "300 not found\n";

			//find the position of 100 and print
			it56 = sample25.find(100);
			if (it56 != sample25.end())
				cout << *it56 << endl;
			else
				cout << "100 not found\n";

			// C++ program to illustrate the unordered_multiset::find() function
			// inserts element
			sample26.insert('a');
			sample26.insert('a');
			sample26.insert('b');
			sample26.insert('c');
			sample26.insert('d');
			sample26.insert('d');
			sample26.insert('d');

			//find the position of 'a' and print
			auto it57 = sample26.find('a');
			if (it57 != sample26.end())
				cout << *it57 << endl;
			else
				cout << "a not found\n";

			//find the position of 'z' and print
			it57 = sample26.find('z');
			if (it57 != sample26.end())
				cout << *it57 << endl;
			else
				cout << "z not found\n";
			
			// C++ program to illustrate the unordered_multiset::cbegin() function
			
			// inserts element
			sample27.insert(10);
			sample27.insert(11);
			sample27.insert(15);
			sample27.insert(13);
			sample27.insert(14);

			// prints all element
			cout << "Elements: ";
			for (auto it = sample27.cbegin(); it != sample27.cend(); it++)
				cout << *it << " ";
			auto it58 = sample27.cbegin();

			// print the first element
			cout << "\nThe first element: " << *it58;

			// C++ program to illustrate the unordered_multiset::cbegin() function

			// inserts element
			sample28.insert('a');
			sample28.insert('b');
			sample28.insert('c');
			sample28.insert('x');
			sample28.insert('z');

			// print the first element
			auto it59 = sample28.cbegin();
			cout << "The first element: " << *it59;

			it58++;
			cout << "\nThe second element: " << *it59;

			cout << "\nElements: ";

			// prints all element
			for (auto it = sample28.cbegin(); it != sample28.cend(); it++)
				cout << *it << " ";

			// C++ program to illustrate the unordered_multiset::cbegin() function

			// insert element
			sample29.insert('a');
			sample29.insert('b');
			sample29.insert('c');
			sample29.insert('x');
			sample29.insert('z');

			// print the first element
			cout << "The first element in first bucket " << *sample29.cbegin();

			cout << "\nElements in first bucket: ";

			// prints all element
			for (auto it = sample29.cbegin(); it != sample29.cend(); it++)
				cout << *it << " ";


			// C++ program to illustrate the unordered_multiset::equal_range() function

			// insert element
			sample30.insert(100);
			sample30.insert(100);
			sample30.insert(100);
			sample30.insert(200);
			sample30.insert(500);
			sample30.insert(500);
			sample30.insert(600);

			// iterator of pairs pointing to range which includes 500 and print by iterating in range
			auto itr12 = sample30.equal_range(500);
			for (auto it = itr12.first; it != itr12.second; it++)
				cout << *it << " ";

			cout << endl;

			// iterator of pairs pointing to range which includes 100 and print by iterating in range
			itr12 = sample30.equal_range(100);
			for (auto it = itr12.first; it != itr12.second; it++)
				cout << *it << " ";

			// C++ program to illustrate the unordered_multiset::equal_range() function

			// insert element
			sample31.insert('a');
			sample31.insert('b');
			sample31.insert('a');
			sample31.insert('c');
			sample31.insert('d');
			sample31.insert('d');
			sample31.insert('d');

			// iterator of pairs pointing to range which includes 500 and print by iterating in range
			auto itr13 = sample31.equal_range('a');
			for (auto it = itr13.first; it != itr13.second; it++)
				cout << *it << " ";

			cout << endl;

			// iterator of pairs pointing to range which includes 100 and print by iterating in range
			itr13 = sample31.equal_range('d');
			for (auto it = itr13.first; it != itr13.second; it++)
				cout << *it << " ";

			// C++ program to illustrate the unordered_multiset::emplace() function
			
			//inserts element using emplace()
			sample32.emplace(11);
			sample32.emplace(11);
			sample32.emplace(12);
			sample32.emplace(13);
			sample32.emplace(13);
			sample32.emplace(14);

			cout << "Elements: ";

			for (auto it = sample32.begin(); it != sample32.end(); it++)
				cout << *it << " ";
			
			// C++ program to illustrate the unordered_multiset::emplace() function
			
			//inserts element using emplace()
			sample33.emplace('a');
			sample33.emplace('a');
			sample33.emplace('b');
			sample33.emplace('b');
			sample33.emplace('c');
			sample33.emplace('d');

			cout << "Elements: ";

			for (auto it = sample33.begin(); it != sample33.end(); it++)
				cout << *it << " ";

			// C++ program to illustrate the unordered_multiset::clear() function
			//insert element
			sample34.insert(11);
			sample34.insert(11);
			sample34.insert(11);
			sample34.insert(12);
			sample34.insert(13);
			sample34.insert(13);
			sample34.insert(14);

			cout << "Elements> ";

			for (auto it = sample34.begin(); it != sample34.end(); it++)
				cout << *it << " ";

			sample34.clear();

			cout << "znsize of container after clear: " << sample34.size();

			// C++ program to illustrate the unordered_multiset::count() function
			//inserts element
			sample35.insert(11);
			sample35.insert(11);
			sample35.insert(11);
			sample35.insert(12);
			sample35.insert(13);
			sample35.insert(13);
			sample35.insert(14);

			cout << "11 occurs " << sample35.count(11) << " times";
			cout << "12 occurs " << sample35.count(12) << " times";
			cout << "13 occurs " << sample35.count(13) << " times";
			cout << "14 occurs " << sample35.count(14) << " times";
			/*
			sample36.insert('a');
			sample36.insert('a');
			sample36.insert('a');
			sample36.insert('b');
			sample36.insert('b');
			sample36.insert('c');
			sample36.insert('c');

			cout << "a occurs " << sample36.count('a') << " times";
			cout << "b occurs " << sample36.count('b') << " times";
			//cout << "d occurs " << sample36.count('d') << " times";
			cout << "c occurs " << sample36.count('c') << " times";

			*/

			numbers.insert(1);
			numbers.insert(2);
			numbers.insert(3);
			numbers.insert(4);
			numbers.insert(5);
			numbers.insert(6);

			//Calculate and print the size of the unordered_multiset
			cout << "The container has" << numbers.size() << " elements in it";
			
			num4.insert(1);
			num4.insert(2);
			num4.insert(3);
			num4.insert(4);
			num4.insert(5);
			num4.insert(6);

			cout << "Mazimum size = " << num4.max_size() << "\n";

			cout << "Current size = " << num4.size();


			


			
			//initializing both multisets(sizes are different
			s3 = { 1,2,3,4 };
			s4 = { 10,20,30,40,50 };

			// displaying initial values
			cout << "Initial values of s3 are: \n";
			display(s3);
			cout << endl;

			cout << "Initial values of s4 are: \n";
			display(s4);
			cout << endl;

			//swapping the values
			s3.swap(s4);

			//display final values
			cout << "Final values of s3 are: \n";
			display(s3);
			cout << endl;

			cout << "Final values of s4 are: \n";
			display(s4);

			//C++ program to llustrate
			// unordered_multiset::swap()

			
			};
			void display(unordered_multiset<int> s) {
				for (auto it = s.begin(); it != s.end(); it++)
					cout << *it << " ";
				cout << "\n";
			}
			void Stl::display_elements(unordered_set<int>& u_set) {
				cout << "the elements int the unordered ser are: ";
				for (auto it:u_set)
					cout << it << " ";
				cout << endl;
			}
			void Stl::input2(int* a) {
				for (int i = 0; i < 7; i++)
					a[i] = i;
			}
			void Stl::output2(int* a) {
				for (int i = 0; i < 7; i++)
					cout<< a[i] << " ";
			}
			// A function that prevents Array decay by passing array by reference
			void Stl::fun3(int(&p)[7]) {
				// Printing size of array
				cout << endl << "Modified size of array by passing by reference: " << sizeof(p) << endl;
			}

			// Driver function to show Array decay Passing array by value
			void Stl::aDecay(int* p) {
				// Printing size of pointer
				cout << endl << "Modified size of array is by passing by value: " << sizeof(p) << endl;
			}
			// Function to show that array decay happens even if we use pointer
			void Stl::pDecay(int (*p)[7]) {
				// Printing size of pointer
				cout << endl << "Modified size of array is by passing by value: " << sizeof(p) << endl;
			}

			// Function for binary_predicate
			bool Stl::compare(double a, double b) {
				return ((int)a == (int)b);
			}
			// Predicate implemented as a function
			bool Stl::prime(const int& value) {
				int i;
				for (i = 2; i < value; i++)
					if (value % i == 0)
						return false;
				if (value == i)
					return true;
			}
// Predicate implemented as function
			bool Stl::even(const int& value) { return (value % 2) == 0; }
// Function to sort an array using insertion sort
void Stl::insertionSort(int arr[], int n) {
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1], that are greater than kay, to one positvion ahead of their current position
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;

		}
		arr[j + 1] = key;
	}
}

//main function to do heap sort
void Stl::heapSort(int arr[], int n) {
	// Build heap (rearrange array)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// One by one extract an element from heap
	for (int i = n - 1; i >= 0; i--) {
		// Move current root to end
		//swap(arr[0], arr[i]);

		// call max heapify on the reduced heap
		heapify(arr, i, 0);
	}
}
void Stl::heapify(int arr[], int n, int i) {
	//To heapfy a subtree rooted with node i which is an index in arr[]. n size of heap
	int largest = i;//Initialize largest as root
	int l = 2 * i + 1;//left=2*i+1
	int r = 2 * i + 2;//right = 2*i+2

	//If left child is larger than root
	if (l<n && arr[l]>arr[largest])
		largest = l;

	//If  right child is larger than largest so far
	if (r<n && arr[r]>arr[largest])
		largest = r;

	// If largest is not root
	//if (largest != 1)
		//swap(arr[i], arr[largest]);

	//Recursively heapify the affected sub-tree
	//heapify(arr, n, largest);
}
int Stl::partition2(int arr[], int start, int end) {
	
	int pivot = arr[start];
	
	int count = 0;
	for (int i = start + 1; i <= end; i++)
		if (arr[i] <= pivot)
			count++;

	//Giving pivot element its correct position
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);

	//Sorting left and right parts of the pivot element
	int i = start, j = end;

	while (i<pivotIndex && j>pivotIndex)
	{
		while (arr[i] <= pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i<pivotIndex && j>pivotIndex)
			swap(arr[i++], arr[j--]);
	}

	return pivotIndex;
}

void Stl::quickSort(int arr[], int start, int end)
{
	//base case
	if (start >= end)
		return;

	//partitioning the array
	int p = partition2(arr, start, end);

	// Sorting the left part
	quickSort(arr, start, p - 1);

	// Sorting the right part
	quickSort(arr, p + 1, end);
}

void Stl::show3(int a[], int array_size) {
	for (int i = 0; i < array_size; i++)
		cout << a[i] << " ";
}

bool Stl::compareInterval2(Stl::Interval i1, Stl::Interval i2) {
	return(i1.start < i2.start);
}

//Utility function to print unordered_multimap
void Stl::printUmm(unordered_multimap<string, int>umm) {
	// begin() returns iterator to first element of map
	unit it = umm.begin();

	for (; it != umm.end(); it++) 
		cout << "<" << it->first << ", " << it->second << "> "<<endl;
	
}
//function to delete one copy of val from set
void Stl::erase_one_entry(unordered_multiset<int>* ums, int val) {
	//find returns iterator to first position
	umit it = ums->find(val);
	//if element is there then erasing that
	if (it != ums->end())
		ums->erase(it);
}
//Utility function to print unordered_multiset
void Stl::printUset(unordered_multiset<int> ums) {
	//begin() returns iterator to first element of set
	umit it = ums.begin();
	for (; it != ums.end(); it++)
		cout << *it << " ";
	cout << endl;
}
//Print duplicates in arr[0..n-1] using unordered_set
void Stl::printDuplicates(int arr[], int n) {
	//declaring unordered sets for checking and storing duplicates
	unordered_set<int> intSet;
	unordered_set<int> duplicate;

	//looping through array elements
	for (int i = 0; i < n; i++)
	{
		//if element is not there then insert that
		if (intSet.find(arr[i]) == intSet.end())
			intSet.insert(arr[i]);

		//if elements is already there then insert into duplicate set
		else
			duplicate.insert(arr[i]);
	}

	//printing the result
	cout << "Duplicate item are : ";
	unordered_set<int>::iterator it11;

	//iterator it11 loops from begin() till end()
	for (it11 = duplicate.begin(); it11 != duplicate.end(); it11++)
		cout << *it11 << " ";
}

//Prints frequencies of individual words in str
void Stl::printFrequencies(const string& str) {
//declaring map of <string, int> type, each word is mapped to its frequency
	unordered_map<string, int> wordFreq;

	//breaking input into word using string stream used for breaking words
	/*stringstream ss(str);

	//To store individual words
	string word;
	while (ss >> word)
		wordFreq[word]++;*/

	//now iterating over word, freq pair and printing them in <, > format
	unordered_map<string, int>::iterator p;
	for (p = wordFreq.begin(); p != wordFreq.end(); p++)
		cout << "(" << p->first << ", " << p->second << ")\n";
}


//user defined function
int Stl::myfun(int x, int y) {
	//for this example we have taken product of adjacent numbers
	return x * y;
}
//user defined function
int Stl::myfun2(int x, int y) {
	//the sum of element is twice of its adjacent element
	return x +2* y;
}

int Stl::myfun3(int x, int y) {
	
	return x + y;
}

int Stl::myfun4(int x, int y) {
	
	return x - y;
}
//the vect here is a copy of vect in main()
/*
void Stl::myfun5(vector<int> vect)
{
	vect.push_back(30);
}*/
void Stl::printArray(int arr[], int size) {
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}
//Eg: Let us recall the concept of function overloading
void Stl::show(int a, int b) {
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
void Stl::show(double a, double b) {
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
void Stl::show(char a, char b) {
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

//C++ program to demonstrate working of Variadic function Template
//To handle base of below recursive Variadic function Template
void Stl::print() {
	cout << "I am empty function and I am called at last.\n";
}

//C++ program to demonstrate working of transform with unary operator.
int Stl::increment(int x) { return (x + 1); }

//C++ program to demonstrate use of decltype
int Stl::fun1() { return 10; }
char Stl::fun2() { return 'g'; }

void Stl::show(int a[], int array_size) {
	for (int i = 0; i < array_size; i++)
		cout << a[i] << " ";
}
//Compares two intervals according to starting times
bool Stl::compareInterval(Interval i1, Interval i2) {
	return (i1.start < i2.start);
}
int Stl::perimetro(int lado, int altura) {
	return 2 * lado + 2 * altura;
}
void Stl::showlist(std::list<int> g) {
	std::list<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << endl;
}
void Stl::showdq(std::deque<int> g) {
	std::deque<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}
void Stl::showq(std::queue<int> gq) {
	queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}
void Stl::print_queue(std::queue<int> q) {
	std::queue<int> temp = q;
	while (!temp.empty()) {
		cout << temp.front() << " ";
		temp.pop();
	}
	cout << '\n';
}
void Stl::showpq(std::priority_queue<int> gq) {
	std::priority_queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.top();
		g.pop();
	}
	cout << '\n';
}
void Stl::showpq2(std::priority_queue<int, std::vector<int>, std::greater<int>> gq) {
	std::priority_queue<int, std::vector<int>, std::greater<int>> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.top();
		g.pop();
	}
	cout << '\n';
}
//a function to sort three numbers a,b,c, make a smallest b milldle and c largest
void Stl::sort3(int& a, int& b, int& c) {
	std::vector<int> arr({ a,b,c });
	sort(arr.begin(), arr.end());
	a = arr[0]; b = arr[1]; c = arr[2];
}
//function return the number of unique triangles
int Stl::countUniqueTriangles(struct Triangle arr[], int n) {
	//a set which consists of unique Triangles
	std::set<pair<int, iPair>> s;
	//insert all triangles one by one
	for (int i = 0; i < n; ++i) {
		//find three sides and sort them
		int a = arr[i].a, b = arr[i].b, c = arr[i].c;
		sort3(a, b, c);
		//insert a triangle into the set
		s.insert({ a,{b,c} });
	}
	//return set size
	return s.size();
}
