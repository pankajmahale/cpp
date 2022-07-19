#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

void Transform()
{
	std::vector v1 = { 1, 5, 42, 7, 8 };
	std::vector v2 = { 10, 7, 4, 2, 2 };//second range needs to be at least as long as the first one.Else exception will be thrown;

	{
		std::vector<int> results;
		std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(results), [](int i, int j) {return i + j; });

		results.clear();
		std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(results), std::plus<int>());

		results.clear();
		std::transform(v1.begin(), v1.end(), std::back_inserter(results), std::negate<int>());


		results.clear();
		std::transform(v1.begin(), v1.end(), v2.begin(), v2.begin(), [](int a, int b) {return a >= b ? a : b; });
	}
	{
		std::string str = "Hello World";
		std::string strResult;
		std::transform(str.begin(), str.end(), std::back_inserter(strResult), std::toupper);
		std::transform(str.begin(), str.end(), str.begin(), std::toupper); // change the source itself
	}
	{
		std::vector<int> result;
		std::transform(v1.begin(), v1.end(), std::back_inserter(result), [](int a) { return  a * a; });
	}
}

int main()
{
	Transform();
}