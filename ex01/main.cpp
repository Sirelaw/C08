#include "Span.hpp"
#include "iostream"

int	main()
{
	try{

	Span	test(50);

	for (int i = 0; i < test.size(); i++)
		std::cout << test[i] << std::endl;
	// test.fill(test.begin(), test.begin() + 10);
	// for (int i = 0; i < 50; i++)
	// 	std::cout << test[i] << std::endl;
	test.fill();
	// for (int i = 0; i < 50; i++)
	// 	std::cout << test[i] << std::endl;
	// test.addNumber(20);
	std::cout << "Longest span:\t" << test.longestSpan() << std::endl;
	std::cout << "Shortest span:\t" << test.shortestSpan() << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}