#include<functional>
#include<algorithm>
#include<vector>
#include<iterator>	
#include<string>
#include<iostream>

void Goodbyee(std::string& s)
{
	std::cout << "Goodbyee.." << s << "\n";
}

class Object
{
public:
	void Hello(std::string& s)
	{
		std::cout << "Hello.." << s << "\n";
	}
};

int main()
{
	using namespace std::placeholders; // adds visibility of _1, _2, _3,...

	std::string name("Pankaj");
	auto fun = std::bind(&Goodbyee, _1);
	fun(name); // equivalent to Goodbyee(name);

	Object obj;
	auto f = std::bind(&Object::Hello, obj, _1);
	f(name);// equivalent to obj.hello(str)

	//bind the lambda

	auto lambda = [](int a, int b, int& c) {c = a + b; };
	int a = 10, b = 20, c = 0;
	auto lbind = std::bind(&decltype(lambda)::operator(), lambda, _1, _2, _3);
	lbind(a, b, c);
	std::cout << "C: " << c;

}