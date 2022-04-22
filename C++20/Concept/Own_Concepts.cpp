#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<concepts>
using namespace std;
struct MyStruct
{
	int val;
	MyStruct(int v) : val(v)
	{
	}
	auto operator<=>(const MyStruct&) const = default;
};

template<typename It>
concept RandomAccessIter = requires(It i, typename std::incrementable_traits<It>::difference_type n)
{
	{i - i}->std::same_as<decltype(n)>;
	{i + n}->std::same_as<It>;
	{i - n}->std::same_as<It>;
};

template<typename It>
concept LessThanComparable = requires(It a, It b)
{
	typename It::value_type;
	{*a < *b}-> std::same_as<bool>;
};

//template<RandomAccessIter T>sorthand notation only used for single concept.
template<typename T> requires RandomAccessIter<T>&& LessThanComparable<T>
void mysort(T begin, T end)
{
	std::sort(begin, end);
}
int main()
{
	std::vector<MyStruct> vec{ 1,2,3,4,5,6 };
	mysort(begin(vec), end(vec));
}