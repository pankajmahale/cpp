#include<iostream>
#include <format>
using namespace std;

int main()
{
	auto s  = std::format("{}", 1 + 2);  // place holder
	auto s1 = std::format("{0}", 1 + 2); // positional place holder

	//format spacifier width
	int i{ 42 };
	cout << format("|{:5}|", i) << "\n";    //|   42|
	cout << format("|{:{}}|", i, 7) << "\n";//|     42|

	//format spacifier  allign
	i = 50;
	cout << format("|{:<5}|", i) << "\n"; //|50   |
	cout << format("|{:>5}|", i) << "\n"; //|   50| default
	cout << format("|{:^5}|", i) << "\n"; //| 50  |

	//format spacifier  fill
	i = 50;
	cout << format("|{:*<5}|", i) << "\n"; //|50***|
	cout << format("|{:*>5}|", i) << "\n"; //|***50| default
	cout << format("|{:*^5}|", i) << "\n"; //|*50**|

	//format spacifier  Sign
	i = 50; 
	cout << format("|{:<5}|", i)   << "\n"; //|50   |
	cout << format("|{:<+5}|", i)  << "\n"; //|+50  |
	cout << format("|{:< }|", i)   << "\n"; //| 50|
	cout << format("|{:< 5}|", -i) << "\n"; //|-50  |
	cout << format("|{:<5}|", -i)  << "\n"; //|-50  |
	return 0;
}
