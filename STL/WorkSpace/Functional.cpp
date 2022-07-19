#include<functional>
#include<algorithm>
#include<vector>
#include<iterator>	
#include<iostream>
int main()
{
	std::vector v1{ 2,4,6,8,7 };
	std::vector v2{ 3,5,7,9,7 };

	std::vector<int>v3;

	std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::plus<int>());
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();

	std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::minus<int>());
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();

	std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::multiplies<int>());
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();

	std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::modulus<int>());
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();

	std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::divides<int>());
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();

	std::transform(v1.begin(), v1.end(), std::back_inserter(v3), std::negate<int>()); // one range only
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();

	// comparision classes.
	std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::equal_to<int>());
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();

	std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::not_equal_to<int>());
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();

	std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::greater<int>());
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();

	std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::greater_equal<int>());
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();

	std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::less<int>());
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();

	std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::less_equal<int>());
	std::copy(v3.begin(), v3.end(), std::ostream_iterator<int>(std::cout, " ,"));
	v3.clear();
}