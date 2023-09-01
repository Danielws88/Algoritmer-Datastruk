#include <iostream>

double fac (int n)
{
	if (n == 1)
		return 1;
	else
		return n * fac(n - 1);
}

int fib (int n) {
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}

int main()
{
	int a;
	std::cout << "1 for factorial function, 2 for fibonacci: ";
	std::cin >> a;

	int n;

	if (a == 1)
	{
		std::cout << "Give me a number, please: ";
		std::cin >> n;
		std::cout << fac(n) << std::endl;
	}

	if (a == 2)
	{
		std::cout << "Give me a number, please: ";
		std::cin >> n;
		std::cout << fib(n) << std::endl;
	}

	return main();
}

