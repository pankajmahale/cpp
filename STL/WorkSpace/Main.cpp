// code_report
// https://youtu.be/rXuqUtifDU8

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <functional>
#include <iterator>
/*

Cases:

When a searching element exists:
std::lower_bound() returns iterator to the element itself
When searching element doesn't exist:
If all elements are greater than the searching element:
lower_bound() returns an iterator to begin of the range.
If all elements are lower than the searching element:
lower_bound() returns an iterator to end of the range( No lower bound exists).
Otherwise,
lower_bound() returns an iterator to the next greater element to the search element(The closest element greater than the search element) of the range
*/

using namespace std;

void example1() 
{
	vector<int> v = { 1, 3, 5, 7 };

	cout << (binary_search(v.begin(), v.end(), 3) ? "Found" : "Not Found") << endl; // outputs Found
	cout << (binary_search(v.begin(), v.end(), 4) ? "Found" : "Not Found") << endl; // outputs Not Found
}

void example2()
{
	vector<int> v = { 7, 5, 3, 1 };

	cout << (binary_search(v.begin(), v.end(), 3, greater<int>()) ? "Found" : "Not Found") << endl; // outputs Found
	cout << (binary_search(v.begin(), v.end(), 4, greater<int>()) ? "Found" : "Not Found") << endl; // outputs Not Found
}

void example3()
{
	vector<int> v = { 1, 3, 3, 5, 7 };

	auto it = lower_bound(v.begin(), v.end(), 3);
	auto it2 = lower_bound(v.begin(), v.end(), 4);
	auto it3 = lower_bound(v.begin(), v.end(), 8);

	cout << (it != v.end() ? to_string(*it) : "Not Found") << endl; // outputs 3
	cout << (it2 != v.end() ? to_string(*it2) : "Not Found") << endl; // outputs 5
	cout << (it3 != v.end() ? to_string(*it3) : "Not Found") << endl; // outputs Not Found

	cout << distance(v.begin(), it) << endl; // outputs 1
}

void example4()
{
	vector<int> v = { 1, 3, 3, 5, 7 };

	auto it = upper_bound(v.begin(), v.end(), 3); // when search element exists std::lower_bound() returns iterator to the element itself
	auto it2 = upper_bound(v.begin(), v.end(), 4);// The closest element greater than the search element
	auto it3 = upper_bound(v.begin(), v.end(), 8);// If all elements are lower than the searching element. returns an iterator to end of the range
	auto it4 = upper_bound(v.begin(), v.end(), -1);// If all elements are greater than the searching element. returns an iterator to begin of the range


	cout << (it != v.end() ? to_string(*it) : "Not Found") << endl; // outputs 5
	cout << (it2 != v.end() ? to_string(*it2) : "Not Found") << endl; // outputs 5
	cout << (it3 != v.end() ? to_string(*it3) : "Not Found") << endl; // outputs Not Found
}

template<typename ForwardIterator, typename T>
ForwardIterator first_less_than(ForwardIterator first, ForwardIterator last, T value) 
{
	auto it = std::lower_bound(first, last, value);
	return (it == first ? last : --it);
}

void example5()
{
	vector<int> v = { 1, 3, 3, 5, 7 };

	auto it = first_less_than(v.begin(), v.end(), 3);
	auto it2 = first_less_than(v.begin(), v.end(), 4);
	auto it3 = first_less_than(v.begin(), v.end(), 8);

	cout << (it != v.end() ? to_string(*it) : "Not Found") << endl; // outputs 1
	cout << (it2 != v.end() ? to_string(*it2) : "Not Found") << endl; // outputs 3
	cout << (it3 != v.end() ? to_string(*it3) : "Not Found") << endl; // outputs 7
}

int main()
{

	example1();
	example2();
	example3();
	example4();
	example5();

	return 0;
}