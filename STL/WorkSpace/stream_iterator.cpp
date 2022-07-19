#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void Example0()
{
	vector<int> vec;
	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(vec));
	copy(begin(vec), end(vec), ostream_iterator<int>(cout, " "));
}

void Example1()
{
	// Get input stream and end of stream iterators
	istream_iterator<int> cin_it(cin);
	istream_iterator<int> eos;

	// Get output stream iterators
	ostream_iterator<int> cout_it(cout, "*");
	copy(cin_it, eos, cout_it);
}

void Example2()
{
	vector<string> strVec;
	ifstream fin("C:\\Temp\\string.txt");

	istream_iterator<string> fin_it(fin);
	istream_iterator<string> eos;

	ostream_iterator<string> cout_it(cout, "\n");

	copy(fin_it, eos, back_inserter(strVec));
	sort(begin(strVec), end(strVec));
	copy(begin(strVec), end(strVec), cout_it);
}

void Example3()
{
	vector<int> vec;

	istream_iterator<int> cin_it(cin);
	istream_iterator<int> eos;

	ostream_iterator<int> cout_it(cout, " ");
	for_each(cin_it, eos, [&](int a)
		{
			if (a % 2 == 0)
			{
				vec.push_back(a);
			}
		}
	);
	sort(begin(vec), end(vec));
	copy(begin(vec), end(vec), cout_it);
}

int main()
{
	Example1();
	Example2(); 
	Example3();
	return 0;
}