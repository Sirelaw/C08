#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	try{

		std::vector<int>	vec(10);
		std::vector<std::string>	str_vec(5);
		std::string			temp = "Put this here.";

		vec[5] = 42;
		str_vec[2] = temp;
		std::cout << *(easyfind(vec, 42)) << std::endl;
		std::cout << *(easyfind(str_vec, temp)) << std::endl;
		std::cout << *(easyfind(str_vec, "check")) << std::endl;
	}
	catch (std::exception& e){

		std::cout << e.what() << std::endl;
	}
    return (0);
}