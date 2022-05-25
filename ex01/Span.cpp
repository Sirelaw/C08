#include "iostream"
#include <ctime>
#include <numeric>
#include <algorithm>
#include "Span.hpp"

Span::Span(unsigned int N)
	: _size(N)
{
	_vec.reserve(_size);
}

Span::Span(const Span& to_copy)
	: _size(to_copy._size)
{
	*this = to_copy;
}

Span::~Span()
{
	
}

Span& Span::operator=(const Span& to_assign)
{
	if (this != &to_assign)
	{
		this->_vec = to_assign._vec;
	}
	return (*this);
}

int&	Span::operator[](unsigned int index)
{
	if (index < _size)
		return (_vec[index]);
	throw OutOfRange();
}

void	Span::addNumber(int N)
{
	if (_vec.size() < _size)
		_vec.push_back(N);
	else
		throw OutOfRange();
}

int	Span::shortestSpan()
{
	std::vector<int>	temp(_vec);

	sort(temp.begin(), temp.end());
	adjacent_difference(temp.begin(), temp.end(), temp.begin());
	return *(min_element(temp.begin(), temp.end()));
}

int	Span::longestSpan()
{
	int	max = *(max_element(_vec.begin(), _vec.end()));
	int	min = *(min_element(_vec.begin(), _vec.end()));

	return max - min;
}

void	Span::fill()
{
	srand(time(NULL));
	while (_vec.begin() + _vec.size() != _vec.begin() + _size)
		addNumber(rand());
}

void	Span::fill(Span::iterator start, Span::iterator end)
{
	int	diff;

	if (end - start < 0 || start < _vec.begin() || end > _vec.begin() + _size)
		throw OutOfRange(); 
	srand(time(NULL));
	diff = end - start;
	while (diff--)
		addNumber(rand());
}