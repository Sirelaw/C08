#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>    

class NotFound : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return ("NotFoundException");
	}
};

template <typename T, typename U>
typename T::iterator	easyfind(T& container, U elem)
{
	typename T::iterator	ret;

	ret = std::find(container.begin(), container.end(), elem);
	if (ret != container.end()) {
		return ret;
	}
	throw NotFound();
}

#endif